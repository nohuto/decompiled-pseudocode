/*
 * XREFs of PpmCheckReset @ 0x1403C2700
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403C2720 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1)
{
  PpmResetPerfTimes(a1 + 33128);
  return 0LL;
}
