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
