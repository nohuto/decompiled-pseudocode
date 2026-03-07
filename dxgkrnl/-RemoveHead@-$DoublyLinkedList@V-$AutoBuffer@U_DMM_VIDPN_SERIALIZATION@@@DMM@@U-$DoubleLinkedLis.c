_QWORD *__fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(
        __int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rdx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v1 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 == (_QWORD *)(a1 + 16) )
    return 0LL;
  if ( (_QWORD *)v3[1] != v1 || (v5 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
    __fastfail(3u);
  *v1 = v5;
  *(_QWORD *)(v5 + 8) = v1;
  result = v3 - 1;
  --*(_QWORD *)(a1 + 32);
  v3[1] = 0LL;
  *v3 = 0LL;
  return result;
}
