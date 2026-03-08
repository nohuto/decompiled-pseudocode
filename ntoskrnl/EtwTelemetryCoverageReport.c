/*
 * XREFs of EtwTelemetryCoverageReport @ 0x1402F9DD0
 * Callers:
 *     EtwpCoverageRecordAtHighIrql @ 0x1405FD574 (EtwpCoverageRecordAtHighIrql.c)
 *     PsSetProcessFaultInformation @ 0x14067FC50 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageEnsureContext @ 0x1408537B4 (EtwpCoverageEnsureContext.c)
 *     PopTransitionTelemetryOsState @ 0x140855C64 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageProvEnableCallback @ 0x14085DE70 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x1409E566C (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1409E5850 (EtwpCoverageResetCP.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwpCoverageValidateCP @ 0x1402F9EFC (EtwpCoverageValidateCP.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     EtwpCoverageAddToStringBuffer @ 0x1403BD4CC (EtwpCoverageAddToStringBuffer.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCoverageRecord @ 0x14078E9DC (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x1408537B4 (EtwpCoverageEnsureContext.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwTelemetryCoverageReport(__int64 *a1)
{
  int v1; // r13d
  int v2; // r12d
  _QWORD *v4; // rdi
  BOOL v5; // r14d
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int v10; // eax
  KIRQL v11; // al
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  int v17; // eax
  _DWORD *v18; // r9
  bool v19; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  _QWORD *Pool2; // rax
  unsigned __int64 v25; // r14
  _QWORD *v26; // rcx
  _QWORD *v27; // r8
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  int v32; // r9d
  __int64 v33; // rdx
  unsigned int v34; // eax
  int v35; // r9d
  unsigned int v36; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-85h] BYREF
  unsigned int v38; // [rsp+40h] [rbp-81h] BYREF
  int v39; // [rsp+44h] [rbp-7Dh]
  int v40; // [rsp+48h] [rbp-79h] BYREF
  int v41; // [rsp+4Ch] [rbp-75h] BYREF
  int v42; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+58h] [rbp-69h] BYREF
  int *v44; // [rsp+78h] [rbp-49h]
  __int64 v45; // [rsp+80h] [rbp-41h]
  unsigned int *v46; // [rsp+88h] [rbp-39h]
  __int64 v47; // [rsp+90h] [rbp-31h]
  unsigned int *v48; // [rsp+98h] [rbp-29h]
  __int64 v49; // [rsp+A0h] [rbp-21h]
  int *v50; // [rsp+A8h] [rbp-19h]
  __int64 v51; // [rsp+B0h] [rbp-11h]
  int *v52; // [rsp+B8h] [rbp-9h]
  __int64 v53; // [rsp+C0h] [rbp-1h]
  int *v54; // [rsp+C8h] [rbp+7h]
  __int64 v55; // [rsp+D0h] [rbp+Fh]
  char v56[16]; // [rsp+D8h] [rbp+17h] BYREF

  v1 = 0;
  v2 = 0;
  v36 = 0;
  v39 = 0;
  v4 = 0LL;
  v5 = ObGetCurrentIrql() < 2u && (a1[2] & 1) == 0;
  if ( !EtwpCoverageNonPagedContext )
  {
    if ( !v5 )
      return (unsigned int)-1073741641;
    v8 = EtwpCoverageEnsureContext();
    if ( (v8 & 0x80000000) != 0 )
      return v8;
  }
  v6 = EtwpCoverageNonPagedContext;
  v7 = EtwpCoverageNonPagedContext + 24;
  if ( *((_DWORD *)a1 + 3) >= 0xFFFFFF00 )
    return (unsigned int)-1073741637;
  if ( v5 )
  {
    EtwpCoverageRecord(EtwpCoverageContext, a1);
    return 0;
  }
  if ( !(unsigned int)EtwpCoverageValidateCP(a1, &v36) )
  {
    v8 = -1073741811;
LABEL_57:
    if ( EtwpCoverageCoreTracingEnabled
      && (unsigned int)dword_140C042F0 > 5
      && (unsigned __int8)tlgKeywordOn(&dword_140C042F0, 1LL) )
    {
      v33 = *a1;
      v38 = *(_DWORD *)v6;
      v44 = (int *)&v38;
      v37 = *(_DWORD *)(v6 + 4);
      v46 = &v37;
      v34 = v32 - *(_DWORD *)(v6 + 16);
      v35 = v32 - *(_DWORD *)(v6 + 20);
      v36 = v34;
      v48 = &v36;
      v50 = &v40;
      v52 = &v41;
      v54 = &v42;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v40 = v35;
      v51 = 4LL;
      v41 = v2;
      v53 = 4LL;
      v42 = v1;
      v55 = 4LL;
      tlgCreate1Sz_char(v56, v33);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C042F0,
        (unsigned __int8 *)byte_14003516D,
        0LL,
        0LL,
        9u,
        &v43);
    }
    return v8;
  }
  v10 = *(_DWORD *)v6;
  v37 = *((_DWORD *)a1 + 3);
  if ( v37 >= v10 )
  {
    v2 = 1;
    v8 = 0;
    v1 = 1;
    goto LABEL_57;
  }
  *((_DWORD *)a1 + 3) = v10;
  while ( 1 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    v12 = *(_QWORD *)(v7 + 8);
    v13 = *(_QWORD *)(v7 + 64);
    v14 = v11;
    if ( v12 )
    {
      v39 = EtwpCoverageAddToStringBuffer(v12, *a1, v36);
      if ( v39 )
        break;
    }
    KxReleaseSpinLock((volatile signed __int64 *)v7);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v19 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v14);
    if ( !v4 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 1024LL, 1450669125LL);
      v4 = Pool2;
      if ( !Pool2 )
      {
        *((_DWORD *)a1 + 3) = v37;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 4));
        v2 = v39;
        v8 = -1073741670;
        v1 = 0;
        goto LABEL_57;
      }
      memset(Pool2, 0, 0x400uLL);
      v4[2] = v4 + 128;
      v4[3] = v4 + 5;
      v4[4] = v4 + 5;
    }
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    if ( v13 == *(_QWORD *)(v7 + 64) )
    {
      v26 = *(_QWORD **)(v7 + 8);
      if ( v26 )
      {
        v27 = *(_QWORD **)(v7 + 24);
        if ( *v27 != v7 + 16 )
          __fastfail(3u);
        *v26 = v7 + 16;
        v26[1] = v27;
        *v27 = v26;
        *(_QWORD *)(v7 + 24) = v26;
      }
      ++*(_QWORD *)(v7 + 64);
      *(_QWORD *)(v7 + 8) = v4;
      v4 = 0LL;
    }
    KxReleaseSpinLock((volatile signed __int64 *)v7);
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v25 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
        v19 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v25);
  }
  if ( !*(_DWORD *)(v7 + 72) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 32), DelayedWorkQueue);
    *(_DWORD *)(v7 + 72) = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)v7);
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
      v18 = v16->SchedulerAssist;
      v19 = (v17 & v18[5]) == 0;
      v18[5] &= v17;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  __writecr8(v14);
  v8 = 0;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x56777445u);
  return v8;
}
