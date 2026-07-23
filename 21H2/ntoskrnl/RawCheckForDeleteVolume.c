/*
 * XREFs of RawCheckForDeleteVolume @ 0x140395394
 * Callers:
 *     RawScanDeletedList @ 0x1406CA050 (RawScanDeletedList.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     RawDeleteVcb @ 0x1406C98D8 (RawDeleteVcb.c)
 *     RawCleanupVcb @ 0x1406CA0E4 (RawCleanupVcb.c)
 */

char __fastcall RawCheckForDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  char v1; // di
  KIRQL v3; // dl
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v1 = 0;
  if ( !LODWORD(AdvancedHeader[1].Resource) )
  {
    v3 = KeAcquireQueuedSpinLock(9uLL);
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
    {
      KeReleaseQueuedSpinLock(9uLL, v3);
    }
    else
    {
      KeReleaseQueuedSpinLock(9uLL, v3);
      Flink = AdvancedHeader[1].FilterContexts.Flink;
      if ( Flink->Blink != &AdvancedHeader[1].FilterContexts
        || (Blink = AdvancedHeader[1].FilterContexts.Blink, Blink->Flink != &AdvancedHeader[1].FilterContexts) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
      RawCleanupVcb(AdvancedHeader);
      RawDeleteVcb(AdvancedHeader);
      return 1;
    }
  }
  return v1;
}
