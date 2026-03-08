/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1407FCD30
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1406B4D70 (NtNotifyChangeKey.c)
 *     SepAdtInitializeCrashOnFail @ 0x1408413D4 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140841CF8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeBounds @ 0x140841D58 (SepAdtInitializeBounds.c)
 */

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
