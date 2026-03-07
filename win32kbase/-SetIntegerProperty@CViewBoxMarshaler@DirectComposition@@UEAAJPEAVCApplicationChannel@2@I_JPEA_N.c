__int64 __fastcall DirectComposition::CViewBoxMarshaler::SetIntegerProperty(
        DirectComposition::CViewBoxMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 2 )
  {
    if ( *((_DWORD *)this + 20) != a4 )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *((_DWORD *)this + 20) = a4;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
