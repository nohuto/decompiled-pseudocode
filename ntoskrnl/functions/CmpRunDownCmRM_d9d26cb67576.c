void __fastcall CmpRunDownCmRM(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rdx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  struct _KTHREAD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // r8
  __int64 **v16; // rax
  __int64 **v17; // rax
  _QWORD **v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-8h]

  if ( a1 && !*(_DWORD *)(a1 + 64) )
  {
    v19 = (__int64 *)&v18;
    v18 = &v18;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v5 = (__int64 *)CmpLazyCommitListHead;
    while ( v5 != &CmpLazyCommitListHead )
    {
      v14 = v5;
      v15 = v5;
      v5 = (__int64 *)*v5;
      if ( v14[4] == a1 )
      {
        if ( (__int64 *)v5[1] != v14 )
          goto LABEL_26;
        v16 = (__int64 **)v14[1];
        if ( *v16 != v15 )
          goto LABEL_26;
        *v16 = v5;
        v5[1] = (__int64)v16;
        v17 = (__int64 **)v19;
        if ( (_QWORD ***)*v19 != &v18 )
          goto LABEL_26;
        v15[1] = (__int64)v19;
        *v15 = (__int64)&v18;
        *v17 = v15;
        v19 = v15;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    while ( 1 )
    {
      v6 = v18;
      if ( v18[1] != &v18 )
        goto LABEL_26;
      v7 = (__int64)*v18;
      if ( (_QWORD **)(*v18)[1] != v18 )
        goto LABEL_26;
      v18 = (_QWORD **)*v18;
      *(_QWORD *)(v7 + 8) = &v18;
      if ( v6 == &v18 )
        break;
      CmpCleanupTransactionState(a1, v6 - 4, 4, 0);
    }
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpRmListLock);
    *(_DWORD *)(a1 + 104) |= 8u;
    v9 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v10 = *(_QWORD **)(a1 + 8), *v10 != a1) )
LABEL_26:
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      *(_QWORD *)(v11 + 4152) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    ExReleaseFastMutexUnsafe(&CmpRmListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v12 = *(void **)(a1 + 56);
    if ( v12 )
    {
      ObDereferenceObjectDeferDelete(v12);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v13 = *(void **)(a1 + 40);
    if ( v13 )
    {
      ObDereferenceObjectDeferDelete(v13);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
