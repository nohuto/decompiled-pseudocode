/*
 * XREFs of HalpPciWriteIoConfigUshort @ 0x140513300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciWriteIoConfigUshort(unsigned int *a1, unsigned __int16 *a2, int a3)
{
  unsigned int v3; // eax

  v3 = *a1 ^ (*a1 ^ a3) & 0xFC;
  *a1 = v3;
  __outdword(0xCF8u, v3);
  __outword((a3 & 3) + 3324, *a2);
  return 2LL;
}
