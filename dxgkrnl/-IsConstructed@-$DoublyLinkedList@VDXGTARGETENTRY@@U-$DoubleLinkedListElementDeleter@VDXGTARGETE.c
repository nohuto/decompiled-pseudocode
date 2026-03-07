bool __fastcall DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::IsConstructed(
        __int64 a1)
{
  return *(_DWORD *)(a1 + 40) == 2;
}
