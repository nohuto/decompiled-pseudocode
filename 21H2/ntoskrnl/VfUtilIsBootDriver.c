/*
 * XREFs of VfUtilIsBootDriver @ 0x1409C77C0
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D7E40 (VfTargetDriversGetVerifierData.c)
 */

__int64 VfUtilIsBootDriver()
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData();
  if ( result )
    return (*(_DWORD *)(result + 32) >> 1) & 1;
  return result;
}
