/*
 * XREFs of PopSystemRequiredSet @ 0x1403A7550
 * Callers:
 *     NtSetThreadExecutionState @ 0x1406F8710 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x140329C20 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime();
}
