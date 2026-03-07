__int64 __fastcall Set<DXGTARGETENTRY>::Clear(__int64 a1)
{
  return DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear(a1 + 8);
}
