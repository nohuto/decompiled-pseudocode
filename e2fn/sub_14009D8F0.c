void __fastcall sub_14009D8F0(unsigned __int8 *a1, __int64 a2)
{
  PVOID v4; // rdx
  PVOID v5; // rdi
  PVOID v6; // rsi
  __int64 v7; // rsi
  PVOID v8; // r14
  PVOID v9; // rdx
  void *v10; // rdx
  PVOID v11; // r14
  PVOID v12; // rdx
  PVOID v13; // r14
  PVOID v14; // rdx
  PVOID v15; // r14
  PVOID v16; // rdx
  void *v17; // rdx
  PVOID v18; // r14
  PVOID v19; // rdx
  PVOID v20; // r14
  PVOID v21; // rdx
  PVOID v22; // r14
  PVOID v23; // rdx
  void *v24; // rdx
  PVOID v25; // r14
  PVOID v26; // rdx
  PVOID v27; // rdx
  PVOID v28; // r14
  PVOID v29; // r14
  PVOID v30; // rdx
  void *v31; // rdx
  PVOID v32; // r14
  char *v33; // rbx
  void *v34; // rcx
  __int64 (__fastcall **v35)(PVOID); // [rsp+28h] [rbp-49h] BYREF
  __int16 v36; // [rsp+30h] [rbp-41h]
  PVOID P; // [rsp+38h] [rbp-39h]
  __int64 v38; // [rsp+40h] [rbp-31h]
  __int64 v39; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall **v40)(PVOID); // [rsp+58h] [rbp-19h] BYREF
  __int16 v41; // [rsp+60h] [rbp-11h]
  __int64 v42; // [rsp+68h] [rbp-9h]
  _QWORD v43[2]; // [rsp+70h] [rbp-1h]
  __int64 (__fastcall **v44)(PVOID); // [rsp+80h] [rbp+Fh] BYREF
  __int16 v45; // [rsp+88h] [rbp+17h]
  __int64 v46; // [rsp+90h] [rbp+1Fh]
  __int64 v47; // [rsp+98h] [rbp+27h]
  __int64 v48; // [rsp+A0h] [rbp+2Fh]
  char v49; // [rsp+A8h] [rbp+37h] BYREF

  v40 = &off_1400D41D0;
  v41 = 0;
  v42 = 0LL;
  v43[0] = 0LL;
  v43[1] = 0LL;
  sub_1400011A8(&v40, (__int64)L"Disabled", 8uLL);
  v44 = &off_1400D41D0;
  v45 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  sub_1400011A8(&v44, (__int64)L"Enabled", 7uLL);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)L"lsoIpv4", 7uLL);
  v4 = P;
  v5 = &unk_1400D44E0;
  if ( P )
  {
    v6 = P;
  }
  else
  {
    v4 = &unk_1400D44E0;
    v6 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v4, 2 * v38);
  if ( v6 )
    ExFreePool(v6);
  v7 = 2LL;
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)L": ", 2uLL);
  v8 = P;
  v9 = &unk_1400D44E0;
  if ( P )
    v9 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v38);
  if ( v8 )
    ExFreePool(v8);
  v10 = &unk_1400D44E0;
  if ( v43[5 * a1[448] - 1] )
    v10 = (void *)v43[5 * a1[448] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2LL * v43[5 * a1[448]]);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)qword_1400B6F30, 1uLL);
  v11 = P;
  v12 = &unk_1400D44E0;
  if ( P )
    v12 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2 * v38);
  if ( v11 )
    ExFreePool(v11);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)L"lsoIpv6", 7uLL);
  v13 = P;
  v14 = &unk_1400D44E0;
  if ( P )
    v14 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v38);
  if ( v13 )
    ExFreePool(v13);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)L": ", 2uLL);
  v15 = P;
  v16 = &unk_1400D44E0;
  if ( P )
    v16 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v16, 2 * v38);
  if ( v15 )
    ExFreePool(v15);
  v17 = &unk_1400D44E0;
  if ( v43[5 * a1[449] - 1] )
    v17 = (void *)v43[5 * a1[449] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, 2LL * v43[5 * a1[449]]);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)qword_1400B6F30, 1uLL);
  v18 = P;
  v19 = &unk_1400D44E0;
  if ( P )
    v19 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v19, 2 * v38);
  if ( v18 )
    ExFreePool(v18);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)L"usoIpv4", 7uLL);
  v20 = P;
  v21 = &unk_1400D44E0;
  if ( P )
    v21 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v21, 2 * v38);
  if ( v20 )
    ExFreePool(v20);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)L": ", 2uLL);
  v22 = P;
  v23 = &unk_1400D44E0;
  if ( P )
    v23 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v23, 2 * v38);
  if ( v22 )
    ExFreePool(v22);
  v24 = &unk_1400D44E0;
  if ( v43[5 * a1[450] - 1] )
    v24 = (void *)v43[5 * a1[450] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v24, 2LL * v43[5 * a1[450]]);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)qword_1400B6F30, 1uLL);
  v25 = P;
  v26 = &unk_1400D44E0;
  if ( P )
    v26 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v26, 2 * v38);
  if ( v25 )
    ExFreePool(v25);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)L"usoIpv6", 7uLL);
  v27 = P;
  if ( P )
  {
    v28 = P;
  }
  else
  {
    v27 = &unk_1400D44E0;
    v28 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v27, 2 * v38);
  if ( v28 )
    ExFreePool(v28);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)L": ", 2uLL);
  v29 = P;
  v30 = &unk_1400D44E0;
  if ( P )
    v30 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v30, 2 * v38);
  if ( v29 )
    ExFreePool(v29);
  v31 = &unk_1400D44E0;
  if ( v43[5 * a1[451] - 1] )
    v31 = (void *)v43[5 * a1[451] - 1];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v31, 2LL * v43[5 * a1[451]]);
  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)qword_1400B6F30, 1uLL);
  v32 = P;
  if ( P )
    v5 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2 * v38);
  if ( v32 )
    ExFreePool(v32);
  v33 = &v49;
  do
  {
    v33 -= 40;
    --v7;
    v34 = (void *)*((_QWORD *)v33 + 2);
    *(_QWORD *)v33 = &off_1400D41D0;
    if ( v34 )
      ExFreePool(v34);
    *((_QWORD *)v33 + 2) = 0LL;
    *((_QWORD *)v33 + 3) = 0LL;
    *((_QWORD *)v33 + 4) = 0LL;
  }
  while ( v7 );
}
