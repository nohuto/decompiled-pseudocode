/*
 * XREFs of NtSetBootOptions @ 0x1409FCD00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x14094D504 (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetBootOptions(int *a1, char a2)
{
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v6; // rax
  unsigned int v7; // eax
  unsigned __int64 v8; // r8
  unsigned int v9; // eax
  struct _KTHREAD *v10; // rax
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v14[2]; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  v13 = 0;
  v14[0] = 0;
  if ( dword_140C316F0 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v6 = (unsigned __int64)(a1 + 1);
  if ( PreviousMode )
  {
    if ( v6 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    v7 = *(_DWORD *)v6;
  }
  else
  {
    v7 = *(_DWORD *)v6;
  }
  v14[1] = v7;
  if ( v7 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)a1 + v7;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  v15 = *a1;
  if ( v15 != 1 )
    return 3221225485LL;
  v13 = a1[2];
  v9 = a1[4];
  v14[0] = v9;
  if ( (a2 & 2) != 0 && v9 > 0xFFFF )
    return 3221225485LL;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = 0;
  if ( (a2 & 1) != 0 )
  {
    v12 = v13;
    if ( v13 == -1 )
    {
      v13 = 0xFFFF;
    }
    else
    {
      if ( v13 > 0xFFFE )
        v12 = 65534;
      v13 = v12;
    }
    v11 = IoSetEnvironmentVariableEx((const size_t *)L"Timeout", (__int64)&EfiBootVariablesGuid, (__int64)&v13, 2, 1);
  }
  if ( v11 >= 0 && (a2 & 2) != 0 )
    v11 = IoSetEnvironmentVariableEx((const size_t *)L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)v14, 2, 1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
