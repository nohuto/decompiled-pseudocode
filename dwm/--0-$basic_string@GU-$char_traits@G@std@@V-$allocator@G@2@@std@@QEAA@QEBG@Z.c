_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  __int64 v6; // rbx

  a1[3] = 7LL;
  *a1 = 0LL;
  a1[2] = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( v4 > 7 )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
      (__int64)a1,
      v4,
      a3,
      a2);
  }
  else
  {
    v6 = 2 * v4;
    a1[2] = v4;
    memmove_0(a1, a2, 2 * v4);
    *(_WORD *)((char *)a1 + v6) = 0;
  }
  return a1;
}
