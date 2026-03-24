/*
 * XREFs of VfUtilGetSigningLevel @ 0x1409C67A0
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D6E40 (VfTargetDriversGetVerifierData.c)
 */

char VfUtilGetSigningLevel()
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData();
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
