/*
 * XREFs of PpmEndProfileAccumulation @ 0x1408F5ECC
 * Callers:
 *     PpmEventTraceProfiles @ 0x1407C5E94 (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x1408F5C5C (PpmApplyProfile.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[689];
  a1[693] += v2;
  if ( a1[691] < v2 )
    a1[691] = v2;
  if ( a1[692] > v2 )
    a1[692] = v2;
  ++a1[690];
  a1[689] = 0LL;
}
