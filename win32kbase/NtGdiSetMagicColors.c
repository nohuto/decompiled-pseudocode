/*
 * XREFs of NtGdiSetMagicColors @ 0x1C01998D0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetMagicColors @ 0x1C01995FC (GreSetMagicColors.c)
 */

__int64 __fastcall NtGdiSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  return GreSetMagicColors(a1, a2, a3);
}
