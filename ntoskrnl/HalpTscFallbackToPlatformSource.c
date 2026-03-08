/*
 * XREFs of HalpTscFallbackToPlatformSource @ 0x1405082E4
 * Callers:
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 *     HalpTimerReportIdleStateUsage @ 0x1403AD7D0 (HalpTimerReportIdleStateUsage.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140396D40 (KeIpiGenericCall.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403AE654 (HalpTimerSchedulePeriodicQueries.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HalpTscTraceStatus @ 0x1405083E0 (HalpTscTraceStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpTscFallbackToPlatformSource(PCEVENT_DESCRIPTOR EventDescriptor)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v6; // eax
  bool v7; // zf
  ULONG_PTR Context[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)Context = 0LL;
  HIDWORD(Context[0]) = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Context[0]) = HIDWORD(Context[0]);
  v2 = KeAcquireSpinLockRaiseToDpc(&HalpTscFallbackLock);
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpTscFallback, (ULONG_PTR)Context);
  HalpTimerSchedulePeriodicQueries();
  KxReleaseSpinLock((volatile signed __int64 *)&HalpTscFallbackLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return HalpTscTraceStatus(EventDescriptor);
}
