__int64 __fastcall sub_1400A05C8(_QWORD *a1, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  _BYTE *v6; // r13
  PVOID v8; // rbx
  void *v9; // rsi
  void *v10; // rdx
  __int64 v11; // r8
  void *v12; // rax
  __int64 v13; // r8
  void *v14; // rdx
  __int64 v15; // r8
  void *v16; // rdx
  void *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r8
  void *v20; // rdx
  void *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  _BYTE *v24; // rbx
  const wchar_t *v25; // rdx
  unsigned __int64 v26; // r8
  PVOID v27; // rdx
  PVOID v28; // r15
  __int64 v29; // r8
  void *v30; // rdx
  void *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r8
  void *v34; // rdx
  void *v35; // rax
  __int64 v36; // r8
  PVOID v37; // rdx
  PVOID v38; // rbx
  __int64 v39; // r8
  void *v40; // rax
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // r8
  __int64 v44; // rdx
  __int64 result; // rax
  __int128 v46; // [rsp+28h] [rbp-59h] BYREF
  PVOID v47; // [rsp+38h] [rbp-49h]
  __int64 v48; // [rsp+40h] [rbp-41h]
  __int64 v49; // [rsp+48h] [rbp-39h]
  __int128 v50; // [rsp+58h] [rbp-29h] BYREF
  PVOID P; // [rsp+68h] [rbp-19h]
  unsigned __int64 v52; // [rsp+70h] [rbp-11h]
  _BYTE v53[8]; // [rsp+88h] [rbp+7h] BYREF
  _BYTE *v54; // [rsp+90h] [rbp+Fh]
  __int64 v55; // [rsp+A8h] [rbp+27h]

  *(_QWORD *)&v50 = a2[4];
  *((_QWORD *)&v50 + 1) = 10LL;
  P = (PVOID)10;
  v6 = a4;
  v46 = v50;
  v47 = (PVOID)10;
  sub_14000139C((__int64)&v50, (__int64 *)&v46);
  v8 = P;
  if ( a3[2] )
    sub_140001480(a3, (__int64)P, v52);
  else
    sub_1400011A8(a3, (__int64)P, v52);
  if ( v8 )
    ExFreePool(v8);
  v9 = &unk_1400D44E0;
  v10 = &unk_1400D44E0;
  if ( *v6 )
    v11 = a1[1];
  else
    v11 = a1[2];
  v12 = *(void **)(v11 + 16);
  v13 = *(_QWORD *)(v11 + 24);
  if ( v12 )
    v10 = v12;
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v10, 2 * v13);
  v14 = &unk_1400D44E0;
  if ( a3[2] )
    v14 = (void *)a3[2];
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v14, 2LL * a3[3]);
  v15 = a1[3];
  v16 = &unk_1400D44E0;
  v17 = *(void **)(v15 + 16);
  v18 = *(_QWORD *)(v15 + 24);
  if ( v17 )
    v16 = v17;
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v16, 2 * v18);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 40LL))(a2, *a1, 0LL);
  v19 = a1[4];
  v20 = &unk_1400D44E0;
  v21 = *(void **)(v19 + 16);
  v22 = *(_QWORD *)(v19 + 24);
  if ( v21 )
    v20 = v21;
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v20, 2 * v22);
  (*(void (__fastcall **)(_QWORD *, _BYTE *))(*a2 + 56LL))(a2, v53);
  v23 = v55;
  v24 = v54;
  if ( v55 )
  {
    if ( v54 != v53 )
    {
      do
      {
        *(_QWORD *)&v46 = &off_1400D41D0;
        WORD4(v46) = 0;
        v47 = 0LL;
        v48 = 0LL;
        v49 = 0LL;
        if ( *((_DWORD *)v24 + 4) )
        {
          v25 = L"Unknown";
          v26 = 7LL;
        }
        else
        {
          v25 = L"Text";
          v26 = 4LL;
        }
        sub_1400011A8(&v46, (__int64)v25, v26);
        v27 = &unk_1400D44E0;
        v28 = v47;
        if ( v47 )
          v27 = v47;
        (*(void (__fastcall **)(_QWORD, PVOID, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v27, 2 * v48);
        if ( v28 )
          ExFreePool(v28);
        v29 = a1[5];
        v30 = &unk_1400D44E0;
        v31 = *(void **)(v29 + 16);
        v32 = *(_QWORD *)(v29 + 24);
        if ( v31 )
          v30 = v31;
        (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v30, 2 * v32);
        v24 = (_BYTE *)*((_QWORD *)v24 + 1);
      }
      while ( v24 != v53 );
      v23 = v55;
      v6 = a4;
    }
    if ( v23 )
    {
      do
        sub_1400A4398(v53, v54);
      while ( v55 );
    }
  }
  v33 = a1[6];
  v34 = &unk_1400D44E0;
  v35 = *(void **)(v33 + 16);
  v36 = *(_QWORD *)(v33 + 24);
  if ( v35 )
    v34 = v35;
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v34, 2 * v36);
  *(_QWORD *)&v50 = (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 24LL))(a2) | 0xA00000000LL;
  DWORD2(v50) = 10;
  sub_1400042F0((__int64)&v46, (int *)&v50);
  v37 = &unk_1400D44E0;
  v38 = v47;
  if ( v47 )
    v37 = v47;
  (*(void (__fastcall **)(_QWORD, PVOID, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v37, 2 * v48);
  if ( v38 )
    ExFreePool(v38);
  v39 = a1[7];
  v40 = *(void **)(v39 + 16);
  v41 = *(_QWORD *)(v39 + 24);
  if ( v40 )
    v9 = v40;
  (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v9, 2 * v41);
  v42 = a1[5];
  v43 = *(_QWORD *)(v42 + 24);
  v44 = *(_QWORD *)(v42 + 16);
  if ( a3[2] )
    result = sub_140001480(a3, v44, v43);
  else
    result = sub_1400011A8(a3, v44, v43);
  *v6 = 1;
  return result;
}
