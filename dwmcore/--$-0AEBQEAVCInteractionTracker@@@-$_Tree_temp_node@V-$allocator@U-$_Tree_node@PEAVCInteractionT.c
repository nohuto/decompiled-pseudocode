/*
 * XREFs of ??$?0AEBQEAVCInteractionTracker@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@AEBQEAVCInteractionTracker@@@Z @ 0x180232C60
 * Callers:
 *     ??$_Emplace@AEBQEAVCInteractionTracker@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@_N@1@AEBQEAVCInteractionTracker@@@Z @ 0x180232D84 (--$_Emplace@AEBQEAVCInteractionTracker@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$les.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180036984 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  SIZE_T size_of; // rax
  __int64 v8; // rax
  __int64 v9; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  v9 = 0LL;
  *(_QWORD *)(v8 + 32) = *a4;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
  {
    *(_BYTE *)(v9 + a1[1] + 24) = 0;
    ++v9;
  }
  while ( v9 < 2 );
  return a1;
}
