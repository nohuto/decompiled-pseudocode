/*
 * XREFs of PpmHeteroHgsBackupInit @ 0x1403A6744
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403A6784 (PpmHeteroInitializeHgsSupport.c)
 *     PpmReinitializeHeteroEngine @ 0x140828C88 (PpmReinitializeHeteroEngine.c)
 */

void PpmHeteroHgsBackupInit()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( !PpmHeteroHgsEnabled )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( (int)PpmHeteroInitializeHgsSupport() >= 0 )
    {
      PopExecuteOnTargetProcessors((__int64)&PpmCheckRegistered, (__int64)PpmHeteroHgsBackupProcessorInit, 0LL, 0LL);
      LOBYTE(v0) = 1;
      LOBYTE(v1) = 1;
      PpmReinitializeHeteroEngine(v1, v0);
    }
    else
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
  }
}
