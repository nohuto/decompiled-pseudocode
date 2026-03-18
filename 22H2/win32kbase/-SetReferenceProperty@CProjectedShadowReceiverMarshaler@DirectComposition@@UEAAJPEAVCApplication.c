/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000F070
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C002D3BC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C002D3BC.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetReferenceProperty(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (char *)this + 72,
             a4,
             1LL,
             17,
             (char *)this + 16,
             128,
             0,
             a5);
  if ( a3 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (char *)this + 88,
             a4,
             1LL,
             196,
             (char *)this + 16,
             512,
             0,
             a5);
  return 3221225485LL;
}
