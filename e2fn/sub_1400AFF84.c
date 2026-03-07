__int64 __fastcall sub_1400AFF84(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 504LL, 1685091442LL);
  if ( Pool2 )
  {
    v7[1] = a2[1];
    v7[0] = *a2;
    a2[1] = 0LL;
    *a2 = 0LL;
    v2 = sub_1400025C4(Pool2, v7);
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v2;
  return result;
}
