/*
 * XREFs of FsRtlUninitializeOplock @ 0x1402E06C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpClearOwner @ 0x14023AB1C (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x14023AB60 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x14023EA10 (FsRtlpOplockDequeueRH.c)
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x1402ECCB4 (FsRtlpModifyThreadPriorities.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rdi
  _QWORD *v2; // rax
  char *v3; // rbx
  _QWORD *v4; // rcx
  char *v5; // rax
  char *v6; // rbx
  PVOID *v7; // rbx
  PFAST_MUTEX v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  void *v11; // rcx
  _QWORD *v12; // r11
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rsi
  void *v21; // rcx

  v1 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    while ( 1 )
    {
      v2 = v1 + 88;
      v3 = (char *)*((_QWORD *)v1 + 11);
      if ( v3 == v1 + 88 )
        break;
      v19 = *(_QWORD **)v3;
      if ( *((_QWORD **)v3 + 1) != v2 || (char *)v19[1] != v3 )
LABEL_36:
        __fastfail(3u);
      *v2 = v19;
      v19[1] = v2;
      v20 = (_QWORD *)*((_QWORD *)v3 + 2);
      if ( v20 )
      {
        *((_BYTE *)v20 + 69) = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64(v20 + 13, 0LL);
        KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v20 + 69));
        v20[7] = 0LL;
      }
      (*((void (__fastcall **)(_QWORD, _QWORD))v3 + 3))(*((_QWORD *)v3 + 4), *((_QWORD *)v3 + 2));
      ExFreePoolWithTag(v3, 0);
    }
    while ( 1 )
    {
      v4 = v1 + 40;
      v5 = (char *)*((_QWORD *)v1 + 5);
      if ( v5 == v1 + 40 )
        break;
      v15 = v5 - 168;
      v16 = *((_QWORD *)v5 + 2);
      v17 = *(_QWORD *)v5;
      if ( *((_QWORD **)v5 + 1) != v4 || *(char **)(v17 + 8) != v5 )
        goto LABEL_36;
      *v4 = v17;
      *(_QWORD *)(v17 + 8) = v4;
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
      v6 = (char *)*((_QWORD *)v1 + 7);
      if ( v6 == v1 + 56 )
        break;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && *((_QWORD *)v6 + 7) )
      {
        FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 7));
        v13 = *v12;
        v14 = (_QWORD *)v12[1];
        if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v14 != v12 )
          goto LABEL_36;
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( *((_QWORD *)v6 + 5) )
          FsRtlpClearOwner((__int64)v1, (__int64)v6);
        ExFreePoolWithTag(v6, 0);
      }
      else
      {
        FsRtlpRemoveAndCompleteRHIrp((__int64)v6, (__int64)v1, 0, 0, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v7 = (PVOID *)*((_QWORD *)v1 + 9);
      if ( v7 == (PVOID *)(v1 + 72) )
        break;
      FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 9));
      FsRtlpModifyThreadPriorities(v1, v7, 0LL);
      ObfDereferenceObjectWithTag(v7[3], 0x746C6644u);
      FsRtlpClearOwner((__int64)v1, (__int64)v7);
      ExFreePoolWithTag(v7, 0);
    }
    v8 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v9 = *(_QWORD *)&v8[3].Contention;
      BYTE5(v8[1].Owner) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v8[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v8[1].Owner));
      if ( *(_DWORD *)(v9 + 24) == 590400 )
      {
        v10 = *(_QWORD *)&v8->Event.Header.Lock;
        *(_OWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)v10 = 1572865;
        *(_DWORD *)(v10 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)&v8[1].Count = 24LL;
      }
      else
      {
        *(_QWORD *)&v8[1].Count = 8LL;
      }
      v8->OldIrql = 0;
      IofCompleteRequest((PIRP)v8, 1);
      *(_QWORD *)v1 = 0LL;
      v11 = (void *)*((_QWORD *)v1 + 1);
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      FsRtlpModifyThreadPriorities(v1, 0LL, 0LL);
      FsRtlpClearOwner((__int64)v1, 0LL);
    }
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v21 = (void *)*((_QWORD *)v1 + 17);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}
