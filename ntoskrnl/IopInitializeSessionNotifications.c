/*
 * XREFs of IopInitializeSessionNotifications @ 0x140B71BF8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 */

NTSTATUS IopInitializeSessionNotifications()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  IopSessionNotificationLock = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  qword_140C5DB98 = (__int64)&IopSessionNotificationQueueHead;
  IopSessionNotificationQueueHead = &IopSessionNotificationQueueHead;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoSessionNotifications");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ExCreateCallback((PCALLBACK_OBJECT *)&IopSessionCallbackObject, &ObjectAttributes, 1u, 1u);
}
