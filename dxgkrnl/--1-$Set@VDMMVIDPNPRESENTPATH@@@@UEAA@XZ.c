__int64 __fastcall Set<DMMVIDPNPRESENTPATH>::~Set<DMMVIDPNPRESENTPATH>(_QWORD *a1)
{
  *a1 = &Set<DMMVIDPNPRESENTPATH>::`vftable';
  a1[1] = &DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::`vftable';
  return DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::Clear();
}
