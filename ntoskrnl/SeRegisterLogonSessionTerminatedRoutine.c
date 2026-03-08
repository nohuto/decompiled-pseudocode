/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutine @ 0x1409CCDD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall SeRegisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  _QWORD *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !CallbackRoutine )
    return -1073741811;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 16LL, 1397122387LL);
  if ( !Pool2 )
    return -1073741670;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  *Pool2 = SeFileSystemNotifyRoutinesHead;
  Pool2[1] = CallbackRoutine;
  SeFileSystemNotifyRoutinesHead = Pool2;
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0;
}
