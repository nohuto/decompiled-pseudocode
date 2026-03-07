__int64 __fastcall sub_1400AE034(__int64 a1, int a2, __int64 *a3, __int64 *a4)
{
  _QWORD *v4; // rdi
  _QWORD *Pool2; // rbp
  __int64 *v10; // rax
  __int64 v12[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 424LL, 1685091442LL);
  if ( Pool2 )
  {
    v12[1] = a3[1];
    v12[0] = *a3;
    a3[1] = 0LL;
    *a3 = 0LL;
    v10 = sub_1400A27D4(&v13, a4);
    v4 = sub_14006F9DC(Pool2, a2, v12, v10, 32LL, 1000);
  }
  *(_QWORD *)(a1 + 16) = v4;
  return a1;
}
