/*
 * XREFs of PspQueryJobHierarchyInterferenceCount @ 0x1409AF690
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406FBFC0 (PspLockJobShared.c)
 */

__int64 __fastcall PspQueryJobHierarchyInterferenceCount(_QWORD *Object, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // esi
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspLockJobShared((__int64)Object, (__int64)CurrentThread);
  v8 = 0LL;
  v7[0] = (__int64)&v8;
  v7[1] = (__int64)Object;
  v5 = PspEnumJobsAndProcessesInJobHierarchy(
         Object,
         0,
         0,
         (int)PspQueryProcessInterferenceCountCallback,
         (__int64)v7,
         1);
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
  if ( v5 >= 0 )
    *a2 = v8;
  return (unsigned int)v5;
}
