/*
 * XREFs of VfUtilGetDriverName @ 0x1409C7770
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D7E40 (VfTargetDriversGetVerifierData.c)
 */

__int64 VfUtilGetDriverName()
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData();
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 32LL);
  return result;
}
