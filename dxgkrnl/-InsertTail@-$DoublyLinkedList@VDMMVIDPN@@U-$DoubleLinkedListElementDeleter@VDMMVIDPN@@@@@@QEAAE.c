char __fastcall DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::InsertTail(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  char result; // al

  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference() )
    return 0;
  v4 = *(_QWORD **)(v3 + 24);
  v5 = (_QWORD *)(a2 + 8);
  if ( *v4 != v3 + 16 )
    __fastfail(3u);
  *v5 = v3 + 16;
  *(_QWORD *)(a2 + 16) = v4;
  *v4 = v5;
  *(_QWORD *)(v3 + 24) = v5;
  result = 1;
  ++*(_QWORD *)(v3 + 32);
  return result;
}
