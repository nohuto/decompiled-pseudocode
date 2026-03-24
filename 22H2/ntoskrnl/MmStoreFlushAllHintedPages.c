/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1406FA224
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14034DA30 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x1403503A0 (MiFlushAllHintedStorePages.c)
 */

__int64 MmStoreFlushAllHintedPages()
{
  return MiFlushAllHintedStorePages();
}
