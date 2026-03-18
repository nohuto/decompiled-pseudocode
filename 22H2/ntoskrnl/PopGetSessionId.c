/*
 * XREFs of PopGetSessionId @ 0x140822B4C
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403838F0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14036F3B0 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
