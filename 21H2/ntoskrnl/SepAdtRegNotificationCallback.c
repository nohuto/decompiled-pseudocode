/*
 * XREFs of SepAdtRegNotificationCallback @ 0x14084CA10
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1407E5590 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x14084CA74 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14084CAF8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14084CB58 (SepAdtInitializeCrashOnFail.c)
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
