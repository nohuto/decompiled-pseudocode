/*
 * XREFs of NtQueryBootEntryOrder @ 0x14083E080
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402CFFD4 (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     IoGetEnvironmentVariableEx @ 0x14075D3B0 (IoGetEnvironmentVariableEx.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtQueryBootEntryOrder(volatile void *Address, unsigned int *a2)
{
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 result; // rax
  struct _KTHREAD *v8; // rax
  int EnvironmentVariable; // ebx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned __int16 *v12; // r9
  _DWORD *i; // r10
  unsigned int v14; // eax
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  unsigned int v18; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v18 = 0;
  P = 0LL;
  if ( dword_140C316F0 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v6 = 4 * *a2;
    v18 = v6;
    if ( !Address )
    {
      v18 = 0;
      v6 = 0;
    }
    if ( v6 )
      ProbeForWrite(Address, v6, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v18 = Address != 0LL ? 4 * *a2 : 0;
  }
  if ( !v18
    || (result = ExLockUserBuffer((unsigned __int64)Address, v18, PreviousMode, IoWriteAccess, &v15, (struct _MDL **)&P),
        (int)result >= 0) )
  {
    v18 >>= 1;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (const size_t *)L"BootOrder",
                            (__int64)&EfiBootVariablesGuid,
                            v15,
                            (int *)&v18,
                            0LL);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( EnvironmentVariable < 0 )
    {
      if ( EnvironmentVariable == -1073741568 )
      {
        v18 = 0;
        EnvironmentVariable = 0;
      }
    }
    else
    {
      v10 = v18 >> 1;
      v11 = (v18 >> 1) - 1;
      v12 = (unsigned __int16 *)(v15 + 2 * v11);
      for ( i = (_DWORD *)(v15 + 4 * v11); v10; --v10 )
        *i-- = *v12--;
    }
    v14 = 2 * v18;
    v18 *= 2;
    if ( P )
    {
      ExUnlockUserBuffer((struct _MDL *)P);
      v14 = v18;
    }
    *a2 = v14 >> 2;
    return (unsigned int)EnvironmentVariable;
  }
  return result;
}
