/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140505508
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140891B7C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x1408A1F4C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1408C7DF0 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1408D7330 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14037FD9C (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
