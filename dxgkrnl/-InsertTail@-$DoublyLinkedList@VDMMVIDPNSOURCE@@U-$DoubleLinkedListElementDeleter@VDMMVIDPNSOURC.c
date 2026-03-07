char __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  char result; // al
  _QWORD *v9; // rax

  v2 = a1 + 2;
  if ( a2 )
  {
    v5 = 0LL;
    if ( (_QWORD *)*v2 != v2 )
      v5 = *v2 - 8LL;
    while ( v5 )
    {
      if ( v5 == a2 )
        return 0;
      v9 = *(_QWORD **)(v5 + 8);
      v5 = (__int64)(v9 - 1);
      if ( v9 == v2 )
        v5 = 0LL;
    }
  }
  v6 = (_QWORD *)a1[3];
  v7 = (_QWORD *)(a2 + 8);
  if ( (_QWORD *)*v6 != v2 )
    __fastfail(3u);
  *v7 = v2;
  *(_QWORD *)(a2 + 16) = v6;
  *v6 = v7;
  v2[1] = v7;
  result = 1;
  ++a1[4];
  return result;
}
