/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1409F0414
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F0CA4 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140C31878 != 0;
  return result;
}
