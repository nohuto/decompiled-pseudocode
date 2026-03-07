__int64 __fastcall sub_1400AFCFC(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char v4; // r14
  _QWORD *Pool2; // r13
  void *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall **v18)(PVOID); // [rsp+50h] [rbp-30h] BYREF
  __int16 v19; // [rsp+58h] [rbp-28h]
  void *v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+70h] [rbp-10h]

  v4 = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 160LL, 1685091442LL);
  if ( Pool2 )
  {
    v19 = 0;
    v18 = &off_1400D41D0;
    v10 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( a2 )
    {
      sub_1400011A8(&v18, a2, 0x10uLL);
      v10 = v20;
    }
    v11 = a4[1];
    a4[1] = 0LL;
    v16[1] = v11;
    v12 = *a4;
    *a4 = 0LL;
    v16[0] = v12;
    v17[1] = a3[1];
    v13 = *a3;
    *a3 = 0LL;
    a3[1] = 0LL;
    v17[0] = v13;
    v14 = sub_1400737E0(Pool2, (__int64)&v18, v17, v16, 1000);
    v4 = 1;
  }
  else
  {
    v10 = v20;
    v14 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v14;
  if ( (v4 & 1) != 0 && v10 )
    ExFreePool(v10);
  return a1;
}
