/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1409F32A4
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F3B34 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140C31C98 != 0;
  return result;
}
