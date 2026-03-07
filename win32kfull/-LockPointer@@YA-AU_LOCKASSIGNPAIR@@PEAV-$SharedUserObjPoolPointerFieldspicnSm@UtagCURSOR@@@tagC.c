_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a2 - 104);
  if ( a3 )
    *(_QWORD *)(v3 + 56) = *a3;
  else
    *(_QWORD *)(v3 + 56) = 0LL;
  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
