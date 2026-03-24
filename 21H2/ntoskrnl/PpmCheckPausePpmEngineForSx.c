/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14038DD2C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14022AB00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1402D2004 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmCheckReInit @ 0x1407BA7E4 (PpmCheckReInit.c)
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
