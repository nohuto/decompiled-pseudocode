/*
 * XREFs of MmGetSystemPageCounts @ 0x14033B27C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406BF5C0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140C4CD48;
}
