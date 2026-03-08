/*
 * XREFs of ?_Reallocate_exactly@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801C7CB4
 * Callers:
 *     ?reserve@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C7FD0 (-reserve@-$vector@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics@Foundation@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1800D16CC (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::vector<Windows::Foundation::Numerics::float3>::_Reallocate_exactly(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v3; // rdi
  SIZE_T size_of; // rax
  void *v6; // rbx

  v3 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
  size_of = std::_Get_size_of_n<12>(a2);
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<Windows::Foundation::Numerics::float3>::_Change_array(a1, (__int64)v6, v3, a2);
}
