/*
 * XREFs of KeAlertThread @ 0x140354F40
 * Callers:
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1402FA4B0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     KeRequestTerminationThread @ 0x140354D78 (KeRequestTerminationThread.c)
 *     IoDecrementKeepAliveCount @ 0x140555BC0 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x14056C6FC (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x1409B2F60 (NtAlertThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiSignalThread @ 0x14033FD70 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

char __fastcall KeAlertThread(__int64 a1, char a2)
{
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  char v6; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  char v10; // al
  char v11; // al
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(_BYTE *)(v2 + a1 + 114);
  if ( !v6 )
  {
    if ( *(_BYTE *)(a1 + 388) != 5
      || (v10 = *(_BYTE *)(a1 + 112) & 7, v10 == 4)
      || v10 == 3
      || (*(_DWORD *)(a1 + 116) & 0x10) == 0
      || (char)v2 > *(char *)(a1 + 391)
      || (v11 = KiSignalThread((__int64)CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v11) )
    {
      *(_BYTE *)(v2 + a1 + 114) = 1;
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 2u, CurrentIrql);
  return v6;
}
