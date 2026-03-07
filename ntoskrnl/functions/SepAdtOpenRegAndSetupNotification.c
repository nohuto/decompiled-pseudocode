NTSTATUS SepAdtOpenRegAndSetupNotification()
{
  NTSTATUS result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_140D16998 = (__int64)SepAdtRegNotificationCallback;
    qword_140D169A0 = 0LL;
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
