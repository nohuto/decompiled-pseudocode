/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x14094701C
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x140947834 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140C198B8 != 0;
  return result;
}
