/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNPRESENTPATH@@@@UEAAXXZ @ 0x1C006A340
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAXXZ @ 0x1C0014C50 (-Clear@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNPRESE.c)
 */

void __fastcall Set<DMMVIDPNPRESENTPATH>::Clear(__int64 a1)
{
  DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::Clear(a1 + 8);
}
