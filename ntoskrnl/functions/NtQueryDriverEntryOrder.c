__int64 __fastcall NtQueryDriverEntryOrder(volatile void *Address, unsigned int *a2)
{
  __int64 result; // rax
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  struct _KTHREAD *v9; // rax
  int EnvironmentVariable; // edi
  unsigned int v11; // r8d
  __int64 v12; // rdx
  unsigned __int16 *v13; // r9
  _DWORD *i; // r10
  unsigned int v15; // ebx
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  unsigned int v19; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0LL;
  v19 = 0;
  P = 0LL;
  if ( dword_140C316F0 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 4 * *a2;
    v19 = v7;
    v8 = v7;
    if ( !Address )
    {
      v7 = 0;
      v19 = 0;
      v8 = 0;
    }
    if ( v8 )
      ProbeForWrite(Address, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v7 = Address != 0LL ? 4 * *a2 : 0;
    v19 = v7;
  }
  if ( !v7
    || (result = ExLockUserBuffer((unsigned __int64)Address, v7, PreviousMode, IoWriteAccess, &v16, (struct _MDL **)&P),
        (int)result >= 0) )
  {
    v19 = v7 >> 1;
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = HalGetEnvironmentVariableEx(L"DriverOrder", (int)&EfiDriverVariablesGuid, v16, &v19, 0LL);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( EnvironmentVariable < 0 )
    {
      if ( EnvironmentVariable == -1073741568 )
      {
        v19 = 0;
        EnvironmentVariable = 0;
      }
    }
    else
    {
      v11 = v19 >> 1;
      v12 = (v19 >> 1) - 1;
      v13 = (unsigned __int16 *)(v16 + 2 * v12);
      for ( i = (_DWORD *)(v16 + 4 * v12); v11; --v11 )
        *i-- = *v13--;
    }
    v15 = 2 * v19;
    v19 *= 2;
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    *a2 = v15 >> 2;
    return (unsigned int)EnvironmentVariable;
  }
  return result;
}
