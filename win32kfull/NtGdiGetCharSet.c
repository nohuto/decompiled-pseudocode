/*
 * XREFs of NtGdiGetCharSet @ 0x1C0111AF0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C0111B08 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
