/*
 * XREFs of PspJobDelete @ 0x1402DD320
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x140275720 (ExDeleteResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1403FB540 (ZwDeleteWnfStateName.c)
 *     PspLockJobConditionally @ 0x1406167C8 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140618B90 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140618BD4 (PspLockJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x1406193EC (PspUnlockJobConditionally.c)
 *     ExDestroyHandle @ 0x14061A1D8 (ExDestroyHandle.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     ExMapHandleToPointer @ 0x14061BF20 (ExMapHandleToPointer.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14065C9F8 (PspGetJobLockHierarchyForDeletion.c)
 *     PspJobIoRateControlDisable @ 0x14065CA70 (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x14065CAD4 (PspJobDeleteStorageArrays.c)
 *     IoFreeMiniCompletionPacket @ 0x14065CB10 (IoFreeMiniCompletionPacket.c)
 *     PspRemoveCpuRateControl @ 0x14065CB2C (PspRemoveCpuRateControl.c)
 *     PspLockRootJobExclusive @ 0x14065CFF0 (PspLockRootJobExclusive.c)
 *     PspRemoveIoAttribution @ 0x14065DBD4 (PspRemoveIoAttribution.c)
 *     PspEmptyPropertySet @ 0x1406C5908 (PspEmptyPropertySet.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     PsReturnSharedPoolQuota @ 0x1406D9184 (PsReturnSharedPoolQuota.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14071EC9C (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x14071FB3C (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobListExclusive @ 0x14071FDD4 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x14071FE14 (PspLockJobListExclusive.c)
 *     PspDeleteSilo @ 0x140906468 (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x140909054 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1409092CC (PspRemoveRateControl.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  char **v5; // rdx
  PVOID *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rax
  char *v10; // rdx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  void *v14; // rcx
  char **v15; // rcx
  void *v16; // rcx
  __int64 v17; // rax
  void *v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-21h] BYREF
  __int128 v21; // [rsp+48h] [rbp-19h] BYREF
  __int64 v22; // [rsp+58h] [rbp-9h]
  _OWORD v23[2]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v24; // [rsp+80h] [rbp+1Fh]
  _OWORD v25[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+47h]

  v24 = 0LL;
  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  v26 = 0LL;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v25, 0, sizeof(v25));
  v19 = 0LL;
  PspEmptyPropertySet(Object + 1280);
  PspJobDeleteStorageArrays(Object);
  if ( *((_QWORD *)Object + 126) || *((_QWORD *)Object + 164) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v19);
    PspLockJobConditionally(Object, &v19);
    if ( *((_QWORD *)Object + 126) )
      PspRemoveCpuRateControl(Object);
    v17 = *((_QWORD *)Object + 164);
    if ( v17 )
    {
      memset((char *)v23 + 8, 0, 24);
      v24 = 4LL;
      *(_QWORD *)&v23[0] = *(_QWORD *)(v17 + 56);
      PspNetRateControlDispatch(v23);
      PspRemoveRateControl(Object);
    }
    PspUnlockJobConditionally(Object, &v19);
    PspUnlockJob(v19, CurrentThread);
  }
  PspJobIoRateControlDisable(Object);
  if ( *((_QWORD *)Object + 169) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v19);
    PspLockJobConditionally(Object, &v19);
    if ( *((_QWORD *)Object + 169) )
      PspRemoveIoAttribution(Object);
    PspUnlockJobConditionally(Object, &v19);
    PspUnlockJob(v19, CurrentThread);
  }
  v20 = *((_DWORD *)Object + 120);
  if ( v20 <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v21 = Object;
    DWORD2(v21) = 2;
    v22 = 0LL;
    PspLockJobExclusive(Object, CurrentThread);
    PsInvokeWin32Callout(6LL, &v21, 1LL, &v20);
    PspUnlockJob(Object, CurrentThread);
  }
  v3 = (void *)*((_QWORD *)Object + 57);
  *((_DWORD *)Object + 64) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x624A7350u);
    *((_QWORD *)Object + 57) = 0LL;
  }
  v4 = *((_QWORD *)Object + 54);
  if ( v4 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 8));
    ExFreePoolWithTag(*((PVOID *)Object + 54), 0x614A7350u);
    PsReturnSharedPoolQuota(*((PVOID *)Object + 55));
  }
  PspLockJobListExclusive(CurrentThread);
  v5 = (char **)*((_QWORD *)Object + 3);
  if ( v5[1] != Object + 24 )
    goto LABEL_40;
  v6 = (PVOID *)*((_QWORD *)Object + 4);
  if ( *v6 != Object + 24 )
    goto LABEL_40;
  *v6 = v5;
  v5[1] = (char *)v6;
  PspUnlockJobListExclusive(CurrentThread);
  v7 = (void *)*((_QWORD *)Object + 123);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x624A7350u);
    v18 = (void *)*((_QWORD *)Object + 124);
    *((_QWORD *)Object + 123) = 0LL;
    PsReturnSharedPoolQuota(v18);
  }
  v8 = *((_QWORD *)Object + 125);
  if ( v8 )
    IoFreeMiniCompletionPacket(v8);
  if ( (*((_DWORD *)Object + 330) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)Object + 110);
  PspGetJobLockHierarchyForDeletion(Object, v25);
  PspLockJobsAndProcessExclusive(v25, 0LL, CurrentThread, 0LL);
  v9 = Object + 1040;
  v10 = (char *)*((_QWORD *)Object + 130);
  if ( v10 != Object + 1040 )
  {
    if ( *((char **)v10 + 1) == v9 )
    {
      v15 = (char **)*((_QWORD *)Object + 131);
      if ( *v15 == v9 )
      {
        *v15 = v10;
        *((_QWORD *)v10 + 1) = v15;
        *((_QWORD *)Object + 131) = Object + 1040;
        *(_QWORD *)v9 = v9;
        ObDereferenceObjectDeferDelete(*((PVOID *)Object + 134));
        *((_QWORD *)Object + 134) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_19:
  PspUnlockJobsAndProcessExclusive(v25, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(Object + 56));
  if ( *((_QWORD *)Object + 138) )
  {
    v16 = (void *)*((_QWORD *)Object + 139);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x624A7350u);
      *((_QWORD *)Object + 139) = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 330) & 0x40000000) != 0 )
    PspDeleteSilo(Object);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  v12 = *((_DWORD *)Object + 309);
  if ( v12 )
  {
    v13 = ExMapHandleToPointer(PspUniqueJobIdTable, v12);
    ExDestroyHandle(PspUniqueJobIdTable, *((unsigned int *)Object + 309), v13);
  }
  KeLeaveCriticalRegion();
  v14 = (void *)*((_QWORD *)Object + 195);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x624A7350u);
}
