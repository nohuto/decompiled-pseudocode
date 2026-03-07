CCompositionTextLine *__fastcall CCompositionTextLine::`scalar deleting destructor'(
        CCompositionTextLine *this,
        char a2)
{
  CCompositionTextLine::~CCompositionTextLine(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
