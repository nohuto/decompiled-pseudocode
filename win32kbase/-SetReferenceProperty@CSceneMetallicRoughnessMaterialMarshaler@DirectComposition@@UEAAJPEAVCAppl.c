/*
 * XREFs of ?SetReferenceProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C025D910
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 *     ?SetReferenceProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C025DA8C (-SetReferenceProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 */

__int64 __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::SetReferenceProperty(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 == 9 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 15,
             (__int64)a4,
             1,
             156,
             (int *)this + 4,
             0x4000,
             0,
             a5);
  if ( a3 == 12 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 19,
             (__int64)a4,
             1,
             156,
             (int *)this + 4,
             0x20000,
             0,
             a5);
  return DirectComposition::CScenePbrMaterialMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
