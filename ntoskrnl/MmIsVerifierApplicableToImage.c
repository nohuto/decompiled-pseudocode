/*
 * XREFs of MmIsVerifierApplicableToImage @ 0x140619C10
 * Callers:
 *     MiReapplyImportOptimizationWorker @ 0x14063EA90 (MiReapplyImportOptimizationWorker.c)
 *     VfDriverApplyDifVerification @ 0x140AC72D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140AC7498 (VfDriverEnableVerifier.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE4F80 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     KeIsNmiCallbackRegisteredForDriver @ 0x14056A100 (KeIsNmiCallbackRegisteredForDriver.c)
 */

__int64 __fastcall MmIsVerifierApplicableToImage(__int64 a1)
{
  if ( (MiFlags & 0x8000) != 0 )
    return 0LL;
  else
    return (unsigned int)KeIsNmiCallbackRegisteredForDriver(
                           *(_QWORD *)(a1 + 48),
                           *(_QWORD *)(a1 + 48) + *(unsigned int *)(a1 + 64)) != 0
         ? 0xC0000C0E
         : 0;
}
