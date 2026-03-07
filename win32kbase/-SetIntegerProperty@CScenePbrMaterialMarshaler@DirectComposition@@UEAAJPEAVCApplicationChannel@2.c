__int64 __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetIntegerProperty(
        DirectComposition::CScenePbrMaterialMarshaler *this,
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
    if ( v6 == 3 )
    {
      if ( *((_BYTE *)this + 84) != (a4 != 0) )
      {
        *((_DWORD *)this + 4) |= 0x200u;
        *((_BYTE *)this + 84) = a4 != 0;
        *a5 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else if ( *((_DWORD *)this + 15) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_DWORD *)this + 15) = a4;
    *a5 = 1;
  }
  return v5;
}
