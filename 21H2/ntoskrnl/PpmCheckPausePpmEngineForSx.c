/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14038DE7C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x1402503D4 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
 */

LONG PpmCheckPausePpmEngineForSx()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140CFCDC8 = 1;
  PpmCheckForceDisarm = 1;
  PpmCheckReInit(v1, v0);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
