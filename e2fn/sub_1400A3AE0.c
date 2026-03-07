__int64 __fastcall sub_1400A3AE0(__int64 a1, int *a2, __int64 *a3, __int64 a4, int *a5, int *a6, int *a7)
{
  __int64 v7; // rdi
  __int64 Pool2; // rsi
  __int64 *v13; // rax
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 96LL, 1685091442LL);
  if ( Pool2 )
  {
    v13 = sub_1400A27D4(&v15, a3);
    v7 = sub_1400051B8(Pool2, *a2, v13, a4, *a5, *a6, *a7);
  }
  *(_QWORD *)(a1 + 16) = v7;
  return a1;
}
