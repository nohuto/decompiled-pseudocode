/*
 * XREFs of PpmEndProfileAccumulation @ 0x14099D79C
 * Callers:
 *     PpmEventTraceProfiles @ 0x140855034 (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x14099D500 (PpmApplyProfile.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[1073];
  a1[1077] += v2;
  if ( a1[1075] < v2 )
    a1[1075] = v2;
  if ( a1[1076] > v2 )
    a1[1076] = v2;
  ++a1[1074];
  a1[1073] = 0LL;
}
