/*
 * XREFs of PpmCheckReset @ 0x1403B4C70
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403B4C90 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1)
{
  PpmResetPerfTimes(a1 + 33968);
  return 0LL;
}
