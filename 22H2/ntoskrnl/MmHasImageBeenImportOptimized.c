/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x140773388
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054446C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1402F3618 (MiIsImportOptimizationEnabled.c)
 */

_BOOL8 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  return MiIsImportOptimizationEnabled() && (*(_DWORD *)(v0 + 104) & 0x80u) != 0;
}
