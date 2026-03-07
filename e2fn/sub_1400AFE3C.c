__int64 __fastcall sub_1400AFE3C(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char v8; // si
  _QWORD *Pool2; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v14[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall **v16)(PVOID); // [rsp+50h] [rbp-30h] BYREF
  __int16 v17; // [rsp+58h] [rbp-28h]
  PVOID P; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int64 v20; // [rsp+70h] [rbp-10h]

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  v8 = 0;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 424LL, 1685091442LL);
  if ( Pool2 )
  {
    v16 = &off_1400D41D0;
    v17 = 0;
    P = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    if ( a2 )
      sub_1400011A8(&v16, a2, 0x12uLL);
    v10 = a4[1];
    a4[1] = 0LL;
    v14[1] = v10;
    v11 = *a4;
    *a4 = 0LL;
    v14[0] = v11;
    v15[1] = a3[1];
    v15[0] = *a3;
    a3[1] = 0LL;
    *a3 = 0LL;
    v12 = sub_14006F9DC(Pool2, (int)&v16, v15, v14, 32LL, 1000);
    v8 = 1;
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v12;
  if ( (v8 & 1) != 0 )
  {
    v16 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
  }
  return a1;
}
