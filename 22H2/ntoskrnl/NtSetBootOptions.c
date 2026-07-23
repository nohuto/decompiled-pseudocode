/*
 * XREFs of NtSetBootOptions @ 0x140954F70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IoSetEnvironmentVariableEx @ 0x140899DAC (IoSetEnvironmentVariableEx.c)
 */

NTSTATUS __cdecl NtSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  char v2; // si
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 p_Length; // rax
  unsigned int v7; // eax
  char *v8; // r8
  ULONG NextBootEntryId; // eax
  struct _KTHREAD *v10; // rax
  NTSTATUS v11; // ebx
  int v12; // eax
  ULONG Timeout; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v14[2]; // [rsp+38h] [rbp-30h] BYREF
  ULONG Version; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  v2 = FieldsToChange;
  Timeout = 0;
  v14[0] = 0;
  if ( dword_140C197B0 != 2 )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  p_Length = (unsigned __int64)&BootOptions->Length;
  if ( PreviousMode )
  {
    if ( p_Length >= 0x7FFFFFFF0000LL )
      p_Length = 0x7FFFFFFF0000LL;
    v7 = *(_DWORD *)p_Length;
  }
  else
  {
    v7 = *(_DWORD *)p_Length;
  }
  v14[1] = v7;
  if ( v7 < 0x14 )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)BootOptions & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)BootOptions + v7;
    if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < (char *)BootOptions )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  Version = BootOptions->Version;
  if ( Version != 1 )
    return -1073741811;
  Timeout = BootOptions->Timeout;
  NextBootEntryId = BootOptions->NextBootEntryId;
  v14[0] = NextBootEntryId;
  if ( (v2 & 2) != 0 && NextBootEntryId > 0xFFFF )
    return -1073741811;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = 0;
  if ( (v2 & 1) != 0 )
  {
    v12 = Timeout;
    if ( Timeout == -1 )
    {
      Timeout = 0xFFFF;
    }
    else
    {
      if ( Timeout > 0xFFFE )
        v12 = 65534;
      Timeout = v12;
    }
    v11 = IoSetEnvironmentVariableEx(
            (const size_t *)L"Timeout",
            (__int64)&EfiBootVariablesGuid,
            (__int64)&Timeout,
            2,
            1);
  }
  if ( v11 >= 0 && (v2 & 2) != 0 )
    v11 = IoSetEnvironmentVariableEx((const size_t *)L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)v14, 2, 1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
