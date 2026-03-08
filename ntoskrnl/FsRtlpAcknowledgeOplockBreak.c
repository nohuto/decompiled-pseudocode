/*
 * XREFs of FsRtlpAcknowledgeOplockBreak @ 0x14053BB78
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1406B3240 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201B90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpClearOwner @ 0x14023AB1C (FsRtlpClearOwner.c)
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x1402ECCB4 (FsRtlpModifyThreadPriorities.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14053BDB0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1406B36C8 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreak(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  char v10; // r12
  int v11; // r15d
  int v12; // eax
  unsigned int v13; // eax
  int *v14; // rsi
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // r14d
  _QWORD *v20; // rcx

  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v10 = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) )
  {
    v11 = 16;
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(16LL, a5) )
    {
      v12 = *(_DWORD *)(a1 + 144);
      if ( (v12 & 0x100) != 0 )
      {
        v13 = v12 & 0xFFFFFEFF;
        *(_DWORD *)(a1 + 144) = v13;
        *(_DWORD *)(a1 + 144) = v13 | 0x400;
      }
    }
    v14 = (int *)(a1 + 144);
    if ( a4 && (*v14 & 0x100) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v15 = (_QWORD *)(a3 + 168);
      v16 = (_QWORD *)(a1 + 40);
      v17 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(v17 + 8) != a1 + 40 )
        __fastfail(3u);
      *v15 = v17;
      *(_QWORD *)(a3 + 176) = v16;
      *(_QWORD *)(v17 + 8) = v15;
      *v16 = v15;
      *(_QWORD *)(a3 + 56) = a1;
      v10 = 0;
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v18) = 1;
        FsRtlpCancelReadOnlyOplockIrp(a3, v18);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v11 = 16;
      }
      v19 = 259;
      goto LABEL_19;
    }
    if ( (*v14 & 0x300) != 0 )
    {
LABEL_18:
      v19 = 0;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
      v11 = 1;
LABEL_19:
      while ( 1 )
      {
        v20 = *(_QWORD **)(a1 + 88);
        if ( v20 == (_QWORD *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v20);
      }
      if ( v10 )
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      *v14 = v11 | *v14 & 0x20;
      goto LABEL_25;
    }
    if ( (*v14 & 0x400) != 0 )
    {
      *(_QWORD *)(a3 + 56) = 8LL;
      goto LABEL_18;
    }
  }
  v19 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_25:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v19;
}
