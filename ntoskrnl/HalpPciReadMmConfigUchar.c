/*
 * XREFs of HalpPciReadMmConfigUchar @ 0x140411F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciReadMmConfigUchar(__int64 a1, _BYTE *a2, unsigned int a3)
{
  *a2 = *(_BYTE *)(a1 + a3);
  return 1LL;
}
