/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x14069707C
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE8F80 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14020EBD8 (MiIsImportOptimizationEnabled.c)
 */

__int64 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  if ( MiIsImportOptimizationEnabled() )
    return (*(_DWORD *)(v0 + 104) >> 7) & 1;
  else
    return 0LL;
}
