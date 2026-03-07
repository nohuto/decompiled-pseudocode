_BOOL8 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
    return *((_QWORD *)this + 24) != 0LL;
  return result;
}
