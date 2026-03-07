__int64 *__fastcall sub_1400AD8A0(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  volatile signed __int32 *v5; // rbx
  __int64 *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a2[1];
  v4 = (*a2 + 528LL) & -(__int64)(*a2 != 0LL);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v5 = (volatile signed __int32 *)a1[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  result = a1;
  a1[1] = v3;
  *a1 = v4;
  return result;
}
