// weapon.h
#ifndef WEAPON_H
#define WEAPON_H

template <typename T>
class Inventory; // Forward declaration

template <typename T>
class Weapon {
public:
    virtual void Attack(Inventory<T>* selfInventory, Inventory<T>* opponentInventory) = 0;
};

template <typename T>
class Rock : public Weapon<T> {
public:
    void Attack(Inventory<T>* selfInventory, Inventory<T>* opponentInventory) override;
};

template <typename T>
class Paper : public Weapon<T> {
public:
    void Attack(Inventory<T>* selfInventory, Inventory<T>* opponentInventory) override;
};

template <typename T>
class Scissor : public Weapon<T> {
public:
    void Attack(Inventory<T>* selfInventory, Inventory<T>* opponentInventory) override;
};

template <typename T>
class Protection : public Weapon<T> {
public:
    void Attack(Inventory<T>* selfInventory, Inventory<T>* opponentInventory) override;
};

#endif
