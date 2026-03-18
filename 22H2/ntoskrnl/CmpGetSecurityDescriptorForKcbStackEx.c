/*
 * XREFs of CmpGetSecurityDescriptorForKcbStackEx @ 0x14067F19C
 * Callers:
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5730 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 CmpGetSecurityDescriptorForKcbStackEx()
{
  return CmpGetSecurityCacheEntryForKcbStack() + 32;
}
