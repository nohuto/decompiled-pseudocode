/*
 * XREFs of MmIsVerifierApplicableToImage @ 0x14061C0BC
 * Callers:
 *     MiReapplyImportOptimizationWorker @ 0x140640EF0 (MiReapplyImportOptimizationWorker.c)
 *     VfDriverApplyDifVerification @ 0x140ACB2D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACB498 (VfDriverEnableVerifier.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE8F80 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     KeIsNmiCallbackRegisteredForDriver @ 0x14056C5A0 (KeIsNmiCallbackRegisteredForDriver.c)
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
