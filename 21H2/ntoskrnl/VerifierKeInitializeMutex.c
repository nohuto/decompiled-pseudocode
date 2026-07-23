/*
 * XREFs of VerifierKeInitializeMutex @ 0x1409DBC50
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x1409DD02C (ViKeInitializeMutexCommon.c)
 *     VfDeadlockInitializeResource @ 0x1409DF1B4 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(int a1)
{
  ViKeInitializeMutexCommon();
  return VfDeadlockInitializeResource(a1);
}
