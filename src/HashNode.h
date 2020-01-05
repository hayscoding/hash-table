#ifndef HASHNODE_H
#define HASHNODE_H

template <typename K, typename V>
class HashNode() {
public:
	HashNode(const K &key, const V &value);
    K getKey() const;
    V getValue() const;
    void setValue(V value);
    HashNode *getNext() const;
    void setNext(HashNode *next);
private:
    K key;
    V value;
    HashNode *next;
}
#endif