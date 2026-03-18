/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x140596418
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x14032AF34 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x14082E63C (PpmCheckReInit.c)
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
