/*
 * XREFs of AcpiUninitializePrmServices @ 0x1C003AEC4
 * Callers:
 *     ACPIRootIrpRemoveDevice @ 0x1C003D280 (ACPIRootIrpRemoveDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS AcpiUninitializePrmServices()
{
  NTSTATUS result; // eax

  if ( NotificationEntry )
  {
    result = IoUnregisterPlugPlayNotification(NotificationEntry);
    NotificationEntry = 0LL;
  }
  if ( qword_1C006FE90 )
  {
    result = IoUnregisterPlugPlayNotification(qword_1C006FE90);
    qword_1C006FE90 = 0LL;
  }
  return result;
}
