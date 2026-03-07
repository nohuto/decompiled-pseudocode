_QWORD *__fastcall std::vector<CCompositionTextLine *>::insert<CCompositionTextLine * *,0>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        const void *a4,
        __int64 a5)
{
  __int64 v6; // rbx

  v6 = (__int64)&a3[-*a1] >> 3;
  std::vector<CCompositionTextLine *>::_Insert_range<CCompositionTextLine * *>((__int64)a1, a3, a4, a5);
  *a2 = *a1 + 8 * v6;
  return a2;
}
