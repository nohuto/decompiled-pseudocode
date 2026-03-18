/*
 * XREFs of PopGetSessionId @ 0x14082926C
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403C10B0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
