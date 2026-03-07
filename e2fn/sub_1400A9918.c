__int64 __fastcall sub_1400A9918(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char v8; // si
  _QWORD *Pool2; // r15
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 v13[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall **v15)(PVOID); // [rsp+50h] [rbp-30h] BYREF
  __int16 v16; // [rsp+58h] [rbp-28h]
  PVOID P; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+70h] [rbp-10h]

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  v8 = 0;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 424LL, 1685091442LL);
  if ( Pool2 )
  {
    v15 = &off_1400D41D0;
    v16 = 0;
    P = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    if ( a2 )
      sub_1400011A8(&v15, a2, 0x12uLL);
    v13[1] = a3[1];
    v13[0] = *a3;
    a3[1] = 0LL;
    *a3 = 0LL;
    v10 = sub_1400A27D4(&v14, a4);
    v11 = sub_14006F9DC(Pool2, (int)&v15, v13, v10, 32LL, 1000);
    v8 = 1;
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v11;
  if ( (v8 & 1) != 0 )
  {
    v15 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
  }
  return a1;
}
