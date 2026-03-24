/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02B0400
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C02B85B8 (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
