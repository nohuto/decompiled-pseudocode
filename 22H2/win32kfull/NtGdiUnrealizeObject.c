/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02AFD40
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C02B7988 (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
