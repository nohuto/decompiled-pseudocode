__int64 __fastcall NtSetBootEntryOrder(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  void *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  unsigned int v8; // r15d
  unsigned __int64 v9; // rcx
  unsigned int i; // ecx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // edi

  v2 = a2;
  Pool2 = 0LL;
  if ( dword_140C316F0 != 2 )
    return 3221225474LL;
  if ( a2 > 0x3FFFFFFF )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return 3221225569LL;
  if ( (_DWORD)v2 )
  {
    v8 = 4 * v2;
    Pool2 = (void *)ExAllocatePool2(64LL, 2 * v2, 1920364101LL);
    if ( !Pool2 )
      return 3221225626LL;
    if ( PreviousMode && v8 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = a1 + v8;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      if ( *(_DWORD *)(a1 + 4LL * i) > 0xFFFFu )
      {
        ExFreePoolWithTag(Pool2, 0);
        return 3221225485LL;
      }
      *((_WORD *)Pool2 + i) = *(_WORD *)(a1 + 4LL * i);
    }
  }
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v12 = IoSetEnvironmentVariableEx(
          (const size_t *)L"BootOrder",
          (__int64)&EfiBootVariablesGuid,
          (__int64)Pool2,
          2 * (int)v2,
          1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 == -1073741568 )
    v12 = 0;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v12;
}
