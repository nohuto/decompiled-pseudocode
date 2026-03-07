_BOOL8 __fastcall WIDENER::bValid(WIDENER *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 143) && !*((_DWORD *)this + 314) && *((_QWORD *)this + 124) && !*((_DWORD *)this + 276) )
  {
    if ( *((_QWORD *)this + 104) )
      return *((_DWORD *)this + 236) == 0;
  }
  return result;
}
