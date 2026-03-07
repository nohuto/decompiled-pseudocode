void __fastcall sub_140080E30(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 (__fastcall **v5)(PVOID); // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  PVOID v7; // rsi
  void *v8; // rbx
  PVOID v9; // rdx
  PVOID v10; // rsi
  PVOID v11; // rdx
  PVOID v12; // rsi
  PVOID v13; // rdx
  PVOID v14; // rsi
  PVOID v15; // rdx
  __int64 v16; // rax
  void *v17; // rdx
  PVOID v18; // rsi
  PVOID v19; // rdx
  PVOID v20; // rsi
  PVOID v21; // rdx
  PVOID v22; // rsi
  PVOID v23; // rdx
  __int64 v24; // rax
  void *v25; // rdx
  PVOID v26; // rsi
  PVOID v27; // rdx
  __int64 v28; // rax
  __int128 v29; // [rsp+28h] [rbp-E0h] BYREF
  PVOID P; // [rsp+38h] [rbp-D0h]
  __int64 v31; // [rsp+40h] [rbp-C8h]
  __int64 v32; // [rsp+48h] [rbp-C0h]
  __int128 v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+68h] [rbp-A0h]
  _QWORD v35[2]; // [rsp+70h] [rbp-98h] BYREF
  PVOID v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall **v38)(PVOID); // [rsp+98h] [rbp-70h] BYREF
  __int16 v39; // [rsp+A0h] [rbp-68h]
  PVOID v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  __int64 v42; // [rsp+B8h] [rbp-50h]
  __int64 (__fastcall **v43)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int64 (__fastcall **v44)(); // [rsp+D0h] [rbp-38h]
  unsigned __int64 v45; // [rsp+110h] [rbp+8h]
  BOOL v46; // [rsp+118h] [rbp+10h]

  v38 = &off_1400D41D0;
  v39 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  sub_1400011A8(&v38, (__int64)qword_1400B6F30, 1uLL);
  *(_QWORD *)&v29 = &off_1400D41D0;
  WORD4(v29) = 0;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v29, (__int64)L"m_enabled", 9uLL);
  v4 = *(_BYTE *)(a1 + 368);
  sub_1400120E0((__int64)&v43, (__int64)&v29);
  v44 = off_1400D59C0;
  v5 = &off_1400D5998;
  v43 = &off_1400D5998;
  v45 = 0xA5A5A5A5A5000013uLL;
  v46 = v4 != 0;
  if ( P )
  {
    ExFreePool(P);
    v5 = v43;
  }
  v6 = (void (__fastcall *)(__int64, __int64))v5[4];
  if ( v6 == sub_140007740 )
    sub_140007740((__int64)&v43, a2);
  else
    v6((__int64)&v43, a2);
  *(_QWORD *)&v29 = &off_1400D41D0;
  WORD4(v29) = 0;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v29, (__int64)qword_1400B6F30, 1uLL);
  v7 = P;
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  if ( P )
    v9 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v31);
  if ( v7 )
    ExFreePool(v7);
  v43 = &off_1400D5998;
  v44 = off_1400D59C0;
  sub_140005CFC(&v43);
  *(_QWORD *)&v29 = &off_1400D41D0;
  WORD4(v29) = 0;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v29, (__int64)L"\nIndirection table size: ", 0x19uLL);
  v10 = P;
  v11 = &unk_1400D44E0;
  if ( P )
    v11 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, 2 * v31);
  if ( v10 )
    ExFreePool(v10);
  *(_QWORD *)&v33 = *(_QWORD *)(a1 + 392);
  *((_QWORD *)&v33 + 1) = 10LL;
  v34 = 10LL;
  v29 = v33;
  P = (PVOID)10;
  sub_14000139C((__int64)v35, (__int64 *)&v29);
  v12 = v36;
  v13 = &unk_1400D44E0;
  if ( v36 )
    v13 = v36;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v13, 2 * v37);
  if ( v12 )
    ExFreePool(v12);
  *(_QWORD *)&v29 = &off_1400D41D0;
  WORD4(v29) = 0;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v29, (__int64)L"\nUnhashed target type: ", 0x17uLL);
  v14 = P;
  v15 = &unk_1400D44E0;
  if ( P )
    v15 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v15, 2 * v31);
  if ( v14 )
    ExFreePool(v14);
  v16 = sub_1400820C8(v35, a1 + 400);
  v17 = &unk_1400D44E0;
  if ( *(_QWORD *)(v16 + 16) )
    v17 = *(void **)(v16 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, 2LL * *(_QWORD *)(v16 + 24));
  v35[0] = &off_1400D41D0;
  if ( v36 )
    ExFreePool(v36);
  *(_QWORD *)&v29 = &off_1400D41D0;
  WORD4(v29) = 0;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v29, (__int64)L"\nUnhashed target index: ", 0x18uLL);
  v18 = P;
  v19 = &unk_1400D44E0;
  if ( P )
    v19 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v19, 2 * v31);
  if ( v18 )
    ExFreePool(v18);
  *(_QWORD *)&v33 = *(_QWORD *)(a1 + 408);
  *((_QWORD *)&v33 + 1) = 10LL;
  v34 = 10LL;
  v29 = v33;
  P = (PVOID)10;
  sub_14000139C((__int64)v35, (__int64 *)&v29);
  v20 = v36;
  v21 = &unk_1400D44E0;
  if ( v36 )
    v21 = v36;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v21, 2 * v37);
  if ( v20 )
    ExFreePool(v20);
  *(_QWORD *)&v29 = &off_1400D41D0;
  WORD4(v29) = 0;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v29, (__int64)L"\nSupported hash types: ", 0x17uLL);
  v22 = P;
  v23 = &unk_1400D44E0;
  if ( P )
    v23 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v23, 2 * v31);
  if ( v22 )
    ExFreePool(v22);
  v24 = sub_14008155C(v35, a1 + 416);
  v25 = &unk_1400D44E0;
  if ( *(_QWORD *)(v24 + 16) )
    v25 = *(void **)(v24 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v25, 2LL * *(_QWORD *)(v24 + 24));
  v35[0] = &off_1400D41D0;
  if ( v36 )
    ExFreePool(v36);
  *(_QWORD *)&v29 = &off_1400D41D0;
  WORD4(v29) = 0;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v29, (__int64)L"\nSupported protocol types: ", 0x1BuLL);
  v26 = P;
  v27 = &unk_1400D44E0;
  if ( P )
    v27 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v27, 2 * v31);
  if ( v26 )
    ExFreePool(v26);
  v28 = sub_1400815B4(v35, a1 + 420);
  if ( *(_QWORD *)(v28 + 16) )
    v8 = *(void **)(v28 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2LL * *(_QWORD *)(v28 + 24));
  v35[0] = &off_1400D41D0;
  if ( v36 )
    ExFreePool(v36);
  sub_140003840(a2, 0);
  if ( v40 )
    ExFreePool(v40);
}
