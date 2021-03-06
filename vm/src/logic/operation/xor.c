/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xor.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:14:52 by qjosmyn           #+#    #+#             */
/*   Updated: 2020/11/14 19:34:48 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

void		op_xor(t_vm *vm, t_carriage *carriage)
{
	t_arg		*args;
	int32_t		*regs;
	extern t_op	g_optab[17];

	args = carriage->args;
	regs = carriage->regs;
	take_args(vm->arena, carriage, THIRD);
	regs[args[THIRD].value - 1] = args[FIRST].value ^ args[SECOND].value;
	carriage->carry = regs[args[THIRD].value - 1] == 0 ? 1 : 0;
}
