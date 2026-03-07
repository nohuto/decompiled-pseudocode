char *__fastcall std::wstring::assign(char *a1, const void *a2, unsigned __int64 a3)
{
  char *v5; // rsi
  __int64 v6; // rbx

  if ( a3 > *((_QWORD *)a1 + 3) )
    return (char *)std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
                     a1,
                     a3,
                     a3,
                     a2);
  v5 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v5 = *(char **)a1;
  *((_QWORD *)a1 + 2) = a3;
  v6 = 2 * a3;
  memmove_0(v5, a2, 2 * a3);
  *(_WORD *)&v5[v6] = 0;
  return a1;
}
