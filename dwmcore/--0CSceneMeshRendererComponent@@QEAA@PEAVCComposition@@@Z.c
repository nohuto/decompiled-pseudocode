/*
 * XREFs of ??0CSceneMeshRendererComponent@@QEAA@PEAVCComposition@@@Z @ 0x18024BC20
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x180036340 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

CSceneMeshRendererComponent *__fastcall CSceneMeshRendererComponent::CSceneMeshRendererComponent(
        CSceneMeshRendererComponent *this,
        struct CComposition *a2)
{
  SIZE_T size_of; // rax
  __int64 v4; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSceneComponent::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 8) = v4;
  *(_QWORD *)this = &CSceneMeshRendererComponent::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>();
  return this;
}
