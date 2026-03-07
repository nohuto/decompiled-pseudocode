__int64 __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::SetIntegerProperty(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  v6 = a3 - 4;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 24) == a4 )
        return v5;
      *((_DWORD *)this + 4) |= 0x800u;
      *((_DWORD *)this + 24) = a4;
    }
    else
    {
      if ( *((_DWORD *)this + 23) == a4 )
        return v5;
      *((_DWORD *)this + 4) |= 0x400u;
      *((_DWORD *)this + 23) = a4;
    }
    *a5 = 1;
    return v5;
  }
  if ( *((_DWORD *)this + 22) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((_DWORD *)this + 22) = a4;
    *a5 = 1;
  }
  return v5;
}
