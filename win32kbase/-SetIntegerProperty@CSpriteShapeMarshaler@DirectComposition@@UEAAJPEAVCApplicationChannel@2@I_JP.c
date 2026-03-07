__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetIntegerProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v11; // eax

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 4;
  if ( !v6 )
  {
    v11 = a4 != 0;
    if ( *((_DWORD *)this + 33) == v11 )
      return v5;
    *((_DWORD *)this + 4) |= 0x4000u;
    *((_DWORD *)this + 33) = v11;
    goto LABEL_8;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((_DWORD *)this + 29) == a4 )
      return v5;
    *((_DWORD *)this + 29) = a4;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((_DWORD *)this + 30) == a4 )
      return v5;
    *((_DWORD *)this + 30) = a4;
    goto LABEL_7;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)this + 32) != a4 )
    {
      *((_DWORD *)this + 32) = a4;
      goto LABEL_7;
    }
  }
  else if ( *((_DWORD *)this + 31) != a4 )
  {
    *((_DWORD *)this + 31) = a4;
LABEL_7:
    *((_DWORD *)this + 4) |= 0x200u;
LABEL_8:
    *a5 = 1;
  }
  return v5;
}
