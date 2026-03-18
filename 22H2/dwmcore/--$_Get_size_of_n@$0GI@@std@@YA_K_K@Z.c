/*
 * XREFs of ??$_Get_size_of_n@$0GI@@std@@YA_K_K@Z @ 0x1800E1EB8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@QEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x1800E1C98 (--$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$ve.c)
 *     ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x1800E1E34 (-_Reallocate_exactly@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x1801CB3E4 (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetS.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1802633BC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAPEA.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A6F70 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<104>(unsigned __int64 a1)
{
  if ( a1 > 0x276276276276276LL )
    std::_Throw_bad_array_new_length();
  return 104 * a1;
}
