/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x140399140
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x1402246C0 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x14081A3AC (PpmCheckReInit.c)
 */

void PpmCheckPausePpmEngineForSx()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140D07398 = 1;
  PpmCheckForceDisarm = 1;
  PpmCheckReInit();
  PpmReleaseLock(&PpmPerfPolicyLock);
}
