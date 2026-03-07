__int64 SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
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
