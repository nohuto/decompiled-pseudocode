char __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 16;
  if ( v2 == v3 )
    return 0;
  v4 = v2 - 8;
  if ( !v4 )
    return 0;
  while ( v4 != a2 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 != v3 )
    {
      v4 = v5 - 8;
      if ( v4 )
        continue;
    }
    return 0;
  }
  return 1;
}
