/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x140A18D68
 * Callers:
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL) + 32;
}
