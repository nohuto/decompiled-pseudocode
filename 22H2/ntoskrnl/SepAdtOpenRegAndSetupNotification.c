/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x14079E798
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A4BB0C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeKey @ 0x1406DBFB0 (NtNotifyChangeKey.c)
 *     SepRegOpenKey @ 0x14070E324 (SepRegOpenKey.c)
 */

int SepAdtOpenRegAndSetupNotification()
{
  int result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_140CF46E0 = (__int64)SepAdtRegNotificationCallback;
    qword_140CF46E8 = 0LL;
    *(_QWORD *)SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeKey(
             SepAdtRegNotifyHandle,
             0LL,
             SepAdtLsaRegWatchWorkItem,
             (PVOID)1,
             &SepAdtIoStatusBlock,
             5u,
             0,
             0LL,
             0,
             1u);
  }
  return result;
}
