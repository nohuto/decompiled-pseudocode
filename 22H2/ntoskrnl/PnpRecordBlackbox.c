/*
 * XREFs of PnpRecordBlackbox @ 0x1406F03A0
 * Callers:
 *     PnpDisableWatchdog @ 0x1406F02D0 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x140770084 (PnpCallDriverEntry.c)
 *     PnpWatchdogWorkItem @ 0x1408ABAE0 (PnpWatchdogWorkItem.c)
 * Callees:
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1406F0524 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x14076B01C (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1408B8D68 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 */

__int64 __fastcall PnpRecordBlackbox(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 1:
      return PnpRecordBlackboxPnpEventWorkerInformation();
    case 2:
      return PnpRecordBlackboxDeviceCompletionQueueInformation();
    case 3:
      return PnpRecordBlackboxDelayedRemoveWorkerInformation();
  }
  if ( a2 <= 3 || a2 > 5 )
    __fastfail(5u);
  return result;
}
