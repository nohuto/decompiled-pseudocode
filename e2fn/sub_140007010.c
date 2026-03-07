void __fastcall sub_140007010(__int64 a1, __int64 a2, int a3)
{
  PVOID v5; // rsi
  PVOID v6; // rdx
  _QWORD *v7; // rax
  void *v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  const wchar_t *v12; // rdx
  PVOID v13; // rsi
  PVOID v14; // rdx
  __int64 v15; // r8
  void *v16; // rdx
  void *v17; // rax
  __int64 v18; // r8
  PVOID v19; // rsi
  PVOID v20; // rdx
  PVOID v21; // rsi
  PVOID v22; // rdx
  PVOID v23; // rsi
  PVOID v24; // rdx
  PVOID v25; // rsi
  PVOID v26; // rdx
  PVOID v27; // rsi
  PVOID v28; // rdx
  PVOID v29; // rdx
  PVOID v30; // rsi
  PVOID v31; // rsi
  PVOID v32; // rdx
  PVOID v33; // rsi
  PVOID v34; // rdx
  __int64 (__fastcall ***v35)(PVOID); // rdi
  void *v36; // rdx
  __int64 v37; // r8
  void *v38; // rdi
  __int64 (__fastcall **v39)(PVOID); // [rsp+20h] [rbp-59h] BYREF
  __int16 v40; // [rsp+28h] [rbp-51h]
  PVOID P; // [rsp+30h] [rbp-49h]
  __int64 v42; // [rsp+38h] [rbp-41h]
  __int64 v43; // [rsp+40h] [rbp-39h]
  int v44; // [rsp+50h] [rbp-29h] BYREF
  int v45; // [rsp+54h] [rbp-25h]
  int v46; // [rsp+58h] [rbp-21h]
  _QWORD v47[2]; // [rsp+60h] [rbp-19h] BYREF
  PVOID v48; // [rsp+70h] [rbp-9h]
  __int64 v49; // [rsp+78h] [rbp-1h]
  __int64 v50; // [rsp+80h] [rbp+7h]
  __int64 (__fastcall **v51)(PVOID); // [rsp+88h] [rbp+Fh] BYREF
  __int16 v52; // [rsp+90h] [rbp+17h]
  void *v53; // [rsp+98h] [rbp+1Fh]
  __int64 v54; // [rsp+A0h] [rbp+27h]
  __int64 v55; // [rsp+A8h] [rbp+2Fh]

  if ( a3 )
    return;
  v40 = 0;
  P = 0LL;
  v42 = 0LL;
  v39 = &off_1400D41D0;
  v43 = 0LL;
  sub_1400011A8(&v39, (__int64)qword_1400B7400, 1uLL);
  v5 = P;
  v6 = &unk_1400D44E0;
  if ( P )
    v6 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v42);
  if ( v5 )
    ExFreePool(v5);
  v39 = &off_1400D41D0;
  v40 = 0;
  P = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  sub_1400011A8(&v39, (__int64)qword_1400B7580, 1uLL);
  v7 = sub_1400017B4(v47, *(_QWORD *)(a1 + 72), (__int64)&v39);
  v8 = &unk_1400D44E0;
  if ( v7[2] )
    v8 = (void *)v7[2];
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2LL * v7[3]);
  v47[0] = &off_1400D41D0;
  if ( v48 )
    ExFreePool(v48);
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v39 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v9 = *(_DWORD *)(a1 + 8);
  if ( !v9 )
  {
    v12 = L"][Critical][";
    goto LABEL_20;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v12 = L"][Error   ][";
    goto LABEL_20;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = L"][Warning ][";
    goto LABEL_20;
  }
  if ( v11 == 1 )
  {
    v12 = L"][Info    ][";
LABEL_20:
    v39 = &off_1400D41D0;
    v40 = 0;
    P = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    sub_1400011A8(&v39, (__int64)v12, 0xCuLL);
    v13 = P;
    v14 = &unk_1400D44E0;
    if ( P )
      v14 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v42);
    if ( v13 )
      ExFreePool(v13);
  }
  v15 = *(_QWORD *)(a1 + 16);
  v16 = &unk_1400D44E0;
  v17 = *(void **)(v15 + 16);
  v18 = *(_QWORD *)(v15 + 24);
  if ( v17 )
    v16 = v17;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v16, 2 * v18);
  v39 = &off_1400D41D0;
  v40 = 0;
  P = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  sub_1400011A8(&v39, (__int64)L"][File ", 7uLL);
  v19 = P;
  v20 = &unk_1400D44E0;
  if ( P )
    v20 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v20, 2 * v42);
  if ( v19 )
    ExFreePool(v19);
  v44 = *(_DWORD *)(a1 + 84);
  v45 = 10;
  v46 = 10;
  sub_1400042F0((__int64)v47, &v44);
  v21 = v48;
  v22 = &unk_1400D44E0;
  if ( v48 )
    v22 = v48;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v22, 2 * v49);
  if ( v21 )
    ExFreePool(v21);
  v39 = &off_1400D41D0;
  v40 = 0;
  P = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  sub_1400011A8(&v39, (__int64)L"][Line ", 7uLL);
  v23 = P;
  v24 = &unk_1400D44E0;
  if ( P )
    v24 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v24, 2 * v42);
  if ( v23 )
    ExFreePool(v23);
  v44 = *(_DWORD *)(a1 + 80);
  v45 = 10;
  v46 = 10;
  sub_1400042F0((__int64)v47, &v44);
  v25 = v48;
  v26 = &unk_1400D44E0;
  if ( v48 )
    v26 = v48;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v26, 2 * v49);
  if ( v25 )
    ExFreePool(v25);
  v39 = &off_1400D41D0;
  v40 = 0;
  P = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  sub_1400011A8(&v39, (__int64)L"] ", 2uLL);
  v27 = P;
  v28 = &unk_1400D44E0;
  if ( P )
    v28 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v28, 2 * v42);
  if ( v27 )
    ExFreePool(v27);
  v39 = &off_1400D41D0;
  v40 = 0;
  P = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  sub_1400011A8(&v39, (__int64)L"][Status 0x", 0xBuLL);
  v29 = P;
  if ( P )
  {
    v30 = P;
  }
  else
  {
    v29 = &unk_1400D44E0;
    v30 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v29, 2 * v42);
  if ( v30 )
    ExFreePool(v30);
  v44 = *(_DWORD *)(a1 + 88);
  v45 = 16;
  v46 = 10;
  sub_1400042F0((__int64)v47, &v44);
  v31 = v48;
  v32 = &unk_1400D44E0;
  if ( v48 )
    v32 = v48;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v32, 2 * v49);
  if ( v31 )
    ExFreePool(v31);
  v39 = &off_1400D41D0;
  v40 = 0;
  P = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  sub_1400011A8(&v39, (__int64)L"] ", 2uLL);
  v33 = P;
  v34 = &unk_1400D44E0;
  if ( P )
    v34 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v34, 2 * v42);
  if ( v33 )
    ExFreePool(v33);
  v35 = (__int64 (__fastcall ***)(PVOID))(a1 + 32);
  v51 = &off_1400D41D0;
  v52 = 0;
  v54 = 0LL;
  v36 = 0LL;
  v53 = 0LL;
  v37 = 0LL;
  v55 = 0LL;
  if ( &v51 != v35 )
  {
    sub_1400011A8(&v51, (__int64)v35[2], (unsigned __int64)v35[3]);
    v37 = v54;
    v36 = v53;
  }
  if ( v36 )
  {
    v38 = v36;
  }
  else
  {
    v36 = &unk_1400D44E0;
    v38 = 0LL;
  }
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v36, 2 * v37);
  if ( v38 )
    ExFreePool(v38);
}
