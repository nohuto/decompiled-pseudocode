/*
 * XREFs of NtGdiGetCharSet @ 0x1C009C020
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C009B770 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
