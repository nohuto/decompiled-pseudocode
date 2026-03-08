/*
 * XREFs of CmpRecordRegistryLockRelease @ 0x140263040
 * Callers:
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 * Callees:
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x140411520 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     CmpThreadInfoLogStack @ 0x140613BCC (CmpThreadInfoLogStack.c)
 */

struct _KTHREAD *CmpRecordRegistryLockRelease()
{
  struct _KTHREAD *result; // rax
  __int64 v1; // rcx

  Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage();
  result = KeGetCurrentThread();
  v1 = *(_QWORD *)&result[1].ResourceIndex;
  if ( !v1 )
    return (struct _KTHREAD *)CmpThreadInfoLogStack();
  --*(_DWORD *)(v1 + 8);
  return result;
}
