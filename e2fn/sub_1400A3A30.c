__int64 __fastcall sub_1400A3A30(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v3; // rbx
  _QWORD *Pool2; // rsi
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 480LL, 1685091442LL);
  if ( Pool2 )
  {
    v8 = sub_1400A27D4(&v11, a3);
    v9 = sub_1400A27D4(v12, a2);
    v3 = sub_140004E98(Pool2, v9, v8, 256LL);
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
