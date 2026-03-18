/*
 * XREFs of NtQueryEnvironmentVariableInfoEx @ 0x1409FF610
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x140996E9C (PopEnableSystemSleepCheckpoint.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     IoQueryEnvironmentVariableInfoEx @ 0x14095039C (IoQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall NtQueryEnvironmentVariableInfoEx(unsigned int a1, PDEVICE_OBJECT *a2, __int64 *a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariableInfo; // ebx

  if ( dword_140C31AF0 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariableInfo = IoQueryEnvironmentVariableInfoEx(a1, a2, a3, a4);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return EnvironmentVariableInfo;
}
