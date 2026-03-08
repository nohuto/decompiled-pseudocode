/*
 * XREFs of PoBlockConsoleSwitch @ 0x14067F698
 * Callers:
 *     PoPowerOffMonitor @ 0x14058CE20 (PoPowerOffMonitor.c)
 *     PopAcquireAdaptiveLock @ 0x14073CCB4 (PopAcquireAdaptiveLock.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1409809F4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopBlockSessionSwitch @ 0x140994CF0 (PopBlockSessionSwitch.c)
 *     PnprQuiesceDevices @ 0x140A9A284 (PnprQuiesceDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x1402B8940 (RtlGetActiveConsoleId.c)
 *     PopDispatchStateCallout @ 0x14067F6E8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000LL;
  while ( 1 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId(a1, a2);
    if ( ActiveConsoleId != -1 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      if ( (int)PopDispatchStateCallout(a1, &ActiveConsoleId) >= 0 )
        break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return RtlGetActiveConsoleId(v4, v3);
}
