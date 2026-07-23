/*
 * XREFs of PopGetSessionId @ 0x1406001C4
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403AE610 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14023A7B0 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
