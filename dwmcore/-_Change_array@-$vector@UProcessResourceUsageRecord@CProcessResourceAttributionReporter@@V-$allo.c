/*
 * XREFs of ?_Change_array@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAXQEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@_K1@Z @ 0x1800E13C0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@QEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x1800E10C8 (--$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$ve.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((a1[2] - v6) >> 3));
  *a1 = a2;
  a1[1] = a2 + 104 * a3;
  result = a2 + 104 * a4;
  a1[2] = result;
  return result;
}
