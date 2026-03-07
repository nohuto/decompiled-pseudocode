_QWORD *__fastcall std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        const void *a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax

  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)&a3[-*a1] >> 3);
  std::vector<CContent::LayoutData>::_Insert_range<CContent::LayoutData *>((__int64)a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + 40 * v6;
  return result;
}
