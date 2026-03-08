/*
 * XREFs of ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C006B344
 * Callers:
 *     MonitorReleaseMonitorPendingEvent @ 0x1C03BFF94 (MonitorReleaseMonitorPendingEvent.c)
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1C03C2954 (--1MONITOR_MGR@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MONITOR_MGR::_ReleaseMonitorPendingEvent(PVOID P)
{
  KIRQL v2; // al
  _QWORD *v3; // r8
  PVOID *v4; // rdx

  if ( !P )
    WdLogSingleEntry0(1LL);
  if ( *((int *)P + 4) <= 0 )
    WdLogSingleEntry0(1LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 4, 0xFFFFFFFF) == 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
    v3 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v2);
    ExFreePoolWithTag(P, 0);
  }
}
