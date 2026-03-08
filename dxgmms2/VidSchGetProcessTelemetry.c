/*
 * XREFs of VidSchGetProcessTelemetry @ 0x1C00B4C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetProcessTelemetry(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = a2[172];
  a3[1] = a2[173];
  a3[2] = a2[174];
  a3[3] = a2[175];
  return result;
}
