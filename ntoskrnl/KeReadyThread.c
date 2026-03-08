/*
 * XREFs of KeReadyThread @ 0x140238CF8
 * Callers:
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x140239100 (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x1402C0868 (KiInSwapSingleProcess.c)
 */

__int64 __fastcall KeReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r11
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v3 + 840) & 7) == 0 )
    return KiFastReadyThread(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v8) = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)v8 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  LOBYTE(a3) = CurrentIrql;
  result = KiInSwapSingleProcess(a1, v3, a3);
  if ( !(_BYTE)result )
    return KiFastReadyThread(a1);
  return result;
}
