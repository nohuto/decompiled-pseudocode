__int64 __fastcall sub_14004EEE0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  volatile signed __int32 *v5; // rsi
  __int64 v6; // r15
  __int64 i; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 result; // rax
  volatile signed __int32 *v11; // rbx

  v2 = a1[10];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v5 = (volatile signed __int32 *)a2[1];
  a2[1] = 0LL;
  v6 = *a2;
  *a2 = 0LL;
  for ( i = a1[13]; ; i = v9 )
  {
    v8 = a1[17] ? (__int64)(a1 + 12) : a1[13];
    if ( i == v8 )
      break;
    v9 = *(_QWORD *)(i + 8);
    if ( *(_QWORD *)(i + 16) == v6 )
      sub_1400A2D78(a1 + 12);
  }
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v11 = (volatile signed __int32 *)a2[1];
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return result;
}
