/*
 * XREFs of ?Clear@?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ @ 0x1C0069110
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXXZ @ 0x1C0068F30 (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 */

void __fastcall Set<DMMVIDEOPRESENTTARGET>::Clear(__int64 a1)
{
  DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::Clear(a1 + 8);
}
