__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBoolProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v7; // r8d
  int v8; // r8d
  char v9; // cl
  char v10; // al
  char v11; // cl
  char v12; // cl
  char v13; // al

  v5 = 0;
  v7 = a3 - 4;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return (unsigned int)-1073741811;
      v9 = (*((_BYTE *)this + 108) & 4) != 0;
      if ( v9 != a4 )
      {
        v9 = a4;
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x40u;
      }
      v10 = *((_BYTE *)this + 108) & 0xFB;
      v11 = 4 * v9;
    }
    else
    {
      v12 = (*((_BYTE *)this + 108) & 2) != 0;
      if ( v12 != a4 )
      {
        v12 = a4;
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x40u;
      }
      v10 = *((_BYTE *)this + 108) & 0xFD;
      v11 = 2 * v12;
    }
    *((_BYTE *)this + 108) = v11 | v10;
    return v5;
  }
  v13 = *((_BYTE *)this + 108) & 1;
  if ( v13 != a4 )
  {
    v13 = a4;
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x40u;
  }
  *((_BYTE *)this + 108) = v13 | *((_BYTE *)this + 108) & 0xFE;
  return v5;
}
