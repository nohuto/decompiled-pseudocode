_QWORD *__fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  _QWORD *result; // rax

  v3 = (__int64 *)a1[1];
  if ( v3 == (__int64 *)a1[2] )
    return std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<std::unique_ptr<CExcludeVisualReference>>(
             a1,
             (__int64)v3,
             a2);
  v4 = *a2;
  *a2 = 0LL;
  *v3 = v4;
  result = (_QWORD *)a1[1];
  a1[1] = (__int64)(result + 1);
  return result;
}
