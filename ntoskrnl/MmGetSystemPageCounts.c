/*
 * XREFs of MmGetSystemPageCounts @ 0x140299844
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14071F960 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140C655D0;
}
