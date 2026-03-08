/*
 * XREFs of ?IsOfType@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C1FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C1FFC (-IsOfType@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@UEBA_NW4MIL_RESOU.c)
 */

char __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::IsOfType(
        __int64 a1,
        int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 159 )
    return 1;
  v2 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
