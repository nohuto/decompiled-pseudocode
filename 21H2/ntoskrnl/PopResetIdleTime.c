/*
 * XREFs of PopResetIdleTime @ 0x14024EAF0
 * Callers:
 *     PopSetSystemState @ 0x1403A6010 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1403A6054 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1403A7DA0 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x14066D1E0 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14078CC68 (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x14024EB34 (PopTraceSystemIdleTimeReset.c)
 *     PopHandleSystemIdleReset @ 0x140577864 (PopHandleSystemIdleReset.c)
 */

__int64 PopResetIdleTime()
{
  KeGetCurrentIrql();
  if ( PopPlatformAoAc )
    return PopHandleSystemIdleReset();
  PopIsAboutToSleep = 0;
  dword_140C23968 = 0;
  byte_140C239B0 = 0;
  dword_140C239A0 = 0;
  return PopTraceSystemIdleTimeReset();
}
