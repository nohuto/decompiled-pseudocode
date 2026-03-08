/*
 * XREFs of ?_Reallocate_exactly@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAX_K@Z @ 0x1800D1650
 * Callers:
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1800D1480 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1800D16CC (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 */

__int64 __fastcall std::vector<KernelTap>::_Reallocate_exactly(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  SIZE_T size_of; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  int v12; // eax

  v3 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 2);
  size_of = std::_Get_size_of_n<12>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = a1[1];
  v8 = v6;
  v9 = *a1;
  v10 = (_QWORD *)v6;
  while ( v9 != v7 )
  {
    *v10 = *(_QWORD *)v9;
    v10 = (_QWORD *)((char *)v10 + 12);
    v12 = *(_DWORD *)(v9 + 8);
    v9 += 12LL;
    *((_DWORD *)v10 - 1) = v12;
  }
  return std::vector<KernelTap>::_Change_array(a1, v8, v3, a2);
}
