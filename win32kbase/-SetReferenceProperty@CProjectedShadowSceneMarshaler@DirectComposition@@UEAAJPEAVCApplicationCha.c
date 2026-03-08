/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetReferenceProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (char *)this + 128,
             a4,
             1LL,
             36,
             (char *)this + 16,
             256,
             0,
             a5);
  else
    return 3221225485LL;
}
