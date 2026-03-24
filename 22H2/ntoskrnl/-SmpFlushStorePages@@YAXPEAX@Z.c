/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14034DA30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x1406FA224 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}
