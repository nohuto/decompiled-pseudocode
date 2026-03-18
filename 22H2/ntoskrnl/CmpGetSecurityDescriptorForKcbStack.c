/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x140A1BAB8
 * Callers:
 *     CmpCreateTombstone @ 0x140616EBC (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5730 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL) + 32;
}
