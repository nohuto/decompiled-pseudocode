/*
 * XREFs of SepAdtRegNotificationCallback @ 0x14079E1C0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1406631C0 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x14079E224 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14079E2A8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14079E308 (SepAdtInitializeCrashOnFail.c)
 */

__int64 SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
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
