/*
 * XREFs of NtGdiGetCharSet @ 0x1C0076CA0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C0076CB8 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
