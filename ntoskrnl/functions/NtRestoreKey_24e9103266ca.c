__int64 __fastcall NtRestoreKey(int a1, HANDLE a2, unsigned int a3)
{
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  signed int v11; // ebx
  PVOID v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  NTSTATUS v16; // eax
  HANDLE v17; // rdi
  int v18; // eax
  struct _KTHREAD *v19; // rax
  _QWORD *v20; // rdi
  HANDLE v21; // r15
  int v22; // eax
  HANDLE Handle; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v27; // [rsp+60h] [rbp-59h] BYREF
  __int128 v28; // [rsp+70h] [rbp-49h] BYREF
  __int128 v29; // [rsp+80h] [rbp-39h]
  __int128 v30; // [rsp+90h] [rbp-29h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-19h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v26[1] = v26;
  v26[0] = v26;
  v27 = 0LL;
  v6 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v27);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(CurrentThread, v9, v10) )
  {
    v11 = CmCheckNoTxContext();
    if ( v11 < 0 )
    {
LABEL_27:
      CmpReleaseShutdownRundown(v13, v12, v14);
      goto LABEL_28;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v11 = -1073741727;
      goto LABEL_27;
    }
    if ( PreviousMode == 1 )
    {
      v16 = IoConvertFileHandleToKernelHandle(a2, 1, 1, 0, &Handle);
      v17 = Handle;
      v11 = v16;
      if ( v16 < 0 )
      {
LABEL_24:
        if ( v17 && v17 != a2 )
          ZwClose(v17);
        goto LABEL_27;
      }
    }
    else
    {
      v17 = a2;
      Handle = a2;
    }
    LOBYTE(v15) = PreviousMode;
    v18 = CmObReferenceObjectByHandle(a1, 0, v14, v15, (__int64)&Object, 0LL);
    v12 = Object;
    v11 = v18;
    if ( v18 < 0 )
    {
LABEL_22:
      if ( v12 )
        ObfDereferenceObject(v12);
      goto LABEL_24;
    }
    v13 = *(unsigned int *)(*((_QWORD *)Object + 1) + 8LL);
    if ( (v13 & 0x80u) != 0LL )
    {
      v11 = -1073741790;
      goto LABEL_22;
    }
    v19 = KeGetCurrentThread();
    v20 = Object;
    v21 = Handle;
    --v19->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v28 = v20;
      *((_QWORD *)&v28 + 1) = v21;
      LODWORD(v29) = a3;
      v22 = CmpCallCallBacksEx(0x29u, &v28, 0LL, 1, 0x2Au, 0LL, (__int64)v26);
      v11 = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          v11 = 0;
LABEL_21:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v12 = Object;
        v17 = Handle;
        goto LABEL_22;
      }
      v6 = 1;
    }
    CmpAttachToRegistryProcess(&ApcState);
    v11 = CmRestoreKey(v20, (ULONG_PTR)v21, a3);
    CmpDetachFromRegistryProcess(&ApcState);
    if ( v6 )
      v11 = CmPostCallbackNotificationEx(42, (__int64)v20, v11, (__int64)&v28, 0LL, v26);
    goto LABEL_21;
  }
  v11 = -1073741431;
LABEL_28:
  CmCleanupThreadInfo((__int64 *)&v27);
  return (unsigned int)v11;
}
