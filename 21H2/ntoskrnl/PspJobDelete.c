/*
 * XREFs of PspJobDelete @ 0x1402046D0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1403FC0A0 (ZwDeleteWnfStateName.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1405D9E28 (PspGetJobLockHierarchyForDeletion.c)
 *     PspJobIoRateControlDisable @ 0x1405D9EA0 (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x1405D9F04 (PspJobDeleteStorageArrays.c)
 *     IoFreeMiniCompletionPacket @ 0x1405D9F40 (IoFreeMiniCompletionPacket.c)
 *     PspRemoveCpuRateControl @ 0x1405D9F5C (PspRemoveCpuRateControl.c)
 *     PspLockRootJobExclusive @ 0x1405DA420 (PspLockRootJobExclusive.c)
 *     PspRemoveIoAttribution @ 0x1405DAF94 (PspRemoveIoAttribution.c)
 *     PspEmptyPropertySet @ 0x140641968 (PspEmptyPropertySet.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     PsReturnSharedPoolQuota @ 0x1406551E4 (PsReturnSharedPoolQuota.c)
 *     PspLockJobConditionally @ 0x14067FFC8 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406823D4 (PspLockJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x140682BEC (PspUnlockJobConditionally.c)
 *     ExDestroyHandle @ 0x1406839D8 (ExDestroyHandle.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     ExMapHandleToPointer @ 0x140685770 (ExMapHandleToPointer.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1406F648C (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x1406F6C1C (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobListExclusive @ 0x1406F7504 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x1406F7544 (PspLockJobListExclusive.c)
 *     PspDeleteSilo @ 0x140906578 (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x140909164 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1409093DC (PspRemoveRateControl.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PspJobDelete(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  void *v14; // rcx
  _QWORD *v15; // rcx
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
  PspEmptyPropertySet(a1 + 1280);
  PspJobDeleteStorageArrays(a1);
  if ( *(_QWORD *)(a1 + 1008) || *(_QWORD *)(a1 + 1312) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v19);
    PspLockJobConditionally(a1, &v19);
    if ( *(_QWORD *)(a1 + 1008) )
      PspRemoveCpuRateControl(a1);
    v17 = *(_QWORD *)(a1 + 1312);
    if ( v17 )
    {
      memset((char *)v23 + 8, 0, 24);
      v24 = 4LL;
      *(_QWORD *)&v23[0] = *(_QWORD *)(v17 + 56);
      PspNetRateControlDispatch(v23);
      PspRemoveRateControl(a1);
    }
    PspUnlockJobConditionally(a1, &v19);
    PspUnlockJob(v19, CurrentThread);
  }
  PspJobIoRateControlDisable(a1);
  if ( *(_QWORD *)(a1 + 1352) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v19);
    PspLockJobConditionally(a1, &v19);
    if ( *(_QWORD *)(a1 + 1352) )
      PspRemoveIoAttribution((PVOID)a1);
    PspUnlockJobConditionally(a1, &v19);
    PspUnlockJob(v19, CurrentThread);
  }
  v20 = *(_DWORD *)(a1 + 480);
  if ( v20 <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v21 = a1;
    DWORD2(v21) = 2;
    v22 = 0LL;
    PspLockJobExclusive(a1, CurrentThread);
    PsInvokeWin32Callout(6LL, &v21, 1LL, &v20);
    PspUnlockJob(a1, CurrentThread);
  }
  v3 = *(void **)(a1 + 456);
  *(_DWORD *)(a1 + 256) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x624A7350u);
    *(_QWORD *)(a1 + 456) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 432);
  if ( v4 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 432), 0x614A7350u);
    PsReturnSharedPoolQuota(*(PVOID *)(a1 + 440));
  }
  PspLockJobListExclusive(CurrentThread);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v5 + 8) != a1 + 24 )
    goto LABEL_40;
  v6 = *(_QWORD **)(a1 + 32);
  if ( *v6 != a1 + 24 )
    goto LABEL_40;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  PspUnlockJobListExclusive(CurrentThread);
  v7 = *(void **)(a1 + 984);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x624A7350u);
    v18 = *(void **)(a1 + 992);
    *(_QWORD *)(a1 + 984) = 0LL;
    PsReturnSharedPoolQuota(v18);
  }
  v8 = *(_QWORD *)(a1 + 1000);
  if ( v8 )
    IoFreeMiniCompletionPacket(v8);
  if ( (*(_DWORD *)(a1 + 1320) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(a1 + 880));
  PspGetJobLockHierarchyForDeletion(a1, v25);
  PspLockJobsAndProcessExclusive(v25, 0LL, CurrentThread, 0LL);
  v9 = (_QWORD *)(a1 + 1040);
  v10 = *(_QWORD *)(a1 + 1040);
  if ( v10 != a1 + 1040 )
  {
    if ( *(_QWORD **)(v10 + 8) == v9 )
    {
      v15 = *(_QWORD **)(a1 + 1048);
      if ( (_QWORD *)*v15 == v9 )
      {
        *v15 = v10;
        *(_QWORD *)(v10 + 8) = v15;
        *(_QWORD *)(a1 + 1048) = a1 + 1040;
        *v9 = v9;
        ObDereferenceObjectDeferDelete(*(PVOID *)(a1 + 1072));
        *(_QWORD *)(a1 + 1072) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_19:
  PspUnlockJobsAndProcessExclusive(v25, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1104) )
  {
    v16 = *(void **)(a1 + 1112);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x624A7350u);
      *(_QWORD *)(a1 + 1112) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 1320) & 0x40000000) != 0 )
    PspDeleteSilo(a1);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  v12 = *(_DWORD *)(a1 + 1236);
  if ( v12 )
  {
    v13 = ExMapHandleToPointer(PspUniqueJobIdTable, v12);
    ExDestroyHandle(PspUniqueJobIdTable, *(unsigned int *)(a1 + 1236), v13);
  }
  KeLeaveCriticalRegion();
  v14 = *(void **)(a1 + 1560);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x624A7350u);
}
