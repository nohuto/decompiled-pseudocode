/*
 * XREFs of HalpPciWriteIoConfigUchar @ 0x140513280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciWriteIoConfigUchar(unsigned int *a1, unsigned __int8 *a2, int a3)
{
  unsigned int v3; // eax

  v3 = *a1 ^ (*a1 ^ a3) & 0xFC;
  *a1 = v3;
  __outdword(0xCF8u, v3);
  __outbyte((a3 & 3) + 3324, *a2);
  return 1LL;
}
