/*
 * XREFs of ?IsPropertyAnimatable@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01DC240
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01DC278 (-IsPropertyAnimatable@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRES.c)
 */

char __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::IsPropertyAnimatable(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a2 == 10 )
    return a3 == 69;
  if ( a2 != 11 && a2 != 13 )
    return DirectComposition::CScenePbrMaterialMarshaler::IsPropertyAnimatable();
  return a3 == 18;
}
