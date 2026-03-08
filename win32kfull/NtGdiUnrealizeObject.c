/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02C7720
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C02D42E8 (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
