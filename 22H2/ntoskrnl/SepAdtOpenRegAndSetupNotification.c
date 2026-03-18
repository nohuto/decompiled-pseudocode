/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x140843A84
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140B648B0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeKey @ 0x140767D00 (NtNotifyChangeKey.c)
 *     SepRegOpenKey @ 0x1407F5978 (SepRegOpenKey.c)
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
    qword_140D16D48 = (__int64)SepAdtRegNotificationCallback;
    qword_140D16D50 = 0LL;
    SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeKey(
             SepAdtRegNotifyHandle,
             0LL,
             (void (__stdcall *)(POPLOCK))&SepAdtLsaRegWatchWorkItem,
             1LL,
             SepAdtIoStatusBlock,
             5u,
             0,
             0LL,
             0,
             1);
  }
  return result;
}
