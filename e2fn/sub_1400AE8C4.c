__int64 *__fastcall sub_1400AE8C4(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 *result; // rax

  v2 = *a2 - 352LL;
  v3 = a2[1];
  v4 = -(__int64)(*a2 != 0LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = v2 & v4;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  a1[1] = a2[1];
  result = a1;
  *a1 = v5;
  return result;
}
