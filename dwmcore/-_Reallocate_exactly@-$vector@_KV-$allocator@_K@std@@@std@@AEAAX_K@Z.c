/*
 * XREFs of ?_Reallocate_exactly@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1801E20D0
 * Callers:
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1E04 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned __int64>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  void *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  size_of = std::_Get_size_of_n<8>(a2);
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned __int64>::_Change_array(a1, (__int64)v6, v4, a2);
}
