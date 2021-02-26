#ifndef KEEPER_HPP
#define KEEPER_HPP

#include "visitor.hpp"

class Keeper : public Visitor
{
public:
    virtual void visit(Monkey &monkey) override;
    virtual void visit(Tiger &monkey) override;
    virtual void visit(Fish &monkey) override;
    virtual ~Keeper(){};
};

#endif // KEEPER_HPP