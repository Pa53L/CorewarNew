/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 20:15:47 by rretta            #+#    #+#             */
/*   Updated: 2020/11/14 21:24:04 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

void	ft_init_structs(t_data *data, int instr_num)
{
	if (!(data->header = (t_header*)malloc(sizeof(t_header))))
		ft_exit(MALLOC_ERR);
	ft_memset(data->header->prog_name, '\0', PROG_NAME_LENGTH + 1);
	ft_memset(data->header->comment, '\0', COMMENT_LENGTH + 1);
	data->header->is_comment = 0;
	data->header->is_name = 0;
	if (!(data->instrs = (t_instr*)malloc(sizeof(t_instr) * instr_num)))
		ft_exit(MALLOC_ERR);
	ft_memset(data->instrs, '\0', sizeof(t_instr) * instr_num);
	if (!(data->label = (t_label*)malloc(sizeof(t_label))))
		ft_exit(MALLOC_ERR);
	data->line_count = 0;
	data->instr_num = 0;
}
