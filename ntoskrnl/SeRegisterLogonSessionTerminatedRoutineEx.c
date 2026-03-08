/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutineEx @ 0x14085CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SeRegisterLogonSessionTerminatedRoutineEx(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 )
    return 3221225485LL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1397122387LL);
  if ( !Pool2 )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  *Pool2 = SeFileSystemNotifyRoutinesExHead;
  Pool2[1] = a1;
  Pool2[2] = a2;
  SeFileSystemNotifyRoutinesExHead = Pool2;
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
