/*
 * XREFs of CmpRecordRegistryLockAcquire @ 0x140263080
 * Callers:
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 * Callees:
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x140411520 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     CmpThreadInfoLogStack @ 0x140613BCC (CmpThreadInfoLogStack.c)
 */

struct _KTHREAD *CmpRecordRegistryLockAcquire()
{
  struct _KTHREAD *result; // rax
  __int64 v1; // rcx

  Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage();
  result = KeGetCurrentThread();
  v1 = *(_QWORD *)&result[1].ResourceIndex;
  if ( !v1 )
    return (struct _KTHREAD *)CmpThreadInfoLogStack();
  ++*(_DWORD *)(v1 + 8);
  return result;
}
