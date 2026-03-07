EmitterShapes::CLineSpawner *__fastcall EmitterShapes::CLineSpawner::`vector deleting destructor'(
        EmitterShapes::CLineSpawner *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
