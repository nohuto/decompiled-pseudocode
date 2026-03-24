/*
 * XREFs of PopGetSessionId @ 0x14067D590
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403AE4C0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402830D0 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
