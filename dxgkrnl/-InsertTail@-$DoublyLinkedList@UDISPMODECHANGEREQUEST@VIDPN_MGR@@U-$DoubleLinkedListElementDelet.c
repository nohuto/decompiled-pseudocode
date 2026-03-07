char __fastcall DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  char result; // al

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
      v6 = *(_QWORD **)(v5 + 8);
      v5 = (__int64)(v6 - 1);
      if ( v6 == v2 )
        v5 = 0LL;
    }
  }
  v7 = (_QWORD *)a1[3];
  v8 = (_QWORD *)(a2 + 8);
  if ( (_QWORD *)*v7 != v2 )
    __fastfail(3u);
  *v8 = v2;
  *(_QWORD *)(a2 + 16) = v7;
  *v7 = v8;
  v2[1] = v8;
  result = 1;
  ++a1[4];
  return result;
}
