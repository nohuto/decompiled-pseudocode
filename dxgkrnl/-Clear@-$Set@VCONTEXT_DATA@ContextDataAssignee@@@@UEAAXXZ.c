void __fastcall Set<ContextDataAssignee::CONTEXT_DATA>::Clear(__int64 a1)
{
  DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA,DoubleLinkedListElementDeleter<ContextDataAssignee::CONTEXT_DATA>>::Clear(a1 + 8);
}
