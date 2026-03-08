/*
 * XREFs of ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1800AB544
 * Callers:
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1800AB7A8 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Reallocate_exactly(__int64 a1, SIZE_T a2)
{
  __int64 v3; // rdi
  void *v5; // rbx

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
  memmove_0(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned char>::_Change_array(a1, v5, v3, a2);
}
