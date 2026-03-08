/*
 * XREFs of ?SetConstructionStatus@?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@UEAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x1C0019550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::SetConstructionStatus(
        __int64 a1,
        int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
}
