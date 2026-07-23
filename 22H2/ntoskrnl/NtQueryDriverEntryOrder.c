/*
 * XREFs of NtQueryDriverEntryOrder @ 0x140954710
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExUnlockUserBuffer @ 0x1402EC94C (ExUnlockUserBuffer.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BA5F0 (HalGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  struct _KTHREAD *v9; // rax
  NTSTATUS EnvironmentVariable; // edi
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
  if ( dword_140C197B0 != 2 )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Count < 0x7FFFFFFF0000LL )
      v6 = (__int64)Count;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 4 * *Count;
    v19 = v7;
    v8 = v7;
    if ( !Ids )
    {
      v7 = 0;
      v19 = 0;
      v8 = 0;
    }
    if ( v8 )
      ProbeForWrite(Ids, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v7 = Ids != 0LL ? 4 * *Count : 0;
    v19 = v7;
  }
  if ( !v7
    || (result = ExLockUserBuffer((unsigned __int64)Ids, v7, PreviousMode, IoWriteAccess, &v16, (struct _MDL **)&P),
        result >= 0) )
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
    *Count = v15 >> 2;
    return EnvironmentVariable;
  }
  return result;
}
