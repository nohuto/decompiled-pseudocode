__int64 __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetBufferProperty(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // eax
  __int128 v9; // xmm0

  v6 = 0;
  *a6 = 0;
  if ( a3 == 3 )
  {
    if ( a5 == 16 )
    {
      v9 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_OWORD *)this + 6) = v9;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 5 || a5 != 12 )
    return (unsigned int)-1073741811;
  *((_QWORD *)this + 15) = *(_QWORD *)a4;
  v7 = a4[2];
  *((_DWORD *)this + 4) |= 0x400u;
  *((_DWORD *)this + 32) = v7;
LABEL_5:
  *a6 = 1;
  return v6;
}
