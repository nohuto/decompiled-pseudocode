/*
 * XREFs of CmKtmNotification @ 0x140734290
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     TmCommitComplete @ 0x1403D2870 (TmCommitComplete.c)
 *     TmDereferenceEnlistmentKey @ 0x1403D2910 (TmDereferenceEnlistmentKey.c)
 *     TmPrepareComplete @ 0x1403D2A50 (TmPrepareComplete.c)
 *     TmReadOnlyEnlistment @ 0x1403D2AD0 (TmReadOnlyEnlistment.c)
 *     TmReferenceEnlistmentKey @ 0x1403D2B50 (TmReferenceEnlistmentKey.c)
 *     TmRollbackComplete @ 0x1403D2BB0 (TmRollbackComplete.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1406B5ED0 (CmpTransMgrCommit.c)
 *     LOCK_HIVE_LOAD @ 0x1406C00DC (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406C0154 (UNLOCK_HIVE_LOAD.c)
 *     CmpQueryNameString @ 0x140733F8C (CmpQueryNameString.c)
 *     CmpIsCmRm @ 0x1407346E8 (CmpIsCmRm.c)
 *     CmLogTmRmAction @ 0x14073478C (CmLogTmRmAction.c)
 *     CmpCleanupTransactionState @ 0x14073526C (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x1407355B4 (CmpAccountForLogReservation.c)
 *     CmpTransMgrRollback @ 0x140781FE8 (CmpTransMgrRollback.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     CmpRecoverEnlistment @ 0x1407FCAF8 (CmpRecoverEnlistment.c)
 */

__int64 __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        _DWORD *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        PVOID Argument)
{
  char v8; // r13
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  NTSTATUS v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v15; // eax
  ULONG_PTR v16; // rcx
  char v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // eax
  __int64 v22; // r8
  char v23; // r15
  NTSTATUS v24; // eax
  __int64 v25; // r9
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v28; // [rsp+40h] [rbp-71h] BYREF
  char v29; // [rsp+41h] [rbp-70h]
  char v30; // [rsp+42h] [rbp-6Fh]
  PVOID Key; // [rsp+48h] [rbp-69h] BYREF
  int v32; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v33; // [rsp+54h] [rbp-5Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-49h]
  __int128 v36; // [rsp+78h] [rbp-39h] BYREF
  __int128 v37; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v38[2]; // [rsp+98h] [rbp-19h] BYREF

  Key = 0LL;
  Handle = 0LL;
  v30 = 0;
  v28 = 0;
  v36 = 0LL;
  v32 = 0;
  v8 = 0;
  v37 = 0LL;
  UnicodeString = 0LL;
  v29 = 1;
  memset(v38, 0, sizeof(v38));
  CmpInitializeThreadInfo((__int64)&v36);
  if ( !(unsigned __int8)CmpIsCmRm(RMContext) )
  {
    v12 = -1073741811;
    goto LABEL_84;
  }
  if ( (RMContext[26] & 8) != 0 )
    goto LABEL_83;
  if ( TransactionNotification == 256 )
  {
    v13 = CmpRecoverEnlistment(RMContext, v11, Argument);
    goto LABEL_6;
  }
  if ( (TransactionNotification & 0xE) == 0 )
  {
LABEL_83:
    v12 = 0;
    goto LABEL_84;
  }
  v12 = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  if ( v12 )
    goto LABEL_84;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v15 = *((_DWORD *)Key + 12);
  if ( (v15 & 8) != 0 )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        *((_DWORD *)Key + 12) = v15 | 1;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        v13 = TmPrepareComplete(EnlistmentObject, 0LL);
        break;
      case 4u:
        *((_DWORD *)Key + 12) = v15 | 4;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        TmCommitComplete(EnlistmentObject, 0LL);
        goto LABEL_84;
      case 8u:
        *((_DWORD *)Key + 12) = v15 | 2;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        v13 = TmRollbackComplete(EnlistmentObject, 0LL);
        break;
      default:
LABEL_84:
        CmCleanupThreadInfo((__int64 *)&v36);
        return (unsigned int)v12;
    }
LABEL_6:
    v12 = v13;
    goto LABEL_84;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  v16 = qword_140C028D0;
  if ( CmRmSystem != RMContext )
    v16 = *((_QWORD *)RMContext + 10);
  if ( CmpTraceTxrRoutine && CmpQueryNameString(*(void **)(v16 + 1544), &UnicodeString) >= 0 )
  {
    EtwGetKernelTraceTimestamp((__int64)v38, 0x20000LL);
    v37 = *(_OWORD *)((char *)Key + 88);
  }
  if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
  {
    v17 = 0;
  }
  else
  {
    LOCK_HIVE_LOAD();
    v17 = 1;
  }
  if ( (unsigned __int8)CmpIsCmRm(RMContext) )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        v21 = CmpTransMgrPrepare((__int64)RMContext, (__int64)Key, &v32, &v28);
        v22 = 4LL;
        break;
      case 4u:
        v21 = CmpTransMgrCommit(v19, (__int64)Key, &v32);
        v22 = 16LL;
        break;
      case 8u:
        v21 = CmpTransMgrRollback(Key, &v32);
        v22 = 8LL;
        break;
      default:
        v12 = -1073741811;
        v33 = -1073741811;
        goto LABEL_46;
    }
    v33 = v21;
    v12 = v21;
    if ( v21 >= 0 || TransactionNotification == 4 )
    {
      v33 = v21;
      if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v21 < 0 )
      {
        v29 = 0;
      }
      else
      {
        v12 = CmLogTmRmAction(RMContext, Key, v22);
        if ( TransactionNotification != 2 )
          v12 = 0;
      }
      v30 = 1;
      if ( TransactionNotification == 4 )
        goto LABEL_48;
    }
    if ( TransactionNotification == 8 )
    {
LABEL_48:
      v23 = v28;
LABEL_49:
      if ( *((_QWORD *)Key + 9) )
        Handle = (HANDLE)*((_QWORD *)Key + 10);
      if ( (*((_DWORD *)Key + 12) & 0x20) != 0 && (int)CmpAccountForLogReservation(RMContext, v18, 0LL) >= 0 )
        *((_DWORD *)Key + 12) &= ~0x20u;
      if ( v12 >= 0 || TransactionNotification != 4 )
      {
        v24 = CmpTransMgrRollback(Key, &v32);
        LOBYTE(v25) = v29;
        v12 = v24;
        CmpCleanupTransactionState(RMContext, Key, TransactionNotification, v25);
      }
LABEL_57:
      TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
      if ( v17 )
        UNLOCK_HIVE_LOAD();
      if ( v30 == 1 )
      {
        switch ( TransactionNotification )
        {
          case 2u:
            if ( v23 == 1 )
              OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
            else
              OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
            break;
          case 4u:
            TmCommitComplete(EnlistmentObject, 0LL);
            goto LABEL_69;
          case 8u:
            OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
            break;
          default:
            goto LABEL_69;
        }
        v12 = OnlyEnlistment;
      }
LABEL_69:
      if ( Handle )
        ZwClose(Handle);
      switch ( TransactionNotification )
      {
        case 2u:
          v8 = 31;
          break;
        case 4u:
          v8 = 30;
          break;
        case 8u:
          v8 = 32;
          break;
      }
      if ( CmpTraceTxrRoutine && v8 )
      {
        if ( !UnicodeString.Buffer )
          goto LABEL_84;
        p_UnicodeString = &UnicodeString;
        LOBYTE(p_UnicodeString) = v8;
        CmpTraceTxrRoutine(p_UnicodeString, v38, &v37, v33, v32, &UnicodeString);
      }
      if ( UnicodeString.Buffer )
        RtlFreeUnicodeString(&UnicodeString);
      goto LABEL_84;
    }
LABEL_46:
    v23 = v28;
    if ( v28 != 1 )
      goto LABEL_57;
    goto LABEL_49;
  }
  if ( v17 )
    UNLOCK_HIVE_LOAD();
  TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return 3221225485LL;
}
