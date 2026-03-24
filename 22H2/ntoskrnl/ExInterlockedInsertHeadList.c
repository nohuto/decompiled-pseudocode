/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1402F8650
 * Callers:
 *     CcCanIWrite @ 0x140293850 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1404E9F80 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1409CD5D4 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1409CEE9C (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x1409CF6A0 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409CF73C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x1402F8744 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x1402F8814 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rbx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Flink = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = Flink;
  LOBYTE(v7) = v6;
  ListEntry->Blink = ListHead;
  Flink->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  ExpReleaseSpinLockDisabled(Lock, v7);
  if ( Flink == ListHead )
    return 0LL;
  return Flink;
}
