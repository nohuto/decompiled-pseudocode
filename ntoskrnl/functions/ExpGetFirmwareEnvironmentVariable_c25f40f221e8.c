__int64 __fastcall ExpGetFirmwareEnvironmentVariable(int a1, int a2, __int64 a3, unsigned int *a4, __int64 a5, char a6)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  P[0] = 0LL;
  v15 = 0LL;
  v7 = (int)a4;
  v8 = *a4;
  v9 = a3;
  if ( !(_DWORD)v8 || (LOBYTE(a3) = a6, result = ExLockUserBuffer(v9, v8, a3, 1LL, &v15, P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, v15, v7, a5);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( P[0] )
      ExUnlockUserBuffer((struct _MDL *)P[0]);
    return EnvironmentVariable;
  }
  return result;
}
