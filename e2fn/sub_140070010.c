void __fastcall sub_140070010(__int64 *a1, __int64 a2, int a3)
{
  PVOID v3; // rsi
  void *v6; // rdx
  PVOID v7; // rdi
  PVOID v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  void *v11; // rdx
  PVOID v12; // rdi
  PVOID v13; // rdx
  PVOID v14; // rdi
  PVOID v15; // rdx
  PVOID v16; // rdi
  __int128 v17; // [rsp+20h] [rbp-39h] BYREF
  PVOID P; // [rsp+30h] [rbp-29h]
  __int64 v19; // [rsp+38h] [rbp-21h]
  __int64 v20; // [rsp+40h] [rbp-19h]
  __int128 v21; // [rsp+50h] [rbp-9h] BYREF
  PVOID v22; // [rsp+60h] [rbp+7h]
  __int64 v23; // [rsp+68h] [rbp+Fh]
  __int64 v24; // [rsp+70h] [rbp+17h]
  _BYTE v25[16]; // [rsp+78h] [rbp+1Fh] BYREF
  PVOID v26; // [rsp+88h] [rbp+2Fh]
  __int64 v27; // [rsp+90h] [rbp+37h]

  if ( !a3 )
  {
    v3 = &unk_1400D44E0;
    v6 = &unk_1400D44E0;
    if ( a1[5] )
      v6 = (void *)a1[5];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * a1[6]);
    WORD4(v17) = 0;
    *(_QWORD *)&v17 = &off_1400D41D0;
    P = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    sub_1400011A8(&v17, (__int64)L" [ Elapsed: ", 0xCuLL);
    v7 = P;
    v8 = &unk_1400D44E0;
    if ( P )
      v8 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v19);
    if ( v7 )
      ExFreePool(v7);
    *(_QWORD *)&v17 = &off_1400D41D0;
    WORD4(v17) = 0;
    P = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    sub_1400011A8(&v17, (__int64)qword_1400B7580, 1uLL);
    v9 = sub_14006FD8C(a1[2]);
    v10 = sub_1400017B4(&v21, v9, (__int64)&v17);
    v11 = &unk_1400D44E0;
    if ( v10[2] )
      v11 = (void *)v10[2];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, 2LL * v10[3]);
    *(_QWORD *)&v21 = &off_1400D41D0;
    if ( v22 )
      ExFreePool(v22);
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    *(_QWORD *)&v17 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    *(_QWORD *)&v17 = &off_1400D41D0;
    WORD4(v17) = 0;
    P = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    sub_1400011A8(&v17, (__int64)L", TS: ", 6uLL);
    v12 = P;
    v13 = &unk_1400D44E0;
    if ( P )
      v13 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v13, 2 * v19);
    if ( v12 )
      ExFreePool(v12);
    *(_QWORD *)&v21 = a1[2];
    *((_QWORD *)&v21 + 1) = 10LL;
    v22 = (PVOID)10;
    v17 = v21;
    P = (PVOID)10;
    sub_14000139C((__int64)v25, (__int64 *)&v17);
    v14 = v26;
    v15 = &unk_1400D44E0;
    if ( v26 )
      v15 = v26;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v15, 2 * v27);
    if ( v14 )
      ExFreePool(v14);
    *(_QWORD *)&v17 = &off_1400D41D0;
    WORD4(v17) = 0;
    P = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    sub_1400011A8(&v17, (__int64)L" (usec)]\n", 9uLL);
    v16 = P;
    if ( P )
      v3 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v3, 2 * v19);
    if ( v16 )
      ExFreePool(v16);
  }
}
