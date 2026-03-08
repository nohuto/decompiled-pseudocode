/*
 * XREFs of CmObliterateRMTxArray @ 0x140A19310
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BFA88 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     CmpCleanupTransactionState @ 0x14073526C (CmpCleanupTransactionState.c)
 */

_QWORD ***__fastcall CmObliterateRMTxArray(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  __int64 *v4; // rax
  __int64 *v5; // r8
  __int64 **v6; // rax
  __int64 **v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _QWORD ***result; // rax
  _QWORD **v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-8h]

  v12 = (__int64 *)&v11;
  v11 = &v11;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (__int64 *)CmpLazyCommitListHead;
  while ( v3 != &CmpLazyCommitListHead )
  {
    v4 = v3;
    v5 = v3;
    v3 = (__int64 *)*v3;
    if ( v4[4] == a1 )
    {
      if ( (__int64 *)v3[1] != v4
        || (v6 = (__int64 **)v4[1], *v6 != v5)
        || (*v6 = v3, v3[1] = (__int64)v6, v7 = (__int64 **)v12, (_QWORD ***)*v12 != &v11) )
      {
LABEL_13:
        __fastfail(3u);
      }
      v5[1] = (__int64)v12;
      *v5 = (__int64)&v11;
      *v7 = v5;
      v12 = v5;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  while ( 1 )
  {
    v8 = v11;
    if ( v11[1] != &v11 )
      goto LABEL_13;
    v9 = (__int64)*v11;
    if ( (_QWORD **)(*v11)[1] != v11 )
      goto LABEL_13;
    v11 = (_QWORD **)*v11;
    *(_QWORD *)(v9 + 8) = &v11;
    result = &v11;
    if ( v8 == &v11 )
      return result;
    CmpCleanupTransactionState(a1, v8 - 4, 8, 0);
  }
}
