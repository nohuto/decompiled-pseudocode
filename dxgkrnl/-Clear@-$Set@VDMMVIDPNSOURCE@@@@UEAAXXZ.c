/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNSOURCE@@@@UEAAXXZ @ 0x1C006A360
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C0013EB4 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@.c)
 */

char __fastcall Set<DMMVIDPNSOURCE>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(a1 + 8);
}
