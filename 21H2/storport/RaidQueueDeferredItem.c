/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0002E10
 * Callers:
 *     StorPortPauseDevice @ 0x1C0002950 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0002CE0 (StorPortResumeDevice.c)
 *     StorPortNotification @ 0x1C000E820 (StorPortNotification.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C002D404 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C002E0E8 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002E280 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C0038438 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0038DE0 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0039180 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0039300 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0039A20 (StorPortPause.c)
 *     StorPortReady @ 0x1C0039CF0 (StorPortReady.c)
 *     StorPortResume @ 0x1C003A0A0 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
