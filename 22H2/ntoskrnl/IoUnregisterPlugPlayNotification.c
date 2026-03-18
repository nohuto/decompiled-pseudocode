/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x14078E8B0
 * Callers:
 *     SmKmFileInfoCleanup @ 0x1409D8A30 (SmKmFileInfoCleanup.c)
 *     SbpWaitForVmbus @ 0x140B9CF2C (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14032041C (PnpUnregisterPlugPlayNotification.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
