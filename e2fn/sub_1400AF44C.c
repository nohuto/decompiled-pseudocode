__int64 __fastcall sub_1400AF44C(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx

  result = ExAllocatePool2(64LL, 32LL, 1819571039LL);
  v7 = (_QWORD *)result;
  if ( result )
  {
    result = a3[1];
    v8 = 0LL;
    v9 = 0LL;
    if ( result )
    {
      v8 = *a3;
      _InterlockedIncrement((volatile signed __int32 *)(result + 12));
      v9 = (volatile signed __int32 *)result;
    }
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[3] = 0LL;
    if ( v9 )
    {
      v7[2] = v8;
      v7[3] = v9;
      _InterlockedIncrement(v9 + 3);
      result = (unsigned int)_InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( a1[5] )
    {
      v7[1] = a2;
      *v7 = *a2;
      result = *a2;
      *(_QWORD *)(*a2 + 8) = v7;
      *a2 = (__int64)v7;
    }
    else
    {
      v7[1] = a1;
      *v7 = a1;
      a1[1] = v7;
      *a1 = v7;
    }
    ++a1[5];
  }
  return result;
}
