void __fastcall sub_140089D90(_QWORD *a1, __int64 a2)
{
  PVOID v4; // rbx
  void *v5; // rsi
  PVOID v6; // rdx
  PVOID v7; // rdx
  PVOID v8; // rbx
  PVOID v9; // rbx
  PVOID v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r14
  PVOID v13; // r12
  PVOID v14; // r14
  PVOID v15; // rdx
  __int64 (__fastcall **v16)(PVOID); // rax
  PVOID v17; // r13
  PVOID v18; // rdx
  __int64 v19; // r13
  void *v20; // rdx
  __int64 v21; // rax
  void *v22; // rdx
  __int64 (__fastcall **v23)(PVOID); // [rsp+20h] [rbp-E0h] BYREF
  __int16 v24; // [rsp+28h] [rbp-D8h]
  PVOID v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h]
  __int64 v27; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall **v28)(PVOID); // [rsp+48h] [rbp-B8h] BYREF
  __int16 v29; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall **v33)(PVOID); // [rsp+70h] [rbp-90h] BYREF
  __int16 v34; // [rsp+78h] [rbp-88h]
  PVOID v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall **v38)(PVOID); // [rsp+98h] [rbp-68h] BYREF
  __int16 v39; // [rsp+A0h] [rbp-60h]
  PVOID v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v43)(PVOID); // [rsp+C0h] [rbp-40h] BYREF
  __int64 (__fastcall **v44)(); // [rsp+C8h] [rbp-38h]
  unsigned __int64 v45; // [rsp+108h] [rbp+8h]
  __int64 v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 v48; // [rsp+160h] [rbp+60h]

  v23 = &off_1400D41D0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  sub_1400011A8(&v23, (__int64)qword_1400B6F30, 1uLL);
  v28 = &off_1400D41D0;
  v29 = 0;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v28, (__int64)L"Current Rx Filters: \n", 0x15uLL);
  v4 = P;
  v5 = &unk_1400D44E0;
  v6 = &unk_1400D44E0;
  if ( P )
    v6 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v31);
  v28 = &off_1400D41D0;
  if ( v4 )
    ExFreePool(v4);
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_14008A20C(a1, (char *)a1 + 388, a2);
  v33 = &off_1400D41D0;
  v34 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  sub_1400011A8(&v33, (__int64)L"\nSupported Rx Filters: \n", 0x18uLL);
  v7 = v35;
  if ( v35 )
  {
    v8 = v35;
  }
  else
  {
    v7 = &unk_1400D44E0;
    v8 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v36);
  v33 = &off_1400D41D0;
  if ( v8 )
    ExFreePool(v8);
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  sub_14008A20C(a1, a1 + 48, a2);
  v38 = &off_1400D41D0;
  v39 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  sub_1400011A8(&v38, (__int64)L"\nMulticast Address List: ", 0x19uLL);
  v9 = v40;
  v10 = &unk_1400D44E0;
  if ( v40 )
    v10 = v40;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2 * v41);
  v38 = &off_1400D41D0;
  if ( v9 )
    ExFreePool(v9);
  v11 = a1[53];
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = a1[51];
  v13 = v25;
  v48 = v26;
  v23 = &off_1400D41D0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( v12 )
  {
    sub_1400011A8(&v23, (__int64)L"size", 4uLL);
    sub_1400120E0((__int64)&v43, (__int64)&v23);
    v47 = 10LL;
    v44 = off_1400D4720;
    v16 = &off_1400D46F8;
    v43 = &off_1400D46F8;
    v45 = 0xA5A5A5A5A5000012uLL;
    v46 = v12;
    if ( v25 )
    {
      ExFreePool(v25);
      v16 = v43;
    }
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v16[4])(&v43, a2);
    v24 = 0;
    v23 = &off_1400D41D0;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    sub_1400011A8(&v23, (__int64)qword_1400B6F30, 1uLL);
    v17 = v25;
    v18 = &unk_1400D44E0;
    if ( v25 )
      v18 = v25;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v18, 2 * v26);
    if ( v17 )
      ExFreePool(v17);
    v43 = &off_1400D46F8;
    v44 = off_1400D4720;
    sub_140005CFC(&v43);
    v19 = 0LL;
    do
    {
      v20 = &unk_1400D44E0;
      if ( v13 )
        v20 = v13;
      (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v20, 2 * v48);
      v21 = sub_140088C90(v19 + a1[50], (__int64)&v23);
      v22 = &unk_1400D44E0;
      if ( *(_QWORD *)(v21 + 16) )
        v22 = *(void **)(v21 + 16);
      (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v22, 2LL * *(_QWORD *)(v21 + 24));
      v23 = &off_1400D41D0;
      if ( v25 )
        ExFreePool(v25);
      v19 += 16LL;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    sub_1400011A8(&v23, (__int64)L"Empty", 5uLL);
    v14 = v25;
    v15 = &unk_1400D44E0;
    if ( v25 )
      v15 = v25;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v15, 2 * v26);
    if ( v14 )
      ExFreePool(v14);
  }
  if ( v13 )
    v5 = v13;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5, 2 * v48);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
  if ( v13 )
    ExFreePool(v13);
}
