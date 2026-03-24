/*
 * XREFs of PpmCheckReset @ 0x1403C22D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403C22F0 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1)
{
  PpmResetPerfTimes(a1 + 33128);
  return 0LL;
}
