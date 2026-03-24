/*
 * XREFs of FsRtlUninitializeOplock @ 0x140306650
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockDequeueRH @ 0x1402D7250 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140375A58 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403798E4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0208 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  char *v5; // rbx
  _QWORD *v6; // rcx
  char *v7; // rax
  char *v8; // rbx
  PVOID *v9; // rbx
  PFAST_MUTEX v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi
  char *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r10
  __int64 v20; // rcx
  _QWORD *v21; // rax
  void *v22; // rcx
  void *v23; // rcx

  v1 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    while ( 1 )
    {
      v4 = v1 + 88;
      v5 = (char *)*((_QWORD *)v1 + 11);
      if ( v5 == v1 + 88 )
        break;
      v13 = *(_QWORD **)v5;
      if ( *((_QWORD **)v5 + 1) != v4 || (char *)v13[1] != v5 )
LABEL_30:
        __fastfail(3u);
      *v4 = v13;
      v13[1] = v4;
      v14 = (_QWORD *)*((_QWORD *)v5 + 2);
      if ( v14 )
      {
        *((_BYTE *)v14 + 69) = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64(v14 + 13, 0LL);
        KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v14 + 69));
        v14[7] = 0LL;
        v14 = (_QWORD *)*((_QWORD *)v5 + 2);
      }
      (*((void (__fastcall **)(_QWORD, _QWORD *))v5 + 3))(*((_QWORD *)v5 + 4), v14);
      ExFreePoolWithTag(v5, 0);
    }
    while ( 1 )
    {
      v6 = v1 + 40;
      v7 = (char *)*((_QWORD *)v1 + 5);
      if ( v7 == v1 + 40 )
        break;
      v15 = v7 - 168;
      v16 = *((_QWORD *)v7 + 2);
      v17 = *(_QWORD *)v7;
      if ( *((_QWORD **)v7 + 1) != v6 || *(char **)(v17 + 8) != v7 )
        goto LABEL_30;
      *v6 = v17;
      *(_QWORD *)(v17 + 8) = v6;
      v15[69] = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)v15 + 13, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v15[69]);
      ObfDereferenceObjectWithTag(*(PVOID *)(v16 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v16 + 24) == 590400 )
      {
        v18 = *((_QWORD *)v15 + 3);
        *(_OWORD *)v18 = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_DWORD *)v18 = 1572865;
        *(_DWORD *)(v18 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *((_QWORD *)v15 + 7) = 24LL;
      }
      else
      {
        *((_QWORD *)v15 + 7) = 8LL;
      }
      *((_DWORD *)v15 + 12) = 0;
      IofCompleteRequest((PIRP)v15, 1);
    }
    while ( 1 )
    {
      v8 = (char *)*((_QWORD *)v1 + 7);
      if ( v8 == v1 + 56 )
        break;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && *((_QWORD *)v8 + 7) )
      {
        FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 7), v2, v3);
        v20 = *v19;
        v21 = (_QWORD *)v19[1];
        if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v21 != v19 )
          goto LABEL_30;
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( *((_QWORD *)v8 + 5) )
          FsRtlpClearOwner(v1, v8);
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        FsRtlpRemoveAndCompleteRHIrp(v8, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v9 = (PVOID *)*((_QWORD *)v1 + 9);
      if ( v9 == (PVOID *)(v1 + 72) )
        break;
      FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 9), v2, v3);
      FsRtlpModifyThreadPriorities(v1, v9, 0LL);
      ObfDereferenceObjectWithTag(v9[3], 0x746C6644u);
      FsRtlpClearOwner(v1, v9);
      ExFreePoolWithTag(v9, 0);
    }
    v10 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v11 = *(_QWORD *)&v10[3].Contention;
      BYTE5(v10[1].Owner) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v10[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v10[1].Owner));
      if ( *(_DWORD *)(v11 + 24) == 590400 )
      {
        v12 = *(_QWORD *)&v10->Event.Header.Lock;
        *(_OWORD *)v12 = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_DWORD *)v12 = 1572865;
        *(_DWORD *)(v12 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)&v10[1].Count = 24LL;
      }
      else
      {
        *(_QWORD *)&v10[1].Count = 8LL;
      }
      v10->OldIrql = 0;
      IofCompleteRequest((PIRP)v10, 1);
      *(_QWORD *)v1 = 0LL;
      v22 = (void *)*((_QWORD *)v1 + 1);
      if ( v22 )
        ObfDereferenceObjectWithTag(v22, 0x746C6644u);
      FsRtlpModifyThreadPriorities(v1, 0LL, 0LL);
      FsRtlpClearOwner(v1, 0LL);
    }
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v23 = (void *)*((_QWORD *)v1 + 17);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}
