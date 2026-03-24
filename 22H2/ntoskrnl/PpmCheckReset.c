/*
 * XREFs of PpmCheckReset @ 0x1403C1F30
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403C1F50 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1)
{
  PpmResetPerfTimes(a1 + 33128);
  return 0LL;
}
