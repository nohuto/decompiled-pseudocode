/*
 * XREFs of VfUtilGetDifPluginDriverData @ 0x1405A0990
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D7E40 (VfTargetDriversGetVerifierData.c)
 */

__int64 VfUtilGetDifPluginDriverData()
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData();
  if ( result )
    return *(_QWORD *)(result + 96);
  return result;
}
