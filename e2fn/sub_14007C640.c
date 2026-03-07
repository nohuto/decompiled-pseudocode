__int64 __fastcall sub_14007C640(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdi
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 392);
  result = *(_QWORD *)(a1 + 424);
  v3 = v1;
  v4 = a1 + 384;
  if ( result )
    v3 = v4;
  while ( v1 != v3 )
  {
    sub_1400A27D4(&v6, v1 + 16);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 8LL))(v6 + 8);
    if ( v7 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        v5 = v7;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
        result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    v1 = *(_QWORD *)(v1 + 8);
  }
  return result;
}
