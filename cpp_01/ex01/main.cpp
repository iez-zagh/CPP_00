/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:25:38 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/23 19:42:30 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie *z = zombieHorde(N, "bagito");
    for (int i=0;i < N;i++)
        z[i].announce();
    delete[] z;
}