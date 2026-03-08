/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4Enum@SceneMaterialInputType@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4Enum@SceneMaterialInputType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18024BA2C
 * Callers:
 *     ??$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@?$map@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@_N@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x18024BB4C (--$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@-$map@W4Enum@SceneMaterialInputType@@IU-$l.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180036984 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int **a5)
{
  SIZE_T size_of; // rax
  __int64 v8; // rax
  __int64 v9; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  *(_QWORD *)(v8 + 28) = **a5;
  v9 = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v9++ + 24) = 0;
  while ( v9 < 2 );
  return a1;
}
