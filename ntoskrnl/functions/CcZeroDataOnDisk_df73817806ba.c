__int64 __fastcall CcZeroDataOnDisk(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a2;
  v4 = 0;
  v5 = *a3 - *a2;
  v9 = v3;
  v8 = v5;
  if ( v5 >= (unsigned int)CcMaxZeroTransferSize )
  {
    if ( _InterlockedIncrement(&CcAggressiveZeroCount) > CcAggressiveZeroThreshold )
    {
      _InterlockedDecrement(&CcAggressiveZeroCount);
      v6 = 0x10000LL;
    }
    else
    {
      v6 = (unsigned int)CcMaxZeroTransferSize;
      v4 = 1;
    }
  }
  else
  {
    v6 = 0LL;
  }
  result = MmZeroPageWrite(a1, &v9, &v8, v6);
  if ( (int)result < 0 )
    RtlRaiseStatus(result);
  if ( v4 )
    _InterlockedDecrement(&CcAggressiveZeroCount);
  return result;
}
