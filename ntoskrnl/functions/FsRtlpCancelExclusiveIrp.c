void __fastcall FsRtlpCancelExclusiveIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rcx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  if ( *(_QWORD *)v5 && *(_BYTE *)(*(_QWORD *)v5 + 68LL) )
  {
    FsRtlpModifyThreadPriorities(v5, 0LL, 0);
    FsRtlpClearOwner(v5, 0LL);
    *(_BYTE *)(v5 + 32) = 0;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 56LL) == v5 )
      *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v5 + 48LL) = -1073741536;
    IofCompleteRequest(*(PIRP *)v5, 1);
    *(_QWORD *)v5 = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 8), 0x746C6644u);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 144) = *(_DWORD *)(v5 + 144) & 0x20 | 1;
    if ( a3 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD **)(v5 + 88);
        if ( v6 == (_QWORD *)(v5 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v6);
      }
    }
  }
  if ( !a2 )
    ExReleaseFastMutex(*(PFAST_MUTEX *)(v5 + 152));
}
