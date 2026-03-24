/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14038D62C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14022A470 (PpmReleaseLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14032B284 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x1407BAFA4 (PpmCheckReInit.c)
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
