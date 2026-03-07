void __fastcall sub_140003050(_QWORD *a1, __int64 a2, int a3)
{
  PVOID v5; // rdi
  PVOID v6; // r12
  PVOID v7; // rdx
  PVOID v8; // rdx
  PVOID v9; // r14
  __int64 v10; // r13
  void *v11; // rdx
  void *v12; // rdx
  PVOID v13; // r15
  PVOID v14; // rdx
  void *v15; // rdx
  PVOID v16; // r15
  PVOID v17; // rdx
  void *v18; // rdx
  PVOID v19; // r15
  PVOID v20; // rdx
  void *v21; // rdx
  void *v22; // rdx
  PVOID v23; // r15
  PVOID v24; // rdx
  void *v25; // rdx
  void *v26; // rdx
  PVOID v27; // r15
  PVOID v28; // rdx
  void *v29; // rdx
  PVOID v30; // r15
  PVOID v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  PVOID v34; // r15
  PVOID v35; // rdx
  void *v36; // rdx
  void *v37; // rdx
  PVOID v38; // r15
  PVOID v39; // rdx
  void *v40; // rdx
  PVOID v41; // r15
  PVOID v42; // rdx
  void *v43; // rdx
  void *v44; // rdx
  PVOID v45; // rsi
  PVOID v46; // rdx
  void *v47; // rdx
  PVOID v48; // rsi
  __int64 (__fastcall **v49)(PVOID); // [rsp+20h] [rbp-50h] BYREF
  __int16 v50; // [rsp+28h] [rbp-48h]
  PVOID v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+38h] [rbp-38h]
  __int64 v53; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall **v54)(PVOID); // [rsp+48h] [rbp-28h] BYREF
  __int16 v55; // [rsp+50h] [rbp-20h]
  PVOID P; // [rsp+58h] [rbp-18h]
  __int64 v57; // [rsp+60h] [rbp-10h]
  __int64 v58; // [rsp+68h] [rbp-8h]
  __int64 v59; // [rsp+B8h] [rbp+48h]

  if ( !a3 )
  {
    v49 = &off_1400D41D0;
    v50 = 0;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1400011A8(&v49, (__int64)L"######################################################", 0x36uLL);
    v54 = &off_1400D41D0;
    v55 = 0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)L"\n# ", 3uLL);
    v5 = &unk_1400D44E0;
    v6 = v51;
    v7 = &unk_1400D44E0;
    if ( v51 )
      v7 = v51;
    v59 = 2 * v52;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v52);
    v8 = &unk_1400D44E0;
    v9 = P;
    v10 = 2 * v57;
    if ( P )
      v8 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v57);
    v11 = &unk_1400D44E0;
    if ( v9 )
      v11 = v9;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v11, v10);
    v12 = &unk_1400D44E0;
    if ( a1[4] )
      v12 = (void *)a1[4];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2LL * a1[5]);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)L" Build Information", 0x12uLL);
    v13 = P;
    v14 = &unk_1400D44E0;
    if ( P )
      v14 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v57);
    if ( v13 )
      ExFreePool(v13);
    v15 = &unk_1400D44E0;
    if ( v9 )
      v15 = v9;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v15, v10);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)L"Compiled on: ", 0xDuLL);
    v16 = P;
    v17 = &unk_1400D44E0;
    if ( P )
      v17 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, 2 * v57);
    if ( v16 )
      ExFreePool(v16);
    v18 = &unk_1400D44E0;
    if ( a1[9] )
      v18 = (void *)a1[9];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v18, 2LL * a1[10]);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)L", ", 2uLL);
    v19 = P;
    v20 = &unk_1400D44E0;
    if ( P )
      v20 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v20, 2 * v57);
    if ( v19 )
      ExFreePool(v19);
    v21 = &unk_1400D44E0;
    if ( a1[14] )
      v21 = (void *)a1[14];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v21, 2LL * a1[15]);
    v22 = &unk_1400D44E0;
    if ( v9 )
      v22 = v9;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v22, v10);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)L"Git Hash: ", 0xAuLL);
    v23 = P;
    v24 = &unk_1400D44E0;
    if ( P )
      v24 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v24, 2 * v57);
    if ( v23 )
      ExFreePool(v23);
    v25 = &unk_1400D44E0;
    if ( a1[19] )
      v25 = (void *)a1[19];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v25, 2LL * a1[20]);
    v26 = &unk_1400D44E0;
    if ( v9 )
      v26 = v9;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v26, v10);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)L"Configuration: ", 0xFuLL);
    v27 = P;
    v28 = &unk_1400D44E0;
    if ( P )
      v28 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v28, 2 * v57);
    if ( v27 )
      ExFreePool(v27);
    v29 = &unk_1400D44E0;
    if ( a1[29] )
      v29 = (void *)a1[29];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v29, 2LL * a1[30]);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)L", ", 2uLL);
    v30 = P;
    v31 = &unk_1400D44E0;
    if ( P )
      v31 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v31, 2 * v57);
    if ( v30 )
      ExFreePool(v30);
    v32 = &unk_1400D44E0;
    if ( a1[24] )
      v32 = (void *)a1[24];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v32, 2LL * a1[25]);
    v33 = &unk_1400D44E0;
    if ( v9 )
      v33 = v9;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v33, v10);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)L"WDK Version: ", 0xDuLL);
    v34 = P;
    v35 = &unk_1400D44E0;
    if ( P )
      v35 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v35, 2 * v57);
    if ( v34 )
      ExFreePool(v34);
    v36 = &unk_1400D44E0;
    if ( a1[34] )
      v36 = (void *)a1[34];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v36, 2LL * a1[35]);
    v37 = &unk_1400D44E0;
    if ( v9 )
      v37 = v9;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v37, v10);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)L"Net Adapter Version: ", 0x15uLL);
    v38 = P;
    v39 = &unk_1400D44E0;
    if ( P )
      v39 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v39, 2 * v57);
    if ( v38 )
      ExFreePool(v38);
    v40 = &unk_1400D44E0;
    if ( a1[44] )
      v40 = (void *)a1[44];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v40, 2LL * a1[45]);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)qword_1400B7220, 1uLL);
    v41 = P;
    v42 = &unk_1400D44E0;
    if ( P )
      v42 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v42, 2 * v57);
    if ( v41 )
      ExFreePool(v41);
    v43 = &unk_1400D44E0;
    if ( a1[39] )
      v43 = (void *)a1[39];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v43, 2LL * a1[40]);
    v44 = &unk_1400D44E0;
    if ( v9 )
      v44 = v9;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v44, v10);
    v55 = 0;
    v54 = &off_1400D41D0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)qword_1400B6F30, 1uLL);
    v45 = P;
    v46 = &unk_1400D44E0;
    if ( P )
      v46 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v46, 2 * v57);
    if ( v45 )
      ExFreePool(v45);
    v47 = &unk_1400D44E0;
    if ( v6 )
      v47 = v6;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v47, v59);
    v54 = &off_1400D41D0;
    v55 = 0;
    P = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    sub_1400011A8(&v54, (__int64)qword_1400B6F30, 1uLL);
    v48 = P;
    if ( P )
      v5 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2 * v57);
    if ( v48 )
      ExFreePool(v48);
    if ( v9 )
      ExFreePool(v9);
    if ( v6 )
      ExFreePool(v6);
  }
}
