void __fastcall sub_14009C760(unsigned __int8 *a1, __int64 a2)
{
  PVOID v4; // rsi
  void *v5; // rdi
  PVOID v6; // rdx
  PVOID v7; // rsi
  PVOID v8; // rdx
  void *v9; // rdx
  PVOID v10; // rsi
  PVOID v11; // rdx
  void *v12; // rdx
  PVOID v13; // rsi
  PVOID v14; // rdx
  void *v15; // rdx
  PVOID v16; // rsi
  PVOID v17; // rdx
  PVOID v18; // rsi
  PVOID v19; // rdx
  void *v20; // rdx
  PVOID v21; // rsi
  PVOID v22; // rdx
  void *v23; // rdx
  PVOID v24; // rsi
  PVOID v25; // rdx
  __int64 v26; // rdi
  char *v27; // rbx
  void *v28; // rcx
  __int64 (__fastcall **v29)(PVOID); // [rsp+28h] [rbp-49h] BYREF
  __int16 v30; // [rsp+30h] [rbp-41h]
  PVOID P; // [rsp+38h] [rbp-39h]
  __int64 v32; // [rsp+40h] [rbp-31h]
  __int64 v33; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall **v34)(PVOID); // [rsp+58h] [rbp-19h] BYREF
  __int16 v35; // [rsp+60h] [rbp-11h]
  __int64 v36; // [rsp+68h] [rbp-9h]
  _QWORD v37[2]; // [rsp+70h] [rbp-1h]
  __int64 (__fastcall **v38)(PVOID); // [rsp+80h] [rbp+Fh] BYREF
  __int16 v39; // [rsp+88h] [rbp+17h]
  __int64 v40; // [rsp+90h] [rbp+1Fh]
  __int64 v41; // [rsp+98h] [rbp+27h]
  __int64 v42; // [rsp+A0h] [rbp+2Fh]
  char v43; // [rsp+A8h] [rbp+37h] BYREF

  v34 = &off_1400D41D0;
  v35 = 0;
  v36 = 0LL;
  v37[0] = 0LL;
  v37[1] = 0LL;
  sub_1400011A8(&v34, (__int64)L"Disabled\n", 9uLL);
  v38 = &off_1400D41D0;
  v39 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  sub_1400011A8(&v38, (__int64)L"Enabled\n", 8uLL);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Tx Configuration:\n", 0x12uLL);
  v4 = P;
  v5 = &unk_1400D44E0;
  v6 = &unk_1400D44E0;
  if ( P )
    v6 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v32);
  if ( v4 )
    ExFreePool(v4);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"IPv4: ", 6uLL);
  v7 = P;
  v8 = &unk_1400D44E0;
  if ( P )
    v8 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v32);
  if ( v7 )
    ExFreePool(v7);
  v9 = &unk_1400D44E0;
  if ( v37[5 * a1[384] - 1] )
    v9 = (void *)v37[5 * a1[384] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2LL * v37[5 * a1[384]]);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"TCP: ", 5uLL);
  v10 = P;
  v11 = &unk_1400D44E0;
  if ( P )
    v11 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, 2 * v32);
  if ( v10 )
    ExFreePool(v10);
  v12 = &unk_1400D44E0;
  if ( v37[5 * a1[385] - 1] )
    v12 = (void *)v37[5 * a1[385] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2LL * v37[5 * a1[385]]);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"UDP: ", 5uLL);
  v13 = P;
  v14 = &unk_1400D44E0;
  if ( P )
    v14 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v32);
  if ( v13 )
    ExFreePool(v13);
  v15 = &unk_1400D44E0;
  if ( v37[5 * a1[386] - 1] )
    v15 = (void *)v37[5 * a1[386] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v15, 2LL * v37[5 * a1[386]]);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"\nRx Configuration:\n", 0x13uLL);
  v16 = P;
  v17 = &unk_1400D44E0;
  if ( P )
    v17 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, 2 * v32);
  if ( v16 )
    ExFreePool(v16);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"IPv4: ", 6uLL);
  v18 = P;
  v19 = &unk_1400D44E0;
  if ( P )
    v19 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v19, 2 * v32);
  if ( v18 )
    ExFreePool(v18);
  v20 = &unk_1400D44E0;
  if ( v37[5 * a1[387] - 1] )
    v20 = (void *)v37[5 * a1[387] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v20, 2LL * v37[5 * a1[387]]);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"TCP: ", 5uLL);
  v21 = P;
  v22 = &unk_1400D44E0;
  if ( P )
    v22 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v22, 2 * v32);
  if ( v21 )
    ExFreePool(v21);
  v23 = &unk_1400D44E0;
  if ( v37[5 * a1[388] - 1] )
    v23 = (void *)v37[5 * a1[388] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v23, 2LL * v37[5 * a1[388]]);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"UDP: ", 5uLL);
  v24 = P;
  v25 = &unk_1400D44E0;
  if ( P )
    v25 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v25, 2 * v32);
  if ( v24 )
    ExFreePool(v24);
  if ( v37[5 * a1[389] - 1] )
    v5 = (void *)v37[5 * a1[389] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2LL * v37[5 * a1[389]]);
  v26 = 2LL;
  v27 = &v43;
  do
  {
    v27 -= 40;
    --v26;
    v28 = (void *)*((_QWORD *)v27 + 2);
    *(_QWORD *)v27 = &off_1400D41D0;
    if ( v28 )
      ExFreePool(v28);
    *((_QWORD *)v27 + 2) = 0LL;
    *((_QWORD *)v27 + 3) = 0LL;
    *((_QWORD *)v27 + 4) = 0LL;
  }
  while ( v26 );
}
