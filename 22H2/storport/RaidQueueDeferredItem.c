/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0002E10
 * Callers:
 *     StorPortPauseDevice @ 0x1C0002950 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0002CE0 (StorPortResumeDevice.c)
 *     StorPortNotification @ 0x1C000E7B0 (StorPortNotification.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C002D3E4 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C002E0C8 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002E260 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C0038418 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0038DC0 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0039160 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C00392E0 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0039A00 (StorPortPause.c)
 *     StorPortReady @ 0x1C0039CD0 (StorPortReady.c)
 *     StorPortResume @ 0x1C003A080 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
