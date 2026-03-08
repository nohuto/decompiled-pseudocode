/*
 * XREFs of ??0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z @ 0x1800AF6D8
 * Callers:
 *     ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AF47C (-Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

CSceneResourceManager *__fastcall CSceneResourceManager::CSceneResourceManager(
        CSceneResourceManager *this,
        struct CComposition *a2)
{
  SIZE_T size_of; // rax
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CSceneResourceManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 8) = v4;
  return this;
}
