/*
 * XREFs of PopSystemRequiredSet @ 0x1403A7DA0
 * Callers:
 *     NtSetThreadExecutionState @ 0x1406713E0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x14024EAF0 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime();
}
