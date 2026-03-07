_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        char *a5,
        const __m128i *a6,
        __int128 *a7)
{
  __int64 v10; // rbp
  __int128 v11; // xmm8
  __m128i v12; // xmm6
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // xmm7_8
  _QWORD *result; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x50uLL);
  a1[1] = v10;
  v11 = *a7;
  v12 = _mm_loadu_si128(a6);
  v13 = *a5;
  v14 = *a4;
  v15 = *((_QWORD *)a7 + 2);
  *(_QWORD *)(v10 + 16) = *a3;
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
    (_QWORD *)(v10 + 24),
    v14);
  *(_BYTE *)(v10 + 32) = v13;
  result = a1;
  *(_OWORD *)(v10 + 52) = v11;
  *(__m128i *)(v10 + 36) = v12;
  *(_QWORD *)(v10 + 68) = v15;
  return result;
}
