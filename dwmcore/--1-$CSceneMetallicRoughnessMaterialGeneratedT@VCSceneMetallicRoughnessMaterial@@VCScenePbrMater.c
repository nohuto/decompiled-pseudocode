/*
 * XREFs of ??1?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAA@XZ @ 0x1801BE970
 * Callers:
 *     ??_GCSceneMetallicRoughnessMaterial@@UEAAPEAXI@Z @ 0x1801C0880 (--_GCSceneMetallicRoughnessMaterial@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::~CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[21]);
  this[21] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  return CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::~CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>((CSceneMaterial *)this);
}
