/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:19:33 by albrusso          #+#    #+#             */
/*   Updated: 2024/07/22 14:12:59 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern intern;
    AForm* form;

    form = intern.makeForm("ShrubberyCreationForm", "home");
    delete form;

    form = intern.makeForm("RobotomyRequestForm", "robot");
    delete form;

    form = intern.makeForm("PresidentialPardonForm", "president");
    delete form;

    form = intern.makeForm("UnknownForm", "unknown");
    delete form;

    return 0;
}