#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{

private:


public:

	Ice(void);
	Ice(Ice const &src);
	virtual ~Ice(void);
	Ice	&operator=(Ice const &rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);

};

#endif
