/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon <rsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:09:31 by rsimon            #+#    #+#             */
/*   Updated: 2023/08/18 21:26:55 by rsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s;

	if (n == -2147483648)
	{
		n = 147483648;
		write(fd, "-2", 2);
	}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
	}
	s = (n % 10) + '0';
	write(fd, &s, 1);
}

// int main()
// {
//     ft_putnbr_fd(-2147483648, 1);
//     return (0);
// }
