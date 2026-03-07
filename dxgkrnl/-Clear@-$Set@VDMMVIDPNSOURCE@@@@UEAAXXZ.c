char __fastcall Set<DMMVIDPNSOURCE>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(a1 + 8);
}
