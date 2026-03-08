/*
 * XREFs of VfUtilGetSigningLevel @ 0x140ABF6E0
 * Callers:
 *     VfUtilIsSignedDriver @ 0x1405CBF18 (VfUtilIsSignedDriver.c)
 *     CarReportRuleViolationForTriage @ 0x1405D1FA0 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140AC8528 (VfTargetDriversGetVerifierData.c)
 */

char __fastcall VfUtilGetSigningLevel(__int64 a1)
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
