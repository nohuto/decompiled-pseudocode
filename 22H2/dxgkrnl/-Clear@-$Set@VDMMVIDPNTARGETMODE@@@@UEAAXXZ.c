/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ @ 0x1C00690F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C0068E60 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

void __fastcall Set<DMMVIDPNTARGETMODE>::Clear(__int64 a1)
{
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear(a1 + 8);
}
