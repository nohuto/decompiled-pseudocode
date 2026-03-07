_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a2 - 64);
  if ( a3 )
    *(_QWORD *)(v3 + 48) = *(_QWORD *)(a3 + 48);
  else
    *(_QWORD *)(v3 + 48) = 0LL;
  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
