/*
 * XREFs of PpmCheckProcessorInit @ 0x1403CEE00
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403C2720 (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x1403CEE2C (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1, __int64 a2)
{
  PpmResetPerfTimes(a1 + 33128, a2);
  PpmHeteroHgsProcessorInit(a1);
  return 0LL;
}
