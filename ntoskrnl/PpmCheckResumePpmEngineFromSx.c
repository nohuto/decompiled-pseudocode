/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x140593F40
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x1402D1A88 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
 */

void PpmCheckResumePpmEngineFromSx()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // r8d

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( PpmHeteroHgsEnabled )
  {
    v2 = 1;
    __writemsr(0x17D0u, (*(_QWORD *)(PpmHeteroHgsTableMdl + 48) << 12) | 1LL);
    v1 = 6097LL;
    if ( PpmHeteroHgsThreadEnabled )
      v2 = 3;
    v0 = 0LL;
    __writemsr(0x17D1u, v2);
  }
  PpmCheckForceDisarm = 0;
  PpmCheckReInit(v1, v0);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140D1F5F8 = 0;
  PpmReleaseLock(&PpmPerfPolicyLock);
}
