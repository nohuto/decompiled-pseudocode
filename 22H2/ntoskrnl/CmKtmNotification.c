/*
 * XREFs of CmKtmNotification @ 0x14066E410
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     CmpIsCmRm @ 0x14066E974 (CmpIsCmRm.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406EB3B0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406EB544 (LOCK_HIVE_LOAD.c)
 *     CmpQueryNameString @ 0x14070D9E0 (CmpQueryNameString.c)
 *     CmLogTmRmAction @ 0x1407630E8 (CmLogTmRmAction.c)
 *     CmpAccountForLogReservation @ 0x140766850 (CmpAccountForLogReservation.c)
 *     CmpTransMgrPrepare @ 0x140768324 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407684C0 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140770144 (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x140770D50 (CmpTransMgrRollback.c)
 *     CmpRecoverEnlistment @ 0x140874EDC (CmpRecoverEnlistment.c)
 */

NTSTATUS __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        _DWORD *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        PVOID Argument)
{
  char v7; // r15
  char v9; // r12
  __int64 v12; // rdx
  NTSTATUS result; // eax
  int v14; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v16; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  PVOID v25; // rcx
  char v26; // r13
  int v27; // eax
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v30; // [rsp+40h] [rbp-61h] BYREF
  char v31; // [rsp+41h] [rbp-60h]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v33; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-4Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-39h]
  __int128 v37; // [rsp+70h] [rbp-31h] BYREF
  _OWORD v38[2]; // [rsp+80h] [rbp-21h] BYREF

  v7 = 0;
  Key = 0LL;
  Handle = 0LL;
  v30 = 0;
  v33 = 0;
  v31 = 1;
  v37 = 0LL;
  v9 = 0;
  UnicodeString = 0LL;
  memset(v38, 0, sizeof(v38));
  if ( !(unsigned __int8)CmpIsCmRm(RMContext, RMContext, TransactionContext) )
    return -1073741811;
  if ( (RMContext[26] & 8) != 0 )
    return 0;
  if ( TransactionNotification == 256 )
    return CmpRecoverEnlistment(RMContext, v12, Argument);
  if ( (TransactionNotification & 0xE) == 0 )
    return 0;
  result = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  v14 = result;
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v16 = *((_DWORD *)Key + 12);
    if ( (v16 & 8) != 0 )
    {
      if ( TransactionNotification != 2 )
      {
        if ( TransactionNotification == 4 )
        {
          *((_DWORD *)Key + 12) = v16 | 4;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          TmCommitComplete(EnlistmentObject, 0LL);
        }
        else if ( TransactionNotification == 8 )
        {
          *((_DWORD *)Key + 12) = v16 | 2;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return TmRollbackComplete(EnlistmentObject, 0LL);
        }
        return v14;
      }
      *((_DWORD *)Key + 12) = v16 | 1;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return TmPrepareComplete(EnlistmentObject, 0LL);
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = qword_140C01170;
    if ( CmRmSystem != RMContext )
      v20 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v20 + 1536), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v38, 0x20000LL, v19, v21);
      v37 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
      v7 = 1;
    else
      LOCK_HIVE_LOAD(v20);
    if ( !(unsigned __int8)CmpIsCmRm(RMContext, v18, v19) )
    {
      if ( !v7 )
        UNLOCK_HIVE_LOAD();
      TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
      if ( UnicodeString.Buffer )
        RtlFreeAnsiString(&UnicodeString);
      return -1073741811;
    }
    switch ( TransactionNotification )
    {
      case 2u:
        v24 = CmpTransMgrPrepare(RMContext, Key, &v33, &v30);
        break;
      case 4u:
        v24 = CmpTransMgrCommit(v23, Key, &v33);
        break;
      case 8u:
        v24 = CmpTransMgrRollback(Key, &v33);
        break;
      default:
        v14 = -1073741811;
LABEL_39:
        v34 = v14;
        if ( v14 >= 0 || TransactionNotification == 4 )
        {
          v25 = Key;
          if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
          {
            v31 = 0;
          }
          else
          {
            v27 = CmLogTmRmAction((_DWORD)RMContext);
            v25 = Key;
            v14 = v27;
            if ( TransactionNotification != 2 )
              v14 = 0;
          }
          v26 = 1;
          if ( TransactionNotification == 4 )
          {
LABEL_50:
            if ( *((_QWORD *)v25 + 9) )
              Handle = (HANDLE)*((_QWORD *)v25 + 10);
            if ( (*((_DWORD *)v25 + 12) & 0x20) != 0 )
            {
              if ( (int)CmpAccountForLogReservation(RMContext, v22, 0LL) >= 0 )
                *((_DWORD *)Key + 12) &= ~0x20u;
              v25 = Key;
            }
            if ( v14 >= 0 || TransactionNotification != 4 )
            {
              v14 = CmpTransMgrRollback(v25, &v33);
              CmpCleanupTransactionState(RMContext, Key, TransactionNotification);
            }
LABEL_59:
            TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
            if ( !v7 )
              UNLOCK_HIVE_LOAD();
            if ( v26 == 1 )
            {
              switch ( TransactionNotification )
              {
                case 2u:
                  if ( v30 == 1 )
                    OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
                  else
                    OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
                  break;
                case 4u:
                  TmCommitComplete(EnlistmentObject, 0LL);
                  goto LABEL_71;
                case 8u:
                  OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
                  break;
                default:
                  goto LABEL_71;
              }
              v14 = OnlyEnlistment;
            }
LABEL_71:
            if ( Handle )
              ZwClose(Handle);
            switch ( TransactionNotification )
            {
              case 2u:
                v9 = 31;
                break;
              case 4u:
                v9 = 30;
                break;
              case 8u:
                v9 = 32;
                break;
            }
            if ( CmpTraceTxrRoutine && v9 )
            {
              if ( !UnicodeString.Buffer )
                return v14;
              p_UnicodeString = &UnicodeString;
              LOBYTE(p_UnicodeString) = v9;
              CmpTraceTxrRoutine(p_UnicodeString, v38, &v37, v34, v33, &UnicodeString);
            }
            if ( UnicodeString.Buffer )
              RtlFreeAnsiString(&UnicodeString);
            return v14;
          }
        }
        else
        {
          v25 = Key;
          v26 = 0;
        }
        if ( TransactionNotification != 8 && v30 != 1 )
          goto LABEL_59;
        goto LABEL_50;
    }
    v14 = v24;
    goto LABEL_39;
  }
  return result;
}
