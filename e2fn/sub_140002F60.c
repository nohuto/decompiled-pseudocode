__int64 __fastcall sub_140002F60(_QWORD *a1, char a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-10h]

  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  if ( a2 )
  {
    v5 = (_QWORD *)a1[11];
    v6 = v5;
    if ( a1[15] )
      v6 = a1 + 10;
    while ( v5 != v6 )
    {
      sub_1400A27D4(&v9, v5 + 2);
      LOBYTE(v7) = a2;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v7);
      if ( v10 )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          v8 = v10;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          result = (unsigned int)_InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      v5 = (_QWORD *)v5[1];
    }
  }
  return result;
}
