__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::SetBufferProperty(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // eax
  __int128 v8; // xmm0

  v6 = 0;
  *a6 = 0;
  if ( a3 == 6 )
  {
    if ( a5 == 16 )
    {
      v8 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) |= 0x800u;
      *(_OWORD *)((char *)this + 108) = v8;
      goto LABEL_7;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 8 || a5 != 12 )
    return (unsigned int)-1073741811;
  *((_QWORD *)this + 17) = *(_QWORD *)a4;
  v7 = a4[2];
  *((_DWORD *)this + 4) |= 0x2000u;
  *((_DWORD *)this + 36) = v7;
LABEL_7:
  *a6 = 1;
  return v6;
}
