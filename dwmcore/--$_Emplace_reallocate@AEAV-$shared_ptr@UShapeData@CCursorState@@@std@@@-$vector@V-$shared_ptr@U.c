_QWORD *__fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Emplace_reallocate<std::shared_ptr<CCursorState::ShapeData> &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v15 = v13;
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v14, a3);
  v16 = a1[1];
  v17 = (_QWORD *)v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<std::shared_ptr<CCursorState::ShapeData> *,std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(
      v18,
      a2,
      v15);
    v16 = a1[1];
    v17 = v14 + 2;
    v18 = a2;
  }
  std::_Uninitialized_move<std::shared_ptr<CCursorState::ShapeData> *,std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(
    v18,
    v16,
    v17);
  std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Change_array(a1, v15, v9, v3);
  return v14;
}
