void **__fastcall CSecondaryD2DBitmap::`vector deleting destructor'(void **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this + 33);
  CD2DBitmap::~CD2DBitmap((CD2DBitmap *)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1C0uLL);
  return this;
}
