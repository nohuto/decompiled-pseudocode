/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x140399068
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x1402246C0 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x14081A3AC (PpmCheckReInit.c)
 */

void PpmCheckResumePpmEngineFromSx()
{
  unsigned int v0; // r8d

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( PpmHeteroHgsEnabled )
  {
    v0 = 1;
    __writemsr(0x17D0u, (*(_QWORD *)(PpmHeteroHgsTableMdl + 48) << 12) | 1LL);
    if ( PpmHeteroHgsThreadEnabled )
      v0 = 3;
    __writemsr(0x17D1u, v0);
  }
  PpmCheckForceDisarm = 0;
  PpmCheckReInit();
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140D07398 = 0;
  PpmReleaseLock(&PpmPerfPolicyLock);
}
