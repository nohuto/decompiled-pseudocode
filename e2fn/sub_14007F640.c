void __fastcall sub_14007F640(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD v12[2]; // [rsp+38h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-69h]
  __int64 v14; // [rsp+50h] [rbp-61h]
  __int64 v15; // [rsp+58h] [rbp-59h]
  __int64 (__fastcall **v16)(PVOID); // [rsp+60h] [rbp-51h] BYREF
  __int16 v17; // [rsp+68h] [rbp-49h]
  PVOID v18; // [rsp+70h] [rbp-41h]
  __int64 v19; // [rsp+78h] [rbp-39h]
  __int64 v20; // [rsp+80h] [rbp-31h]
  __int128 v21; // [rsp+88h] [rbp-29h] BYREF
  PVOID v22; // [rsp+98h] [rbp-19h]
  __int64 v23; // [rsp+A0h] [rbp-11h]
  __int64 v24; // [rsp+A8h] [rbp-9h]
  unsigned int v25; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+Fh]
  __int64 v27; // [rsp+C8h] [rbp+17h]
  int v28; // [rsp+D0h] [rbp+1Fh]
  __int128 v29; // [rsp+D8h] [rbp+27h]
  __int64 v30; // [rsp+E8h] [rbp+37h]

  v2 = a1 + 56;
  v25 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(a1 + 352) + 32LL))(a1 + 352, &v25);
  WORD4(v21) = 0;
  *(_QWORD *)&v21 = &off_1400D41D0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  sub_1400011A8(&v21, (__int64)L"ConnectionState", 0xFuLL);
  v4 = *a2;
  v5 = sub_140080074(v12, v25);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  (*(void (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v4 + 24))(a2, v6, &v21, v5);
  v12[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  *(_QWORD *)&v21 = &off_1400D41D0;
  if ( v22 )
    ExFreePool(v22);
  v16 = &off_1400D41D0;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v16, (__int64)L"LinkSpeed", 9uLL);
  *(_QWORD *)&v29 = v26;
  *((_QWORD *)&v29 + 1) = 10LL;
  v30 = 10LL;
  v21 = v29;
  v22 = (PVOID)10;
  sub_14000139C((__int64)v12, (__int64 *)&v21);
  v7 = *a2;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD *))(v7 + 24))(a2, v8, &v16, v12);
  v12[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
  v16 = &off_1400D41D0;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v16, (__int64)L"DuplexState", 0xBuLL);
  v9 = *a2;
  v10 = sub_1400800E4(v12, (unsigned int)v27);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), __int64))(v9 + 24))(a2, v11, &v16, v10);
  v12[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
}
