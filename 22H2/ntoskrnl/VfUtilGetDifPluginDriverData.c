/*
 * XREFs of VfUtilGetDifPluginDriverData @ 0x1405A06A0
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D6E50 (VfTargetDriversGetVerifierData.c)
 */

__int64 VfUtilGetDifPluginDriverData()
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData();
  if ( result )
    return *(_QWORD *)(result + 96);
  return result;
}
