/*
 * XREFs of NtGdiGetCharSet @ 0x1C009BF90
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C009B6E0 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
