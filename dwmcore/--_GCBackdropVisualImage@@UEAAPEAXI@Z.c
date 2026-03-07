CBackdropVisualImage *__fastcall CBackdropVisualImage::`scalar deleting destructor'(
        CBackdropVisualImage *this,
        char a2)
{
  CBackdropVisualImage::~CBackdropVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x808uLL);
    else
      operator delete(this);
  }
  return this;
}
