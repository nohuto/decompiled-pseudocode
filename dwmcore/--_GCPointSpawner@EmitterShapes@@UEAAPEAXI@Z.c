EmitterShapes::CPointSpawner *__fastcall EmitterShapes::CPointSpawner::`scalar deleting destructor'(
        EmitterShapes::CPointSpawner *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
