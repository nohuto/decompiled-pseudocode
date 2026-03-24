/*
 * XREFs of ExfReleasePushLock @ 0x140271AC0
 * Callers:
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407733E0 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x14091B9F0 (PdcTaskClientRequest.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14095714C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14095782C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1409580B4 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140271BA0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive();
}
