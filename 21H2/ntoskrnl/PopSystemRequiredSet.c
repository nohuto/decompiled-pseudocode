/*
 * XREFs of PopSystemRequiredSet @ 0x1403A7C50
 * Callers:
 *     NtSetThreadExecutionState @ 0x14067D5F0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x140283D78 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime();
}
