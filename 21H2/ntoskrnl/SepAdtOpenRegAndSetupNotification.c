/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x14084CBB8
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140B22004 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegOpenKey @ 0x1406959BC (SepRegOpenKey.c)
 *     NtNotifyChangeKey @ 0x1407E5590 (NtNotifyChangeKey.c)
 */

NTSTATUS SepAdtOpenRegAndSetupNotification()
{
  NTSTATUS result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_140D00C00 = (__int64)SepAdtRegNotificationCallback;
    qword_140D00C08 = 0LL;
    SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeKey(
             (int)SepAdtRegNotifyHandle,
             0,
             (__int64)&SepAdtLsaRegWatchWorkItem,
             1LL,
             &SepAdtIoStatusBlock,
             5,
             0,
             0LL,
             0,
             1);
  }
  return result;
}
