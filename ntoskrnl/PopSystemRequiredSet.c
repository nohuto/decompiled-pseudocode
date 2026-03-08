/*
 * XREFs of PopSystemRequiredSet @ 0x1403AF6CC
 * Callers:
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x1403AF6E8 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3LL);
}
