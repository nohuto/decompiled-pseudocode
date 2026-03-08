/*
 * XREFs of FsRtlNotifySetCancelRoutine @ 0x1402417BC
 * Callers:
 *     FsRtlNotifyCompleteIrp @ 0x140704270 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140775CA0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x14084F730 (FsRtlNotifyFilterChangeDirectory.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlCancelNotify @ 0x1402F2B70 (FsRtlCancelNotify.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 */

char __fastcall FsRtlNotifySetCancelRoutine(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v6; // rbx
  KIRQL v7; // dl

  v3 = 0;
  *(_BYTE *)(a1 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( a2 )
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
    v7 = *(_BYTE *)(a1 + 69);
    *(_QWORD *)(a1 + 56) = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v7);
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
      return 1;
    }
  }
  else if ( *(_BYTE *)(a1 + 68) )
  {
    FsRtlCancelNotify(0LL, a1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)FsRtlCancelNotify);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  }
  return v3;
}
