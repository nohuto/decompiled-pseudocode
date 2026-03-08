/*
 * XREFs of PpmEndProfileAccumulation @ 0x14099A27C
 * Callers:
 *     PpmEventTraceProfiles @ 0x140848900 (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x14099A040 (PpmApplyProfile.c)
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
