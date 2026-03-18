/*
 * XREFs of PopSystemRequiredSet @ 0x1403B43BC
 * Callers:
 *     NtSetThreadExecutionState @ 0x1407A92D0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x1403B43D8 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3LL);
}
