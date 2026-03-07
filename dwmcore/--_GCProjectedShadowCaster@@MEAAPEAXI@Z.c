CProjectedShadowCaster *__fastcall CProjectedShadowCaster::`scalar deleting destructor'(
        CProjectedShadowCaster *this,
        char a2)
{
  CProjectedShadowCaster::~CProjectedShadowCaster(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x88uLL);
    else
      operator delete(this);
  }
  return this;
}
