_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  _QWORD *result; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  a1[1] = v6;
  v7 = *a4;
  v8 = v6 + 24;
  *(_QWORD *)(v6 + 16) = *v7;
  memset_0((void *)(v6 + 24), 0, 0x48uLL);
  *(_QWORD *)(v8 + 8) = 0LL;
  result = a1;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_QWORD *)(v8 + 56) = 0LL;
  *(_DWORD *)(v8 + 64) = 1065353216;
  return result;
}
