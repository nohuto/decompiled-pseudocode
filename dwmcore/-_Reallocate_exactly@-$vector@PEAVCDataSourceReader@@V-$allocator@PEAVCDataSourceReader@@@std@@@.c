/*
 * XREFs of ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x1801B4F9C
 * Callers:
 *     ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1800FFA80 (-RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ.c)
 *     ?RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x1801B4B84 (-RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::vector<CDataSourceReader *>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  void *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  size_of = std::_Get_size_of_n<8>(a2);
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<CDataSourceReader *>::_Change_array(a1, (__int64)v6, v4, a2);
}
