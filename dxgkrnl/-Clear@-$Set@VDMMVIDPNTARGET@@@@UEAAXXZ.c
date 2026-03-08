/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNTARGET@@@@UEAAXXZ @ 0x1C006A380
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAAXXZ @ 0x1C00136E0 (-Clear@-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@.c)
 */

char __fastcall Set<DMMVIDPNTARGET>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::Clear(a1 + 8);
}
