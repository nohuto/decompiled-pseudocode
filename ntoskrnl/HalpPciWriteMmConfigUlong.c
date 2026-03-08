/*
 * XREFs of HalpPciWriteMmConfigUlong @ 0x140412000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciWriteMmConfigUlong(__int64 a1, _DWORD *a2, unsigned int a3)
{
  *(_DWORD *)(a1 + a3) = *a2;
  return 4LL;
}
