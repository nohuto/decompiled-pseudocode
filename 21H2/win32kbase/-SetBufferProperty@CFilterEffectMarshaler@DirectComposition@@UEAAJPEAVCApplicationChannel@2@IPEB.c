/*
 * XREFs of ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0215D20
 * Callers:
 *     ?SetBufferProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0216620 (-SetBufferProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetBufferProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02169A0 (-SetBufferProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0216E90 (-SetBufferProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 *     ?SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02173B0 (-SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetBufferProperty@CFloodEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0217660 (-SetBufferProperty@CFloodEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02180E0 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0219C20 (-SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetBufferProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  unsigned int v7; // r8d

  v6 = 0;
  *a6 = 0;
  if ( (a3 & 0xC0000000) == 0xC0000000 && (v7 = a3 & 0x3FFFFFFF, a4) && a5 == 16 && v7 < *((_DWORD *)this + 20) )
  {
    *(_OWORD *)(*((_QWORD *)this + 13) + 16LL * v7) = *a4;
    *((_DWORD *)this + 28) = 0;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
