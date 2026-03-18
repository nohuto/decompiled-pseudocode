/*
 * XREFs of PpmEndProfileAccumulation @ 0x14099D30C
 * Callers:
 *     PpmEventTraceProfiles @ 0x14084AF70 (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x14099D0D0 (PpmApplyProfile.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[115];
  a1[119] += v2;
  if ( a1[117] < v2 )
    a1[117] = v2;
  if ( a1[118] > v2 )
    a1[118] = v2;
  ++a1[116];
  a1[115] = 0LL;
}
