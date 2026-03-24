/*
 * XREFs of PopResetIdleTime @ 0x140283D78
 * Callers:
 *     PopSetSystemState @ 0x1403A5EC0 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1403A5F04 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1403A7C50 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x140679AA0 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14078CAA8 (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x140283DBC (PopTraceSystemIdleTimeReset.c)
 *     PopHandleSystemIdleReset @ 0x140577624 (PopHandleSystemIdleReset.c)
 */

__int64 PopResetIdleTime()
{
  KeGetCurrentIrql();
  if ( PopPlatformAoAc )
    return PopHandleSystemIdleReset();
  PopIsAboutToSleep = 0;
  dword_140C23368 = 0;
  byte_140C233B0 = 0;
  dword_140C233A0 = 0;
  return PopTraceSystemIdleTimeReset();
}
