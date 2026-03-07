EmitterShapes::CRectangleVolumeSpawner *__fastcall EmitterShapes::CRectangleVolumeSpawner::`scalar deleting destructor'(
        EmitterShapes::CRectangleVolumeSpawner *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
