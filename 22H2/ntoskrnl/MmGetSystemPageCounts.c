/*
 * XREFs of MmGetSystemPageCounts @ 0x14021E574
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F04 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140C65A50;
}
