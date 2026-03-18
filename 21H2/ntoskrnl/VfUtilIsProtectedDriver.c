/*
 * XREFs of VfUtilIsProtectedDriver @ 0x140A81E5C
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140A898F0 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140A89AB0 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140A89C30 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14029C6DC (MiIsImportOptimizationEnabled.c)
 *     KeIsImageIATProtected @ 0x14056A188 (KeIsImageIATProtected.c)
 */

__int64 VfUtilIsProtectedDriver()
{
  bool IsImportOptimizationEnabled; // al
  __int64 v1; // rcx
  unsigned int v2; // edx

  IsImportOptimizationEnabled = MiIsImportOptimizationEnabled();
  v2 = 0;
  if ( IsImportOptimizationEnabled )
    LOBYTE(v2) = (*(_WORD *)(v1 + 110) & 0x180) != 0;
  else
    return (unsigned int)KeIsImageIATProtected(v1);
  return v2;
}
