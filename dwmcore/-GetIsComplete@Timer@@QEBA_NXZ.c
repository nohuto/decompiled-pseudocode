bool __fastcall Timer::GetIsComplete(Timer *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 3);
  result = 0;
  if ( !*((_BYTE *)this + 16) )
  {
    if ( v1 >= *(_DWORD *)this && v1 < *((_DWORD *)this + 1) )
      return result;
    return 1;
  }
  if ( v1 <= *(_DWORD *)this || v1 > *((_DWORD *)this + 1) )
    return 1;
  return result;
}
