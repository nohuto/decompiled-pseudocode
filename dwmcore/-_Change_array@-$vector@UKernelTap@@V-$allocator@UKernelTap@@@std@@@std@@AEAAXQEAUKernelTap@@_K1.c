/*
 * XREFs of ?_Change_array@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1@Z @ 0x1800D16FC
 * Callers:
 *     ?_Reallocate_exactly@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAX_K@Z @ 0x1800D1650 (-_Reallocate_exactly@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x18027F2AC (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAP.c)
 *     ??$_Emplace_reallocate@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAPEAUKernelTap@@QEAU2@$$QEAMAEAM2@Z @ 0x18027F41C (--$_Emplace_reallocate@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<KernelTap>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((a1[2] - v6) >> 2));
  *a1 = a2;
  a1[1] = a2 + 12 * a3;
  result = 3 * a4;
  a1[2] = a2 + 12 * a4;
  return result;
}
