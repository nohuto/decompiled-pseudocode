_QWORD *__fastcall std::vector<MilRectF>::insert<MilRectF const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = a3 - *a1;
  std::vector<MilRectF>::_Insert_range<MilRectF const *>(a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
