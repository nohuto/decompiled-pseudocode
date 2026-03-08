/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x1402630C0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     CmPostCallbackNotificationEx @ 0x1406BD240 (CmPostCallbackNotificationEx.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1406E7480 (CmpParseKey.c)
 *     CmUnloadKey @ 0x140749BD8 (CmUnloadKey.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407590A0 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1407AB260 (NtEnumerateValueKey.c)
 *     CmpSecurityMethod @ 0x1407AC040 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x1407AC4B0 (NtEnumerateKey.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0B850 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0BBB0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0BF70 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0C200 (NtSaveMergedKeys.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x140336990 (ExIsResourceAcquiredSharedLite.c)
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x140411520 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     CmpThreadInfoLogStack @ 0x140613BCC (CmpThreadInfoLogStack.c)
 */

ULONG CmpIsRegistryLockAcquired()
{
  __int64 v0; // rcx

  Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage();
  v0 = *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex;
  if ( v0 )
    return *(_DWORD *)(v0 + 8);
  CmpThreadInfoLogStack();
  return ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
}
