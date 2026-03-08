/*
 * XREFs of ExWakeTimersResume @ 0x1406097F4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x1402FF9C0 (ExpTimerResume.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

signed __int64 ExWakeTimersResume()
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v2; // eax
  __int64 v3; // r15
  __int64 *v4; // rsi
  __int64 *v5; // rbp
  __int64 v6; // rax
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v9; // r9
  int v10; // eax
  bool v11; // zf
  signed __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v2 = 4;
    if ( CurrentIrql != 2 )
      v2 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v2;
  }
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = (__int64 *)ExpWakeTimerList;
  while ( v4 != &ExpWakeTimerList )
  {
    v5 = v4 - 33;
    v4 = (__int64 *)*v4;
    KxAcquireSpinLock((PKSPIN_LOCK)v5 + 8);
    if ( v5[32] )
    {
      v6 = v5[35];
      if ( !v6 || (*(_DWORD *)(v6 + 632) & 8) == 0 )
        ExpTimerResume((PKTIMER)v5, v3);
    }
    KxReleaseSpinLock(v5 + 8);
  }
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    return ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  return result;
}
