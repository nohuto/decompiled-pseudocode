/*
 * XREFs of ?IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01E1E10
 * Callers:
 *     <none>
 * Callees:
 *     ?PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z @ 0x1C01E1E44 (-PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z.c)
 */

bool __fastcall DirectComposition::CTableTransferEffectMarshaler::IsPropertyAnimatable(
        DirectComposition::CTableTransferEffectMarshaler *a1,
        unsigned int a2,
        int a3)
{
  unsigned int v5[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  return (int)DirectComposition::CTableTransferEffectMarshaler::PropertyIdToColorChannelAndIndex(a1, a2, v5, &v6) >= 0
      && a3 == 18;
}
