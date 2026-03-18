/*
 * XREFs of NtGdiGetCharSet @ 0x1C001C2B0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C001C490 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
