/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x1406518B8
 * Callers:
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140C67F60.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_140C67F60, ListEntry);
}
