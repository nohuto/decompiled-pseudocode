void __fastcall DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::SetConstructionStatus(
        __int64 a1,
        int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
}
