/*
 * XREFs of VfUtilIsProtectedDriver @ 0x140AC37CC
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140ACB2D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACB498 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACB618 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14020EBD8 (MiIsImportOptimizationEnabled.c)
 *     KeIsImageIATProtected @ 0x14056C58C (KeIsImageIATProtected.c)
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
