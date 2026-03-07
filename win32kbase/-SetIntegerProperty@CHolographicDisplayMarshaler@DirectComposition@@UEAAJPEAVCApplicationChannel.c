__int64 __fastcall DirectComposition::CHolographicDisplayMarshaler::SetIntegerProperty(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    if ( v6 == 2 )
    {
      *((_DWORD *)this + 4) |= 0x80u;
      *((_DWORD *)this + 18) = a4;
      *a5 = 1;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_DWORD *)this + 17) = a4;
    *a5 = 1;
  }
  return v5;
}
