__int64 __fastcall NtFlushKey(int a1)
{
  __int64 v1; // r12
  void *v3; // rdi
  char v4; // r15
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  char v8; // r13
  signed int v9; // ebx
  char PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // [rsp+48h] [rbp-79h] BYREF
  __int64 v30; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v31[2]; // [rsp+58h] [rbp-69h] BYREF
  __int128 v32; // [rsp+68h] [rbp-59h] BYREF
  __int128 v33[2]; // [rsp+78h] [rbp-49h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-29h] BYREF
  _OWORD v35[2]; // [rsp+C8h] [rbp+7h] BYREF

  v30 = 0LL;
  v1 = 0LL;
  v32 = 0LL;
  memset(v33, 0, sizeof(v33));
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v35, 0, sizeof(v35));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v35, 0x20000LL);
  v3 = 0LL;
  v31[1] = v31;
  v29 = 0LL;
  v31[0] = v31;
  v4 = 0;
  CmpInitializeThreadInfo((__int64)&v32);
  v8 = CmpAcquireShutdownRundown();
  if ( !v8 )
  {
    v9 = -1073741431;
    goto LABEL_29;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v7) = PreviousMode;
  v9 = CmObReferenceObjectByHandle(a1, 0, v6, v7, (__int64)&v29, (__int64)&v30);
  if ( v9 >= 0 )
  {
    if ( CmpTraceRoutine && v29 )
      v1 = v29[1];
    CurrentThread = KeGetCurrentThread();
    v12 = (__int64)v29;
    --CurrentThread->KernelApcDisable;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 32LL) + 160LL) & 2) != 0
      && PreviousMode
      && (~HIDWORD(v30) & 0x20006) != 0 )
    {
      v9 = -1073741790;
LABEL_27:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_28;
    }
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v33[0] = v12;
      v13 = CmpCallCallBacksEx(0x1Eu, v33, 0LL, 1, 0x1Fu, v12, (__int64)v31);
      v9 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073740541 )
          v9 = 0;
        goto LABEL_27;
      }
      v4 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    CmpLockKcbShared(*(_QWORD *)(v12 + 8));
    v9 = CmpPerformKeyBodyDeletionCheck(v12, 0LL);
    if ( v9 >= 0 )
    {
      v14 = *(_QWORD *)(v12 + 8);
      v15 = *(struct _EX_RUNDOWN_REF **)(v14 + 32);
      if ( v15 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
      {
        CmpUnlockKcb(v14);
        CmpUnlockRegistry(v17, v16, v18, v19);
        CmpAttachToRegistryProcess(&ApcState);
        CmpDoFlushAll(0);
        CmpDetachFromRegistryProcess(&ApcState);
        v9 = 0;
        goto LABEL_25;
      }
      if ( ExAcquireRundownProtection_0(v15 + 205) )
      {
        CmpUnlockKcb(*(_QWORD *)(v12 + 8));
        CmpUnlockRegistry(v26, v25, v27, v28);
        CmpAttachToRegistryProcess(&ApcState);
        v9 = CmpFlushHive((ULONG_PTR)v15, 0);
        if ( v9 < 0 )
          v9 = -1073741491;
        CmpDetachFromRegistryProcess(&ApcState);
        ExReleaseRundownProtection_0(v15 + 205);
        goto LABEL_25;
      }
      v9 = -1073740763;
    }
    CmpUnlockKcb(*(_QWORD *)(v12 + 8));
    CmpUnlockRegistry(v21, v20, v22, v23);
LABEL_25:
    if ( v4 )
      v9 = CmPostCallbackNotificationEx(31, v12, v9, (__int64)v33, 0LL, v31);
    goto LABEL_27;
  }
LABEL_28:
  v3 = v29;
LABEL_29:
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v5) = 21;
    CmpTraceRoutine(v5, v35, (unsigned int)v9, 0LL, v1, 0LL);
  }
  if ( v8 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v32);
  return (unsigned int)v9;
}
