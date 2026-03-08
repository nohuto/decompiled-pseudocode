/*
 * XREFs of HalpPciReadIoConfigUshort @ 0x140393090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciReadIoConfigUshort(unsigned int *a1, _WORD *a2, int a3)
{
  unsigned int v3; // eax

  v3 = *a1 ^ (*a1 ^ a3) & 0xFC;
  *a1 = v3;
  __outdword(0xCF8u, v3);
  LOWORD(v3) = __inword((a3 & 3) + 3324);
  *a2 = v3;
  return 2LL;
}
