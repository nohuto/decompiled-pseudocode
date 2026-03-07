__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetBufferProperty(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  __int128 v8; // xmm0
  int v10; // eax

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    v8 = *(_OWORD *)a4;
    *((_DWORD *)this + 4) |= 0x100u;
    *((_OWORD *)this + 5) = v8;
LABEL_5:
    *a6 = 1;
    return v6;
  }
  if ( v7 == 2 )
  {
    if ( !a4 || a5 != 12 )
      return v6;
    *((_DWORD *)this + 25) = *a4;
    *((_DWORD *)this + 26) = a4[1];
    v10 = a4[2];
    *((_DWORD *)this + 4) |= 0x400u;
    *((_DWORD *)this + 27) = v10;
    goto LABEL_5;
  }
  return 3221225485LL;
}
