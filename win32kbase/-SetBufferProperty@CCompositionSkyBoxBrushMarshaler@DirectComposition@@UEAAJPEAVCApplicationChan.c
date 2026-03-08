/*
 * XREFs of ?SetBufferProperty@CCompositionSkyBoxBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C026C290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::SetBufferProperty(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx

  v6 = 0;
  if ( a3 == 3
    && a5 == 12
    && (*((_DWORD *)this + 4) |= 0x80u, this != (DirectComposition::CCompositionSkyBoxBrushMarshaler *)-92LL) )
  {
    *(_QWORD *)((char *)this + 92) = *(_QWORD *)a4;
    *((_DWORD *)this + 25) = a4[2];
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
