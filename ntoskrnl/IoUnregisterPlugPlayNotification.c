/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x1406F4390
 * Callers:
 *     SmKmFileInfoCleanup @ 0x1409D5B90 (SmKmFileInfoCleanup.c)
 *     SbpWaitForVmbus @ 0x140B98D18 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14028F5FC (PnpUnregisterPlugPlayNotification.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
