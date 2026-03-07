_QWORD *__fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9
  _QWORD *result; // rax

  v3 = (_QWORD *)a1[1];
  if ( v3 == (_QWORD *)a1[2] )
    return std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Emplace_reallocate<std::shared_ptr<CCursorState::ShapeData> &>(
             a1,
             (__int64)v3,
             a2);
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v3, a2);
  result = *(_QWORD **)(v4 + 8);
  *(_QWORD *)(v4 + 8) = result + 2;
  return result;
}
