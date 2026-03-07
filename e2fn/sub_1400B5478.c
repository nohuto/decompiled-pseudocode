__int64 __fastcall sub_1400B5478(__int64 a1, int a2, __int64 *a3, __int64 *a4)
{
  _QWORD *v4; // rdi
  _QWORD *Pool2; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 424LL, 1685091442LL);
  if ( Pool2 )
  {
    v10 = a4[1];
    a4[1] = 0LL;
    v14[1] = v10;
    v11 = *a4;
    *a4 = 0LL;
    v12 = *a3;
    v14[0] = v11;
    v15[1] = a3[1];
    a3[1] = 0LL;
    v15[0] = v12;
    *a3 = 0LL;
    v4 = sub_14006F9DC(Pool2, a2, v15, v14, 32LL, 1000);
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
