__int64 __fastcall sub_1400B1E48(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, char *a5)
{
  __int64 v5; // rdi
  __int64 Pool2; // rbp
  _QWORD *v11; // rax
  __int64 v13[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  v5 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 416LL, 1685091442LL);
  if ( Pool2 )
  {
    v13[1] = a3[1];
    v13[0] = *a3;
    a3[1] = 0LL;
    *a3 = 0LL;
    v11 = sub_1400A27D4(&v14, a4);
    v5 = sub_14006FB0C(Pool2, a2, v13, v11, *a5, 0, 32LL, 1000);
  }
  *(_QWORD *)(a1 + 16) = v5;
  return a1;
}
