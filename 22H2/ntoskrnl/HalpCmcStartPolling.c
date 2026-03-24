/*
 * XREFs of HalpCmcStartPolling @ 0x1403C53F8
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x14038D3C0 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x1409A0E28 (HalpInitializeCmc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A1898 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsPartitionCpuManager @ 0x1403AF37C (HalpIsPartitionCpuManager.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpCmcStartPolling(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  int v3; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1) || (LOBYTE(v3) = HalpIsPartitionCpuManager(v1), (_BYTE)v3) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
    if ( HalpCmcPollingInitialized )
    {
      if ( (HalpMcaPollForCmc
         || HalpCmciRevertToPolledMode
         || HalpCmcPollingStartDeferred != (_BYTE)HalpCmciRevertToPolledMode)
        && !HalpCmcPollingStarted )
      {
        KiSetTimerEx(
          (__int64)&qword_140C50838,
          -10000LL * (unsigned int)HalpCmcContext,
          HalpCmcContext,
          0,
          (__int64)&dword_140C50878);
        HalpCmcPollingStarted = 1;
      }
    }
    else
    {
      HalpCmcPollingStartDeferred = 1;
    }
    KxReleaseSpinLock(&HalpCmcFallbackLock);
    LOBYTE(v3) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v3) = KeGetCurrentIrql();
        if ( (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)v3 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v3 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v6 = (v3 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v3;
          if ( v6 )
            LOBYTE(v3) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
  return v3;
}
