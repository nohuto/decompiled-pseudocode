__int64 __fastcall DirectComposition::CHolographicViewerMarshaler::SetIntegerProperty(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v5 = 0;
  if ( !a3 )
  {
    v11 = *((_DWORD *)this + 15);
    if ( (v11 & 1) == 0 )
    {
      if ( a4 )
      {
        *((_DWORD *)this + 16) = a4;
        *((_DWORD *)this + 15) = v11 | 1;
        *a5 = 1;
        return v5;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741790;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    v10 = *((_DWORD *)this + 15);
    if ( (v10 & 2) == 0 )
    {
      if ( !a4 )
        return (unsigned int)-1073741811;
      *((_DWORD *)this + 17) = a4;
      v9 = v10 | 2;
      goto LABEL_13;
    }
    return (unsigned int)-1073741790;
  }
  v7 = v6 - 4;
  if ( !v7 )
  {
    v8 = *((_DWORD *)this + 15);
    if ( (v8 & 4) == 0 )
    {
      if ( a4 > 2 )
        return (unsigned int)-1073741811;
      *((_DWORD *)this + 18) = a4;
      v9 = v8 | 4;
LABEL_13:
      *((_DWORD *)this + 15) = v9;
      goto LABEL_14;
    }
    return (unsigned int)-1073741790;
  }
  if ( v7 != 2 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 28) != (_DWORD)a4 )
  {
    *((_DWORD *)this + 14) |= 0x40u;
    *((_DWORD *)this + 28) = a4;
LABEL_14:
    *a5 = 1;
  }
  return v5;
}
