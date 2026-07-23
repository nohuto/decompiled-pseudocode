/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x140953E70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExUnlockUserBuffer @ 0x1402EC94C (ExUnlockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x14089993C (IoEnumerateEnvironmentVariablesEx.c)
 */

NTSTATUS __cdecl NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, PULONG BufferLength)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  ULONG v9; // eax
  struct _KTHREAD *v10; // rax
  NTSTATUS v11; // ebx
  ULONG v12; // [rsp+34h] [rbp-34h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]

  v13 = 0LL;
  v12 = 0;
  P = 0LL;
  if ( dword_140C197B0 != 2 )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v8 = (__int64)BufferLength;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = *BufferLength;
    v12 = *BufferLength;
    if ( !Buffer )
    {
      v12 = 0;
      v9 = 0;
    }
    if ( v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v12 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( !v12
    || (result = ExLockUserBuffer((unsigned __int64)Buffer, v12, PreviousMode, IoWriteAccess, &v13, (struct _MDL **)&P),
        result >= 0) )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v11 = IoEnumerateEnvironmentVariablesEx(InformationClass, 0LL, v13, &v12);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    *BufferLength = v12;
    return v11;
  }
  return result;
}
