_QWORD *__fastcall std::string::string(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  size_t v4; // rdi

  *a1 = 0LL;
  a1[2] = 0LL;
  v4 = -1LL;
  a1[3] = 15LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( v4 > 0xF )
  {
    std::string::_Reallocate_for<_lambda_66f57f934f28d61049862f64df852ff0_,char const *>((__int64)a1, v4, a3, a2);
  }
  else
  {
    a1[2] = v4;
    memmove_0(a1, a2, v4);
    *((_BYTE *)a1 + v4) = 0;
  }
  return a1;
}
