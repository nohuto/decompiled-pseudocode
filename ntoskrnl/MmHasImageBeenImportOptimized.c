/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x1407F72B8
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE4F80 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x140369044 (MiIsImportOptimizationEnabled.c)
 */

__int64 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  if ( MiIsImportOptimizationEnabled() )
    return (*(_DWORD *)(v0 + 104) >> 7) & 1;
  else
    return 0LL;
}
