/*
 * XREFs of KeFreeInterrupt @ 0x14031F190
 * Callers:
 *     IoDisconnectInterrupt @ 0x14078E6E0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14078EC70 (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[18].Next[816], ListEntry);
}
