__int64 __fastcall sub_1400A39A8(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rdi
  _QWORD *Pool2; // rsi
  _QWORD *v6; // rax
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 1016LL, 1685091442LL);
  if ( Pool2 )
  {
    v6 = sub_1400A27D4(v8, a2);
    v2 = sub_140004678(Pool2, (__int64)v6);
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v2;
  return result;
}
