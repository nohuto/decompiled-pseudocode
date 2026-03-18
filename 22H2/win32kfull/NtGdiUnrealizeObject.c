/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02C4F50
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C02D253C (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
