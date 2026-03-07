__int64 __fastcall sub_1400B1360(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *Pool2; // rax
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 144LL, 1685091442LL);
  if ( Pool2 )
  {
    v9[1] = a2[1];
    v9[0] = *a2;
    a2[1] = 0LL;
    *a2 = 0LL;
    v3 = sub_1400776A0(Pool2, v9, a3);
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
