__int64 __fastcall sub_1400A440C(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // rsi
  volatile signed __int32 *v8; // rdi
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp-10h]

  result = ExAllocatePool2(64LL, 32LL, 1819571039LL);
  v7 = result;
  if ( result )
  {
    sub_1400A27D4(&v9, a3);
    *(_OWORD *)v7 = 0LL;
    result = (__int64)sub_1400A27D4((_QWORD *)(v7 + 16), &v9);
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
    if ( a1[5] )
    {
      *(_QWORD *)(v7 + 8) = a2;
      *(_QWORD *)v7 = *a2;
      result = *a2;
      *(_QWORD *)(*a2 + 8) = v7;
      *a2 = v7;
    }
    else
    {
      *(_QWORD *)(v7 + 8) = a1;
      *(_QWORD *)v7 = a1;
      a1[1] = v7;
      *a1 = v7;
    }
    ++a1[5];
  }
  return result;
}
