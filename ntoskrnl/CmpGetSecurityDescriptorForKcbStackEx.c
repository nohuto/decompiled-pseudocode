/*
 * XREFs of CmpGetSecurityDescriptorForKcbStackEx @ 0x14067D1AC
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 CmpGetSecurityDescriptorForKcbStackEx()
{
  return CmpGetSecurityCacheEntryForKcbStack() + 32;
}
