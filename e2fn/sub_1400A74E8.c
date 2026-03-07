__int64 __fastcall sub_1400A74E8(__int64 a1, int a2, _QWORD *a3, unsigned int *a4)
{
  __int64 v4; // rdi
  __int64 Pool2; // rsi
  __int64 *v10; // rax
  __int64 result; // rax
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 424LL, 1685091442LL);
  if ( Pool2 )
  {
    v10 = sub_1400A5180(v12, a3);
    v4 = sub_14005554C(Pool2, a2, v10, *a4);
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
