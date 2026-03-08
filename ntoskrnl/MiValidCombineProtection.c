/*
 * XREFs of MiValidCombineProtection @ 0x140229F1C
 * Callers:
 *     MiProcessCrcList @ 0x1406A8670 (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiValidCombineProtection(unsigned int a1)
{
  return a1 != 31 && a1 != 24 && (a1 & 0xFFFFFFF8) != 0x10 && a1 < 0x1E;
}
