/*
 * XREFs of EtwpReleaseStackLookasideListEntry @ 0x1405FD964
 * Callers:
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpReleaseStackLookasideListEntry(__int64 a1)
{
  return RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)(a1 - 16));
}
