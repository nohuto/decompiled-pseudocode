/*
 * XREFs of KeAdjustTimerDelayProcess @ 0x14056CEF8
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x1405A2390 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAdjustThreadTimer @ 0x1405749E4 (KiAdjustThreadTimer.c)
 */

char __fastcall KeAdjustTimerDelayProcess(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  _QWORD *i; // rbx

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v9 = 4;
    if ( CurrentIrql != 2 )
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    KiAdjustThreadTimer(i - 95, CurrentPrcb, a2, a3);
  *(_DWORD *)(a1 + 68) = a3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  return KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
}
