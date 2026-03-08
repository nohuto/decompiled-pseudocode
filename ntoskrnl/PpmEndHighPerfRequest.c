/*
 * XREFs of PpmEndHighPerfRequest @ 0x1402B884C
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x14067EF08 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopSetupHighPerfPowerRequest @ 0x140810204 (PopSetupHighPerfPowerRequest.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PoClearBroadcast @ 0x140988B8C (PoClearBroadcast.c)
 *     PdcPoPerfOverride @ 0x1409949A8 (PdcPoPerfOverride.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     PopPowerRequestReferenceRelease @ 0x1402BA084 (PopPowerRequestReferenceRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmEndHighPerfRequest(int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( !PpmHighPerfDuration[v1] || PpmHighPerfDeferredEndDisabled )
  {
    PopPowerRequestReferenceRelease(PpmHighPerfPowerRequest);
  }
  else
  {
    ++PpmHighPerfDeferredEndCount;
    v3 = (unsigned int)(10000 * PpmHighPerfDuration[v1]);
    v4 = PpmHighPerfDeferredEndTime;
    if ( PpmHighPerfDeferredEndTime <= (unsigned __int64)(v3 + MEMORY[0xFFFFF78000000008]) )
    {
      v4 = v3 + MEMORY[0xFFFFF78000000008];
      PpmHighPerfDeferredEndTime = v3 + MEMORY[0xFFFFF78000000008];
    }
    KiSetTimerEx((__int64)&PpmHighPerfEndTimer, MEMORY[0xFFFFF78000000008] - v4, 0, 0, (__int64)&PpmHighPerfEndDpc);
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PpmHighPerfRequestLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
