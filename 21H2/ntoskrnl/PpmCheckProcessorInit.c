/*
 * XREFs of PpmCheckProcessorInit @ 0x1403C1E30
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403B4C90 (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x1403C1E60 (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1 + 33968);
  PpmHeteroHgsProcessorInit(a1, 0LL);
  return 0LL;
}
