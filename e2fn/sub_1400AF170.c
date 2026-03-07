__int64 __fastcall sub_1400AF170(__int64 a1, __int64 (__fastcall ***a2)(PVOID P), int a3, __int64 *a4)
{
  _QWORD *v4; // rdi
  _QWORD *Pool2; // rsi
  __int64 *v10; // rax
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 432LL, 1685091442LL);
  if ( Pool2 )
  {
    v10 = sub_1400A27D4(v12, a4);
    v4 = sub_14006EE2C(Pool2, a2, a3, v10);
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
