/*
 * XREFs of VfUtilGetSigningLevel @ 0x1409C67B0
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D6E50 (VfTargetDriversGetVerifierData.c)
 */

char VfUtilGetSigningLevel()
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData();
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
