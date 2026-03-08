/*
 * XREFs of KiStartDebugAccumulation @ 0x1403694D0
 * Callers:
 *     KiFreezeTargetExecution @ 0x140369240 (KiFreezeTargetExecution.c)
 *     KeFreezeExecution @ 0x14036ADA0 (KeFreezeExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036A030 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
