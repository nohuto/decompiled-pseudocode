/*
 * XREFs of ?_Reallocate_exactly@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x1801C7BC4
 * Callers:
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x18001DF68 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1801B5680 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 */

__int64 __fastcall std::vector<float>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  void *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  size_of = std::_Get_size_of_n<4>(a2);
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<float>::_Change_array(a1, (__int64)v6, v4, a2);
}
