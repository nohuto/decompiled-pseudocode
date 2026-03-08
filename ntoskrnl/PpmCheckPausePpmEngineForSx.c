/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x140593EFC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x1402D1A88 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
 */

void PpmCheckPausePpmEngineForSx()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140D1F5F8 = 1;
  PpmCheckForceDisarm = 1;
  PpmCheckReInit();
  PpmReleaseLock(&PpmPerfPolicyLock);
}
