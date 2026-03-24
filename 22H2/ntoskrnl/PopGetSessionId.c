/*
 * XREFs of PopGetSessionId @ 0x1406857BC
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403A92E0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140315400 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
