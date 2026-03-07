__int64 __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::SetIntegerProperty(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  int v5; // r8d

  *a5 = 0;
  if ( a3 )
  {
    v5 = a3 - 2;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 3221225485LL;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_DWORD *)this + 22) = a4;
    }
    else
    {
      *((_DWORD *)this + 4) |= 0x80u;
      *((_DWORD *)this + 21) = a4;
    }
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 20) = a4;
  }
  *a5 = 1;
  return 0LL;
}
