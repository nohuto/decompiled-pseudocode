CGlobalDrawingContext *__fastcall CGlobalDrawingContext::`vector deleting destructor'(
        CGlobalDrawingContext *this,
        char a2)
{
  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1FF0uLL);
    else
      operator delete(this);
  }
  return this;
}
