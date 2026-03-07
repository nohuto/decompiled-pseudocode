void __fastcall sub_1400A0204(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  PVOID v6; // rbx
  __int64 v7; // r8
  void *v8; // r14
  void *v9; // rdx
  void *v10; // rax
  __int64 v11; // r8
  void *v12; // rdx
  __int64 v13; // r8
  void *v14; // rdx
  void *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // r8
  void *v19; // rdx
  void *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  _BYTE *v23; // rbx
  const wchar_t *v24; // rdx
  unsigned __int64 v25; // r8
  PVOID v26; // rdx
  PVOID v27; // r15
  __int64 v28; // r8
  void *v29; // rdx
  void *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  void *v33; // rdx
  void *v34; // rax
  __int64 v35; // r8
  PVOID v36; // rdx
  PVOID v37; // rbx
  __int64 v38; // r8
  void *v39; // rax
  __int64 v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  __int64 v43; // rdx
  __int128 v44; // [rsp+28h] [rbp-79h] BYREF
  PVOID v45; // [rsp+38h] [rbp-69h]
  __int64 v46; // [rsp+40h] [rbp-61h]
  __int64 v47; // [rsp+48h] [rbp-59h]
  __int64 v48; // [rsp+50h] [rbp-51h]
  __int64 v49; // [rsp+58h] [rbp-49h]
  __int64 v50; // [rsp+60h] [rbp-41h]
  _QWORD *v51; // [rsp+68h] [rbp-39h]
  __int128 v52; // [rsp+78h] [rbp-29h] BYREF
  PVOID P; // [rsp+88h] [rbp-19h]
  unsigned __int64 v54; // [rsp+90h] [rbp-11h]
  _BYTE v55[8]; // [rsp+A8h] [rbp+7h] BYREF
  _BYTE *v56; // [rsp+B0h] [rbp+Fh]
  __int64 v57; // [rsp+C8h] [rbp+27h]

  *(_QWORD *)&v52 = *(_QWORD *)(a2 + 72);
  *((_QWORD *)&v52 + 1) = 10LL;
  P = (PVOID)10;
  v44 = v52;
  v45 = (PVOID)10;
  sub_14000139C((__int64)&v52, (__int64 *)&v44);
  v6 = P;
  if ( a3[2] )
    sub_140001480(a3, (__int64)P, v54);
  else
    sub_1400011A8(a3, (__int64)P, v54);
  if ( v6 )
    ExFreePool(v6);
  v7 = a1[1];
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  v10 = *(void **)(v7 + 16);
  v11 = *(_QWORD *)(v7 + 24);
  if ( v10 )
    v9 = v10;
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v9, 2 * v11);
  v12 = &unk_1400D44E0;
  if ( a3[2] )
    v12 = (void *)a3[2];
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v12, 2LL * a3[3]);
  v13 = a1[2];
  v14 = &unk_1400D44E0;
  v15 = *(void **)(v13 + 16);
  v16 = *(_QWORD *)(v13 + 24);
  if ( v15 )
    v14 = v15;
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v14, 2 * v16);
  v17 = a2 + 200;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 200) + 40LL))(a2 + 200, *a1, 0LL);
  if ( sub_140071A64(a2) )
  {
    v18 = a1[3];
    v19 = &unk_1400D44E0;
    v20 = *(void **)(v18 + 16);
    v21 = *(_QWORD *)(v18 + 24);
    if ( v20 )
      v19 = v20;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v19, 2 * v21);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 56LL))(a2 + 200, v55);
    v22 = v57;
    v23 = v56;
    if ( v57 )
    {
      if ( v56 != v55 )
      {
        do
        {
          *(_QWORD *)&v44 = &off_1400D41D0;
          WORD4(v44) = 0;
          v45 = 0LL;
          v46 = 0LL;
          v47 = 0LL;
          if ( *((_DWORD *)v23 + 4) )
          {
            v24 = L"Unknown";
            v25 = 7LL;
          }
          else
          {
            v24 = L"Text";
            v25 = 4LL;
          }
          sub_1400011A8(&v44, (__int64)v24, v25);
          v26 = &unk_1400D44E0;
          v27 = v45;
          if ( v45 )
            v26 = v45;
          (*(void (__fastcall **)(_QWORD, PVOID, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v26, 2 * v46);
          if ( v27 )
            ExFreePool(v27);
          v28 = a1[4];
          v29 = &unk_1400D44E0;
          v30 = *(void **)(v28 + 16);
          v31 = *(_QWORD *)(v28 + 24);
          if ( v30 )
            v29 = v30;
          (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v29, 2 * v31);
          v23 = (_BYTE *)*((_QWORD *)v23 + 1);
        }
        while ( v23 != v55 );
        v22 = v57;
        v17 = a2 + 200;
      }
      if ( v22 )
      {
        do
          sub_1400A4398(v55, v56);
        while ( v57 );
      }
    }
    v32 = a1[5];
    v33 = &unk_1400D44E0;
    v34 = *(void **)(v32 + 16);
    v35 = *(_QWORD *)(v32 + 24);
    if ( v34 )
      v33 = v34;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v33, 2 * v35);
    *(_QWORD *)&v52 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17) | 0xA00000000LL;
    DWORD2(v52) = 10;
    sub_1400042F0((__int64)&v44, (int *)&v52);
    v36 = &unk_1400D44E0;
    v37 = v45;
    if ( v45 )
      v36 = v45;
    (*(void (__fastcall **)(_QWORD, PVOID, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v36, 2 * v46);
    if ( v37 )
      ExFreePool(v37);
  }
  v38 = a1[6];
  v39 = *(void **)(v38 + 16);
  v40 = *(_QWORD *)(v38 + 24);
  if ( v39 )
    v8 = v39;
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v8, 2 * v40);
  v41 = a1[4];
  v42 = *(_QWORD *)(v41 + 24);
  v43 = *(_QWORD *)(v41 + 16);
  if ( a3[2] )
    sub_140001480(a3, v43, v42);
  else
    sub_1400011A8(a3, v43, v42);
  *(_QWORD *)&v44 = *a1;
  *((_QWORD *)&v44 + 1) = a1[7];
  v45 = (PVOID)a1[8];
  v46 = a1[2];
  v47 = a1[3];
  v48 = a1[4];
  v49 = a1[5];
  v50 = a1[6];
  v51 = a3;
  sub_14009F7FC(a2, &v44);
}
