/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x1405A6B50
 * Callers:
 *     EtwpEventWriteFull @ 0x14025D7C0 (EtwpEventWriteFull.c)
 *     EtwpTraceStackWalk @ 0x1405A7074 (EtwpTraceStackWalk.c)
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
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
