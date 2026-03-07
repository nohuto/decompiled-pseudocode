CSpriteVectorShape *__fastcall CSpriteVectorShape::`scalar deleting destructor'(CSpriteVectorShape *this, char a2)
{
  CSpriteVectorShape::~CSpriteVectorShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x100uLL);
    else
      operator delete(this);
  }
  return this;
}
