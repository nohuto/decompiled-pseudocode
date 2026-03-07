void __fastcall sub_14007FC80(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  PVOID v5; // rsi
  void *v6; // rdi
  PVOID v7; // rdx
  __int64 v8; // rax
  void *v9; // rdx
  PVOID v10; // rsi
  PVOID v11; // rdx
  PVOID v12; // rsi
  PVOID v13; // rdx
  PVOID v14; // rsi
  PVOID v15; // rdx
  __int64 v16; // rax
  __int128 v17; // [rsp+28h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-39h]
  __int64 v19; // [rsp+40h] [rbp-31h]
  __int64 v20; // [rsp+48h] [rbp-29h]
  unsigned int v21; // [rsp+58h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-11h]
  __int64 v23; // [rsp+68h] [rbp-9h]
  int v24; // [rsp+70h] [rbp-1h]
  __int128 v25; // [rsp+78h] [rbp+7h]
  __int64 v26; // [rsp+88h] [rbp+17h]
  _QWORD v27[2]; // [rsp+90h] [rbp+1Fh] BYREF
  PVOID v28; // [rsp+A0h] [rbp+2Fh]
  __int64 v29; // [rsp+A8h] [rbp+37h]

  v2 = (__int64 *)(a1 + 352);
  v21 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v4 = *v2;
  v24 = 0;
  (*(void (__fastcall **)(__int64 *, unsigned int *))(v4 + 32))(v2, &v21);
  WORD4(v17) = 0;
  *(_QWORD *)&v17 = &off_1400D41D0;
  P = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v17, (__int64)L"Connection State: ", 0x12uLL);
  v5 = P;
  v6 = &unk_1400D44E0;
  v7 = &unk_1400D44E0;
  if ( P )
    v7 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v19);
  if ( v5 )
    ExFreePool(v5);
  v8 = sub_140080074(&v17, v21);
  v9 = &unk_1400D44E0;
  if ( *(_QWORD *)(v8 + 16) )
    v9 = *(void **)(v8 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2LL * *(_QWORD *)(v8 + 24));
  *(_QWORD *)&v17 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_QWORD *)&v17 = &off_1400D41D0;
  WORD4(v17) = 0;
  P = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v17, (__int64)L"\nLink Speed: ", 0xDuLL);
  v10 = P;
  v11 = &unk_1400D44E0;
  if ( P )
    v11 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, 2 * v19);
  if ( v10 )
    ExFreePool(v10);
  *(_QWORD *)&v25 = v22;
  *((_QWORD *)&v25 + 1) = 10LL;
  v26 = 10LL;
  v17 = v25;
  P = (PVOID)10;
  sub_14000139C((__int64)v27, (__int64 *)&v17);
  v12 = v28;
  v13 = &unk_1400D44E0;
  if ( v28 )
    v13 = v28;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v13, 2 * v29);
  if ( v12 )
    ExFreePool(v12);
  *(_QWORD *)&v17 = &off_1400D41D0;
  WORD4(v17) = 0;
  P = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  sub_1400011A8(&v17, (__int64)L"\nDuplex State: ", 0xFuLL);
  v14 = P;
  v15 = &unk_1400D44E0;
  if ( P )
    v15 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v15, 2 * v19);
  if ( v14 )
    ExFreePool(v14);
  v16 = sub_1400800E4(v27, (unsigned int)v23);
  if ( *(_QWORD *)(v16 + 16) )
    v6 = *(void **)(v16 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2LL * *(_QWORD *)(v16 + 24));
  v27[0] = &off_1400D41D0;
  if ( v28 )
    ExFreePool(v28);
  sub_140003840(a2, 0);
}
