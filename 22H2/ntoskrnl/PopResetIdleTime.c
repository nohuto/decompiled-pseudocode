/*
 * XREFs of PopResetIdleTime @ 0x140329C20
 * Callers:
 *     PopSetSystemState @ 0x1403A57C0 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1403A5804 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1403A7550 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1406F2890 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14078C9A8 (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x140329C64 (PopTraceSystemIdleTimeReset.c)
 *     PopHandleSystemIdleReset @ 0x140577564 (PopHandleSystemIdleReset.c)
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
