/*
 * XREFs of ?SetReferenceProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetReferenceProperty(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 7,
             (__int64)a4,
             1,
             155,
             (int *)this + 4,
             32,
             0,
             a5);
  if ( a3 == 1 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 8,
             (__int64)a4,
             1,
             157,
             (int *)this + 4,
             64,
             0,
             a5);
  return 3221225485LL;
}
