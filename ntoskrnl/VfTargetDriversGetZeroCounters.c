/*
 * XREFs of VfTargetDriversGetZeroCounters @ 0x140AC8578
 * Callers:
 *     VfSuspectDriversGetVerifierInformation @ 0x140AD744C (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfTargetDriversGetZeroCounters(_QWORD *a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  if ( a2 )
  {
    a1[18] = 0LL;
    a1[19] = 0LL;
    a1[20] = 0LL;
    a1[21] = 0LL;
    a1[22] = 0LL;
    a1[23] = 0LL;
    a1[24] = 0LL;
    a1[25] = 0LL;
    a1[26] = 0LL;
    a1[27] = 0LL;
    a1[28] = 0LL;
    a1[29] = 0LL;
    a1[30] = 0LL;
    a1[31] = 0LL;
    a1[32] = 0LL;
    a1[33] = 0LL;
  }
  return result;
}
