#ifndef AGH_VECTOR_CORE_H
#define AGH_VECTOR_CORE_H

template<class T>
bool aghVector<T>::insert(int _index, T const& _obj)
{
   return true;
}

template<class T>
T& aghVector<T>::at(int _index)const
{
   T* a = new T();
   return *a;
}

#endif