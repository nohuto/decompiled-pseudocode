/*
 * XREFs of ?SetBufferProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C026A7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetBufferProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // xmm0
  int v10; // eax

  v6 = 0;
  *a6 = 0;
  switch ( a3 )
  {
    case 7:
      if ( a5 == 12 )
      {
        *(_QWORD *)((char *)this + 132) = *(_QWORD *)a4;
        v10 = a4[2];
        *((_DWORD *)this + 4) |= 0x1000u;
        *((_DWORD *)this + 35) = v10;
        goto LABEL_13;
      }
      return (unsigned int)-1073741811;
    case 10:
      if ( a5 == 16 )
      {
        v9 = *(_OWORD *)a4;
        *((_DWORD *)this + 4) |= 0x4000u;
        *(_OWORD *)((char *)this + 152) = v9;
        goto LABEL_13;
      }
      return (unsigned int)-1073741811;
    case 12:
      if ( a5 == 12 )
      {
        *((_QWORD *)this + 15) = *(_QWORD *)a4;
        v8 = a4[2];
        *((_DWORD *)this + 4) |= 0x10000u;
        *((_DWORD *)this + 32) = v8;
        goto LABEL_13;
      }
      return (unsigned int)-1073741811;
  }
  if ( a3 != 15 || a5 != 16 )
    return (unsigned int)-1073741811;
  v7 = *(_OWORD *)a4;
  *((_DWORD *)this + 4) |= 0x40000u;
  *(_OWORD *)((char *)this + 168) = v7;
LABEL_13:
  *a6 = 1;
  return v6;
}
