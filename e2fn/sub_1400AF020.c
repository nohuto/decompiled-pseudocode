__int64 __fastcall sub_1400AF020(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, char *a5, char *a6)
{
  char v10; // si
  __int64 Pool2; // r15
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v15[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v16; // [rsp+58h] [rbp-19h] BYREF
  __int64 (__fastcall **v17)(PVOID); // [rsp+68h] [rbp-9h] BYREF
  __int16 v18; // [rsp+70h] [rbp-1h]
  PVOID P; // [rsp+78h] [rbp+7h]
  __int64 v20; // [rsp+80h] [rbp+Fh]
  __int64 v21; // [rsp+88h] [rbp+17h]

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  v10 = 0;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 416LL, 1685091442LL);
  if ( Pool2 )
  {
    v17 = &off_1400D41D0;
    v18 = 0;
    P = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( a2 )
      sub_1400011A8(&v17, a2, 0x20uLL);
    v15[1] = a3[1];
    v15[0] = *a3;
    a3[1] = 0LL;
    *a3 = 0LL;
    v12 = sub_1400A27D4(&v16, a4);
    v13 = sub_14006FB0C(Pool2, (__int64)&v17, v15, v12, *a5, *a6, 32LL, 1000);
    v10 = 1;
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v13;
  if ( (v10 & 1) != 0 )
  {
    v17 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
  }
  return a1;
}
