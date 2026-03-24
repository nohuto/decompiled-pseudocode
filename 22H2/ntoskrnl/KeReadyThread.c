/*
 * XREFs of KeReadyThread @ 0x140340A24
 * Callers:
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 * Callees:
 *     KiInSwapSingleProcess @ 0x1402F27D0 (KiInSwapSingleProcess.c)
 *     KiFastReadyThread @ 0x1403411A0 (KiFastReadyThread.c)
 */

__int64 __fastcall KeReadyThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r11

  v4 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v4 + 840) & 7) == 0 )
    return KiFastReadyThread(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a4 = SchedulerAssist[5] | ~((unsigned __int8)(1LL << ((unsigned __int8)CurrentIrql + 1)) - 1) & 4u;
    SchedulerAssist[5] = a4;
  }
  result = KiInSwapSingleProcess(a1, v4, CurrentIrql, a4);
  if ( !(_BYTE)result )
    return KiFastReadyThread(a1);
  return result;
}
