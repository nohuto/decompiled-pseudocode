/*
 * XREFs of PopGetSessionId @ 0x14081016C
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x140380CA0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
