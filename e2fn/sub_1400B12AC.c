__int64 __fastcall sub_1400B12AC(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // rdi
  _QWORD *Pool2; // rbp
  __int64 *v8; // rax
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 160LL, 1685091442LL);
  if ( Pool2 )
  {
    v10[1] = a2[1];
    v10[0] = *a2;
    a2[1] = 0LL;
    *a2 = 0LL;
    v8 = sub_1400A27D4(v11, a3);
    v3 = sub_14007779C(Pool2, v10, v8);
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
