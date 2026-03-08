/*
 * XREFs of RawCheckForDeleteVolume @ 0x1405A479C
 * Callers:
 *     RawScanDeletedList @ 0x1406F3E5C (RawScanDeletedList.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     RawDeleteVcb @ 0x1406F3E2C (RawDeleteVcb.c)
 *     RawCleanupVcb @ 0x1406F3EA0 (RawCleanupVcb.c)
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
      ExReleaseFastMutex((PFAST_MUTEX)&AdvancedHeader[2].Resource);
      RawCleanupVcb(AdvancedHeader);
      RawDeleteVcb(AdvancedHeader);
      return 1;
    }
  }
  return v1;
}
