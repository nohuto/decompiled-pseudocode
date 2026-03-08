/*
 * XREFs of CmpTransSearchAddTrans @ 0x1406B570C
 * Callers:
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406B5A64 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTransFromRm @ 0x140735958 (CmpTransSearchAddTransFromRm.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExBlockOnAddressPushLock @ 0x1402BF8C0 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     CmpSearchForTrans @ 0x1406B5904 (CmpSearchForTrans.c)
 *     CmpTransReferenceTransaction @ 0x1406B5C38 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1406B5C90 (CmpTransDereferenceTransaction.c)
 *     CmpBindHiveToTrans @ 0x1406B5CAC (CmpBindHiveToTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407353BC (CmpTransInitializeTransaction.c)
 *     CmpTransAllocateTrans @ 0x14078C6A4 (CmpTransAllocateTrans.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpTransSearchAddTrans(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *Trans; // rsi
  int v7; // r13d
  int v12; // edi
  int v13; // edi
  int v14; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v19; // rcx
  struct _KTHREAD *v20; // rax
  BOOLEAN v21; // al
  struct _KTHREAD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  Trans = 0LL;
  v7 = 0;
  if ( a1 )
  {
    v12 = CmpTransReferenceTransaction();
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  v13 = a5;
  v14 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v16 = CmpSearchForTrans(a3, a1, a2);
      if ( !v16 )
      {
        if ( !v13 )
          goto LABEL_20;
        break;
      }
      if ( a1 && (*(_DWORD *)(v16 + 48) & 7) != 0 )
      {
LABEL_20:
        v12 = -1072103422;
        if ( Trans )
          goto LABEL_36;
        goto LABEL_12;
      }
      if ( (*(_DWORD *)(v16 + 48) & 8) == 0 )
        break;
      if ( !v13 )
        goto LABEL_20;
      LODWORD(v26) = CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      ExBlockOnAddressPushLock(
        (__int64)&CmpTransactionInitializingEvent,
        &CmpTransactionInitializingCount,
        &v26,
        4uLL,
        0LL);
    }
    if ( Trans )
      break;
    if ( v16 )
    {
      CmpBindHiveToTrans(a4);
LABEL_11:
      v12 = 0;
      *a6 = v17;
      goto LABEL_12;
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    Trans = (_QWORD *)CmpTransAllocateTrans(a1, a2, a3, a4);
    if ( !Trans )
    {
      v12 = -1073741670;
      goto LABEL_16;
    }
  }
  if ( *(_QWORD *)(a3 + 80) )
  {
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a3 + 80) + 1640LL));
    v7 = v21;
    if ( !v21 )
    {
      v12 = -1073741431;
      goto LABEL_36;
    }
  }
  v19 = *(_QWORD **)(a3 + 24);
  if ( *v19 != a3 + 16 )
    goto LABEL_37;
  Trans[1] = v19;
  *Trans = a3 + 16;
  *v19 = Trans;
  *(_QWORD *)(a3 + 24) = Trans;
  ++CmpTransactionInitializingCount;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  v14 = 0;
  v12 = CmpTransInitializeTransaction(Trans);
  if ( v12 >= 0 )
  {
    v17 = Trans;
    goto LABEL_11;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v23 = *Trans;
  if ( *(_QWORD **)(*Trans + 8LL) != Trans || (v24 = (_QWORD *)Trans[1], (_QWORD *)*v24 != Trans) )
LABEL_37:
    __fastfail(3u);
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
  --CmpTransactionInitializingCount;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  _InterlockedOr(v25, 0);
  if ( CmpTransactionInitializingEvent )
    ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
LABEL_36:
  ExFreePoolWithTag(Trans, 0x72544D43u);
LABEL_12:
  if ( v7 )
  {
    ExReleaseRundownProtection_0(a4 + 205);
    KeLeaveCriticalRegion();
  }
  if ( v14 )
  {
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
  }
LABEL_16:
  if ( a1 )
    CmpTransDereferenceTransaction(a1);
  return (unsigned int)v12;
}
