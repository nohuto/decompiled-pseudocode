__int64 *__fastcall std::unique_ptr<CShape>::operator=<std::default_delete<CShape>,0>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<CShape>::operator()((__int64)a1, v4);
  }
  return a1;
}
