/*
 * XREFs of ??$emplace_back@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAA?A_T$$QEAMAEAM1@Z @ 0x18027F58C
 * Callers:
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1800D1480 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 * Callees:
 *     ??$_Emplace_reallocate@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAPEAUKernelTap@@QEAU2@$$QEAMAEAM2@Z @ 0x18027F41C (--$_Emplace_reallocate@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAP.c)
 */

int *__fastcall std::vector<KernelTap>::emplace_back<float,float &,float &>(__int64 *a1, int *a2, int *a3, int *a4)
{
  int *result; // rax
  int v5; // xmm1_4
  int v6; // edx

  result = (int *)a1[1];
  if ( result == (int *)a1[2] )
    return std::vector<KernelTap>::_Emplace_reallocate<float,float &,float &>(a1, (__int64)result, a2, a3, a4);
  v5 = *a4;
  v6 = *a2;
  result[1] = *a3;
  result[2] = v5;
  a1[1] = (__int64)(result + 3);
  *result = v6;
  return result;
}
