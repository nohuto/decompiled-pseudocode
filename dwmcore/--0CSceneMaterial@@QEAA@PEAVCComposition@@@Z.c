/*
 * XREFs of ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18024C65C
 * Callers:
 *     ??0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z @ 0x1801BE12C (--0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BA17C (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

CSceneMaterial *__fastcall CSceneMaterial::CSceneMaterial(CSceneMaterial *this, struct CComposition *a2)
{
  unsigned __int64 v3; // rbx
  SIZE_T size_of; // rax
  __int64 v5; // rax

  *((_DWORD *)this + 2) = 0;
  v3 = (unsigned __int64)this + 64;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSceneMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 8) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *((_QWORD *)this + 9) = v5;
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (struct ISceneNotificationListener *)(v3 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  return this;
}
