/*
 * XREFs of KeFreeInterrupt @ 0x14028E364
 * Callers:
 *     IoDisconnectInterrupt @ 0x1406F41C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[18].Next[816], ListEntry);
}
