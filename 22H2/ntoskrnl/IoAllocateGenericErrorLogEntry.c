/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1405567E8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x1409452FC (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140958B60 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140A302F4 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140A42EF0 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1403C6ABC (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
