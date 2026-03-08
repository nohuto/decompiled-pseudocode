/*
 * XREFs of HalpCmcStartPolling @ 0x1403AF5E8
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x140503740 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x140A87F7C (HalpInitializeCmc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     HalpIsPartitionCpuManager @ 0x1403732F8 (HalpIsPartitionCpuManager.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpCmcStartPolling(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  int v5; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) || (LOBYTE(v5) = HalpIsPartitionCpuManager(v3, v2), (_BYTE)v5) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
    if ( HalpCmcPollingInitialized )
    {
      if ( (HalpMcaPollForCmc || HalpCmciRevertToPolledMode || HalpCmcPollingStartDeferred) && !HalpCmcPollingStarted )
      {
        KiSetTimerEx(
          (__int64)&qword_140C6A488,
          -10000LL * (unsigned int)HalpCmcContext,
          HalpCmcContext,
          0,
          (__int64)&dword_140C6A4C8);
        HalpCmcPollingStarted = 1;
      }
    }
    else
    {
      HalpCmcPollingStartDeferred = 1;
    }
    LOBYTE(v5) = KxReleaseSpinLock((volatile signed __int64 *)&HalpCmcFallbackLock);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)v5 <= 0xFu
        && (unsigned __int8)v4 <= 0xFu
        && (unsigned __int8)v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v8 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v8 )
          LOBYTE(v5) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
  }
  return v5;
}
