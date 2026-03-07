CCompositionToken *__fastcall CCompositionToken::`vector deleting destructor'(CCompositionToken *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 8) == 6;
  *((_QWORD *)this + 1) = &CTokenBase::`vftable';
  if ( !v1 )
    *((_DWORD *)this + 8) = 6;
  return this;
}
