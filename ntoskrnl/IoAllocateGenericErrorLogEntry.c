/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140554348
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x1409422E4 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140955B40 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140A2D5B4 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140A40210 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1403C11FC (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
