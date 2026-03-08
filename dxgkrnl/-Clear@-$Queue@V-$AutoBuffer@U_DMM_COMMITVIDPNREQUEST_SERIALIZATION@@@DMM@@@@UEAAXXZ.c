/*
 * XREFs of ?Clear@?$Queue@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@UEAAXXZ @ 0x1C0068490
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x1C0068198 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 */

void __fastcall Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::Clear(__int64 a1)
{
  DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear(a1 + 8);
}
