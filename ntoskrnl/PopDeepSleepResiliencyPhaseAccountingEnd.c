/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingEnd @ 0x14059626C
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402BBC88 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x140597320 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LARGE_INTEGER __fastcall PopDeepSleepResiliencyPhaseAccountingEnd(unsigned int a1, char a2)
{
  KIRQL v2; // di
  KIRQL v3; // si
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v7; // r8
  bool i; // zf
  int v9; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax

  v2 = 0;
  v3 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v3 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  }
  result = KeQueryPerformanceCounter(0LL);
  v7 = result;
  dword_140C3C7BC &= ~a1;
  for ( i = !_BitScanForward((unsigned int *)&v9, a1); !i; i = !_BitScanForward((unsigned int *)&v9, a1) )
  {
    result.QuadPart = a1 - 1;
    a1 &= result.LowPart;
    if ( ((1 << v9) & PopDeepSleepDisengageReasonMask) != 0 )
    {
      result.QuadPart = v7.QuadPart - *(_QWORD *)&PopCsResiliencyStats[8 * v9 + 160];
      *(_QWORD *)&PopCsResiliencyStats[8 * v9 + 248] += result.QuadPart;
      *(_QWORD *)&PopCsResiliencyStats[8 * v9 + 160] = 0LL;
    }
  }
  if ( !a2 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (v3 + 1));
        i = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( i )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v3);
    KxReleaseSpinLock((volatile signed __int64 *)&PopDeepSleepDisengageReasonLock);
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && v2 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (v2 + 1));
        i = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( i )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    result.QuadPart = v2;
    __writecr8(v2);
  }
  return result;
}
