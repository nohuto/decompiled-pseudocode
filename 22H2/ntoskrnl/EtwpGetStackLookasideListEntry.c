/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x140468360
 * Callers:
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     EtwpTraceStackWalk @ 0x14046896C (EtwpTraceStackWalk.c)
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY EtwpGetStackLookasideListEntry()
{
  PSLIST_ENTRY v0; // rax

  v0 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
  if ( v0 )
    return v0 + 1;
  else
    return 0LL;
}
