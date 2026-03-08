/*
 * XREFs of ?_Reallocate_exactly@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX_K@Z @ 0x1800B9E5C
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1800B9D68 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BE@@std@@YA_K_K@Z @ 0x1800B9EE4 (--$_Get_size_of_n@$0BE@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Reallocate_exactly(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  SIZE_T size_of; // rax
  void *v6; // rbx

  v3 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
  size_of = std::_Get_size_of_n<20>(a2);
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<D2D1_GRADIENT_STOP>::_Change_array(a1, v6, v3, a2);
}
