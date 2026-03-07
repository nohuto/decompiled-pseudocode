__int64 __fastcall sub_1400A2E00(__int64 *a1, __int64 *a2, int *a3)
{
  __int64 result; // rax
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // [rsp+30h] [rbp-18h]

  result = ExAllocatePool2(64LL, 24LL, 1819571039LL);
  v7 = result;
  if ( result )
  {
    v8 = *a3;
    *(_OWORD *)result = 0LL;
    LODWORD(v9) = v8;
    *(_QWORD *)(result + 16) = v9;
    if ( a1[4] )
    {
      *(_QWORD *)(result + 8) = a2;
      *(_QWORD *)result = *a2;
      result = *a2;
      *(_QWORD *)(*a2 + 8) = v7;
      *a2 = v7;
    }
    else
    {
      *(_QWORD *)(result + 8) = a1;
      *(_QWORD *)result = a1;
      a1[1] = result;
      *a1 = result;
    }
    ++a1[4];
  }
  return result;
}
