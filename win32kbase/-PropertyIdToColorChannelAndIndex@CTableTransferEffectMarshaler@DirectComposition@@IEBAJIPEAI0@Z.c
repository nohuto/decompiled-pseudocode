/*
 * XREFs of ?PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z @ 0x1C024F518
 * Callers:
 *     ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024F450 (-GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C024F4C0 (-IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXP.c)
 *     ?SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C024F670 (-SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::PropertyIdToColorChannelAndIndex(
        DirectComposition::CTableTransferEffectMarshaler *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( (a2 & 0xF) == 0xF && a2 >> 6 < *((_DWORD *)this + 4 * ((a2 >> 4) & 3) + 30) )
  {
    *a4 = a2 >> 6;
    *a3 = (a2 >> 4) & 3;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
