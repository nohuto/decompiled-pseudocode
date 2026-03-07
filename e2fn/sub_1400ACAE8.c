__int64 __fastcall sub_1400ACAE8(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, char *a5, char *a6)
{
  __int64 v6; // rdi
  __int64 Pool2; // rbp
  _QWORD *v12; // rax
  __int64 v14[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF

  v6 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 416LL, 1685091442LL);
  if ( Pool2 )
  {
    v14[1] = a3[1];
    v14[0] = *a3;
    a3[1] = 0LL;
    *a3 = 0LL;
    v12 = sub_1400A27D4(&v15, a4);
    v6 = sub_14006FB0C(Pool2, a2, v14, v12, *a5, *a6, 32LL, 1000);
  }
  *(_QWORD *)(a1 + 16) = v6;
  return a1;
}
