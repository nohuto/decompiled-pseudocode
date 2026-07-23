/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x14038DDEC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x1402503D4 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
 */

LONG PpmCheckResumePpmEngineFromSx()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( PpmHeteroHgsEnabled )
  {
    __writemsr(0x17D0u, (*(_QWORD *)(PpmHeteroHgsTableMdl + 48) << 12) | 1LL);
    v1 = 6097LL;
    v0 = 0LL;
    __writemsr(0x17D1u, 1uLL);
  }
  PpmCheckForceDisarm = 0;
  PpmCheckReInit(v1, v0);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140CFCDC8 = 0;
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
