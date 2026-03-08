/*
 * XREFs of ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x18027F2AC
 * Callers:
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1800D1480 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1800D16CC (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1@Z @ 0x1800D16FC (-_Change_array@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 *     ?_Calculate_growth@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEBA_K_K@Z @ 0x18027F99C (-_Calculate_growth@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEBA_K_K@Z.c)
 */

_DWORD *__fastcall std::vector<KernelTap>::_Emplace_reallocate<float &,float,float &>(
        __int64 *a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        int *a5)
{
  __int64 v5; // rsi
  unsigned __int64 v9; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  SIZE_T size_of; // rax
  __int64 v14; // r10
  int v15; // xmm1_4
  int v16; // eax
  _QWORD *v17; // rdx
  _DWORD *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // r9
  _QWORD *v24; // rdx
  int v25; // ecx

  v5 = *a1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 2);
  if ( v9 == 0x1555555555555555LL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v11 = v9 + 1;
  v12 = std::vector<KernelTap>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<12>(v12);
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v15 = *a5;
  v16 = *a3;
  v17 = (_QWORD *)v14;
  v18 = (_DWORD *)(v14 + 12 * ((a2 - v5) / 12));
  v18[1] = *a4;
  v18[2] = v15;
  *v18 = v16;
  v19 = a1[1];
  v20 = *a1;
  if ( a2 == v19 )
  {
    while ( v20 != v19 )
    {
      *v17 = *(_QWORD *)v20;
      v17 = (_QWORD *)((char *)v17 + 12);
      v21 = *(_DWORD *)(v20 + 8);
      v20 += 12LL;
      *((_DWORD *)v17 - 1) = v21;
    }
  }
  else
  {
    while ( v20 != a2 )
    {
      *v17 = *(_QWORD *)v20;
      v17 = (_QWORD *)((char *)v17 + 12);
      v22 = *(_DWORD *)(v20 + 8);
      v20 += 12LL;
      *((_DWORD *)v17 - 1) = v22;
    }
    v23 = a1[1];
    if ( a2 != v23 )
    {
      v24 = v18 + 3;
      do
      {
        *v24 = *(_QWORD *)a2;
        v24 = (_QWORD *)((char *)v24 + 12);
        v25 = *(_DWORD *)(a2 + 8);
        a2 += 12LL;
        *((_DWORD *)v24 - 1) = v25;
      }
      while ( a2 != v23 );
    }
  }
  std::vector<KernelTap>::_Change_array(a1, v14, v11, v12);
  return v18;
}
