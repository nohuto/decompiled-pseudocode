__int64 __fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( *((_BYTE *)this + 108) != (a4 != 0) )
      {
        *((_DWORD *)this + 4) |= 0x40u;
        *((_BYTE *)this + 108) = a4 != 0;
        *a5 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else if ( *((_DWORD *)this + 22) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 22) = a4;
    *a5 = 1;
  }
  return v5;
}
