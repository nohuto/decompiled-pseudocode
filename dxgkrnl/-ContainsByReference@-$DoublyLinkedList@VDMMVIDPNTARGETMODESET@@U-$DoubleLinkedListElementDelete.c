bool __fastcall DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( !a2 )
    return 0;
  v4 = a1 + 16;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 != v4 )
    v5 = v6 - 8;
  while ( v5 && v5 != a2 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    v5 = v7 - 8;
    if ( v7 == v4 )
      v5 = 0LL;
  }
  return v5 != 0;
}
