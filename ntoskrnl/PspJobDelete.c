LONG_PTR __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v3; // rsi
  void *v4; // rcx
  __int64 v5; // rcx
  char **v6; // rdx
  PVOID *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  char *v10; // rax
  char *v11; // rcx
  struct _KTHREAD *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  LONG_PTR result; // rax
  void *v16; // rcx
  char **v17; // rdx
  void *v18; // rcx
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  __int128 v22; // [rsp+38h] [rbp-31h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h]
  _OWORD v24[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp+7h]
  _OWORD v26[2]; // [rsp+78h] [rbp+Fh] BYREF
  int v27; // [rsp+98h] [rbp+2Fh]

  v25 = 0LL;
  v23 = 0LL;
  memset(v24, 0, sizeof(v24));
  v27 = 0;
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v26, 0, sizeof(v26));
  v21 = 0LL;
  PspEmptyPropertySet(Object + 1496);
  PspJobDeleteStorageArrays(Object);
  v3 = (__int64 *)(Object + 1528);
  if ( *((_QWORD *)Object + 153) || *v3 )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v21);
    PspLockJobConditionally(Object, &v21);
    if ( *((_QWORD *)Object + 153) )
      PspRemoveCpuRateControl(Object);
    v19 = *v3;
    if ( *v3 )
    {
      memset((char *)v24 + 8, 0, 24);
      v25 = 4LL;
      *(_QWORD *)&v24[0] = *(_QWORD *)(v19 + 56);
      PspNetRateControlDispatch(v24);
      PspRemoveRateControl(Object);
    }
    PspUnlockJobConditionally(Object, &v21);
    PspUnlockJob(v21, CurrentThread);
  }
  PspJobIoRateControlDisable(Object);
  if ( *((_QWORD *)Object + 196) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v21);
    PspLockJobConditionally(Object, &v21);
    if ( *((_QWORD *)Object + 196) )
      PspRemoveIoAttribution(Object);
    PspUnlockJobConditionally(Object, &v21);
    PspUnlockJob(v21, CurrentThread);
  }
  LODWORD(v21) = *((_DWORD *)Object + 144);
  if ( (unsigned int)v21 <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v22 = Object;
    DWORD2(v22) = 2;
    v23 = 0LL;
    PspLockJobExclusive(Object, CurrentThread);
    PsInvokeWin32Callout(6LL, &v22, 1LL, &v21);
    PspUnlockJob(Object, CurrentThread);
  }
  v4 = (void *)*((_QWORD *)Object + 69);
  *((_DWORD *)Object + 64) = 0;
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v4, 0x624A7350u);
    *((_QWORD *)Object + 69) = 0LL;
  }
  v5 = *((_QWORD *)Object + 66);
  if ( v5 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v5 + 8));
    ExFreePoolWithTag(*((PVOID *)Object + 66), 0x614A7350u);
    PsReturnSharedPoolQuota(*((PVOID *)Object + 67));
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
  v6 = (char **)*((_QWORD *)Object + 3);
  if ( v6[1] != Object + 24 )
    goto LABEL_40;
  v7 = (PVOID *)*((_QWORD *)Object + 4);
  if ( *v7 != Object + 24 )
    goto LABEL_40;
  *v7 = v6;
  v6[1] = (char *)v7;
  PspUnlockJobListExclusive(CurrentThread);
  v8 = (void *)*((_QWORD *)Object + 150);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x624A7350u);
    v20 = (void *)*((_QWORD *)Object + 151);
    *((_QWORD *)Object + 150) = 0LL;
    PsReturnSharedPoolQuota(v20);
  }
  v9 = *((_QWORD *)Object + 152);
  if ( v9 )
    IoFreeMiniCompletionPacket(v9);
  if ( (*((_DWORD *)Object + 384) & 0x800) != 0 )
    ZwDeleteWnfStateName(Object + 1096);
  PspGetJobLockHierarchyForDeletion(Object, v26);
  PspLockJobsAndProcessExclusive(v26, 0LL, CurrentThread, 0LL);
  v10 = Object + 1256;
  v11 = (char *)*((_QWORD *)Object + 157);
  if ( v11 != Object + 1256 )
  {
    if ( *((char **)v11 + 1) == v10 )
    {
      v17 = (char **)*((_QWORD *)Object + 158);
      if ( *v17 == v10 )
      {
        *v17 = v11;
        *((_QWORD *)v11 + 1) = v17;
        *((_QWORD *)Object + 158) = Object + 1256;
        *(_QWORD *)v10 = v10;
        ObDereferenceObjectDeferDeleteWithTag(*((PVOID *)Object + 161), 0x73507350u);
        *((_QWORD *)Object + 161) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_19:
  PspUnlockJobsAndProcessExclusive(v26, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(Object + 56));
  if ( *((_QWORD *)Object + 165) )
  {
    v18 = (void *)*((_QWORD *)Object + 166);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0x624A7350u);
      *((_QWORD *)Object + 166) = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 384) & 0x40000000) != 0 )
    PspDeleteSilo(Object);
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  v13 = *((_DWORD *)Object + 363);
  if ( v13 )
  {
    v14 = ExMapHandleToPointer(PspUniqueJobIdTable, v13);
    ExDestroyHandle(PspUniqueJobIdTable, *((unsigned int *)Object + 363), v14);
  }
  result = KeLeaveCriticalRegionThread(KeGetCurrentThread());
  v16 = (void *)*((_QWORD *)Object + 222);
  if ( v16 )
    return ObfDereferenceObjectWithTag(v16, 0x624A7350u);
  return result;
}
