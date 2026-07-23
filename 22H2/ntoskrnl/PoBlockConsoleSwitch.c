/*
 * XREFs of PoBlockConsoleSwitch @ 0x140725A44
 * Callers:
 *     PoPowerOffMonitor @ 0x140382960 (PoPowerOffMonitor.c)
 *     PopAcquireAdaptiveLock @ 0x1407252B4 (PopAcquireAdaptiveLock.c)
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 *     PopBlockSessionSwitch @ 0x140779C60 (PopBlockSessionSwitch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E3658 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PnprQuiesceDevices @ 0x1409AE350 (PnprQuiesceDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     PopDispatchStateCallout @ 0x140725A94 (PopDispatchStateCallout.c)
 */

ULONG __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  ULONG ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000LL;
  while ( 1 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId != -1 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      if ( (int)PopDispatchStateCallout(a1, &ActiveConsoleId) >= 0 )
        break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return RtlGetActiveConsoleId();
}
