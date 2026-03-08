/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x1409FB114
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x1409F8BC0 (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1409FD460 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402CFFD4 (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x14094D504 (IoSetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpSetFirmwareEnvironmentVariable(
        const size_t *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        KPROCESSOR_MODE a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+38h] [rbp-10h] BYREF

  P = 0LL;
  v12 = 0LL;
  if ( !a4 || (result = ExLockUserBuffer(a3, a4, a6, IoReadAccess, &v12, (struct _MDL **)&P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v11 = IoSetEnvironmentVariableEx(a1, a2, v12, a4, a5);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    return v11;
  }
  return result;
}
