__int64 __fastcall sub_14009FABC(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  PVOID v6; // rbx
  void *v7; // r15
  void *v8; // rdx
  __int64 v9; // r8
  void *v10; // rdx
  void *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // r13
  __int64 v14; // r8
  void *v15; // rdx
  void *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // rbx
  const wchar_t *v20; // rdx
  unsigned __int64 v21; // r8
  PVOID v22; // rdx
  PVOID v23; // r12
  __int64 v24; // r8
  void *v25; // rdx
  void *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r8
  void *v29; // rdx
  void *v30; // rax
  __int64 v31; // r8
  PVOID v32; // rdx
  PVOID v33; // rbx
  __int64 v34; // r8
  void *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned __int64 v38; // r8
  __int64 v39; // rdx
  _QWORD *v40; // rbx
  bool v41; // zf
  __int64 result; // rax
  _QWORD *v43; // rdi
  __int128 v44; // [rsp+28h] [rbp-79h] BYREF
  PVOID P; // [rsp+38h] [rbp-69h]
  unsigned __int64 v46; // [rsp+40h] [rbp-61h]
  __int64 v47; // [rsp+48h] [rbp-59h]
  __int128 v48; // [rsp+58h] [rbp-49h] BYREF
  __int64 v49; // [rsp+68h] [rbp-39h]
  char v50[8]; // [rsp+78h] [rbp-29h] BYREF
  char *v51; // [rsp+80h] [rbp-21h]
  __int64 v52; // [rsp+98h] [rbp-9h]
  _QWORD v53[7]; // [rsp+A0h] [rbp-1h] BYREF

  *(_QWORD *)&v44 = a2[9];
  *((_QWORD *)&v44 + 1) = 10LL;
  P = (PVOID)10;
  v48 = v44;
  v49 = 10LL;
  sub_14000139C((__int64)&v44, (__int64 *)&v48);
  v6 = P;
  if ( a3[2] )
    sub_140001480(a3, (__int64)P, v46);
  else
    sub_1400011A8(a3, (__int64)P, v46);
  if ( v6 )
    ExFreePool(v6);
  if ( sub_140071A64((__int64)a2) )
  {
    v7 = &unk_1400D44E0;
    v8 = &unk_1400D44E0;
    if ( a3[2] )
      v8 = (void *)a3[2];
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v8, 2LL * a3[3]);
    v9 = a1[1];
    v10 = &unk_1400D44E0;
    v11 = *(void **)(v9 + 16);
    v12 = *(_QWORD *)(v9 + 24);
    if ( v11 )
      v10 = v11;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v10, 2 * v12);
    v13 = a2 + 25;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(a2[25] + 40LL))(a2 + 25, *a1, 0LL);
    v14 = a1[2];
    v15 = &unk_1400D44E0;
    v16 = *(void **)(v14 + 16);
    v17 = *(_QWORD *)(v14 + 24);
    if ( v16 )
      v15 = v16;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v15, 2 * v17);
    (*(void (__fastcall **)(_QWORD *, char *))(*v13 + 56LL))(a2 + 25, v50);
    v18 = v52;
    v19 = v51;
    if ( v52 )
    {
      if ( v51 != v50 )
      {
        do
        {
          *(_QWORD *)&v44 = &off_1400D41D0;
          WORD4(v44) = 0;
          P = 0LL;
          v46 = 0LL;
          v47 = 0LL;
          if ( *((_DWORD *)v19 + 4) )
          {
            v20 = L"Unknown";
            v21 = 7LL;
          }
          else
          {
            v20 = L"Text";
            v21 = 4LL;
          }
          sub_1400011A8(&v44, (__int64)v20, v21);
          v22 = &unk_1400D44E0;
          v23 = P;
          if ( P )
            v22 = P;
          (*(void (__fastcall **)(_QWORD, PVOID, unsigned __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v22, 2 * v46);
          if ( v23 )
            ExFreePool(v23);
          v24 = a1[3];
          v25 = &unk_1400D44E0;
          v26 = *(void **)(v24 + 16);
          v27 = *(_QWORD *)(v24 + 24);
          if ( v26 )
            v25 = v26;
          (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v25, 2 * v27);
          v19 = (char *)*((_QWORD *)v19 + 1);
        }
        while ( v19 != v50 );
        v18 = v52;
        v13 = a2 + 25;
      }
      if ( v18 )
      {
        do
          sub_1400A4398(v50, v51);
        while ( v52 );
      }
    }
    v28 = a1[4];
    v29 = &unk_1400D44E0;
    v30 = *(void **)(v28 + 16);
    v31 = *(_QWORD *)(v28 + 24);
    if ( v30 )
      v29 = v30;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v29, 2 * v31);
    *(_QWORD *)&v48 = (*(unsigned int (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13) | 0xA00000000LL;
    DWORD2(v48) = 10;
    sub_1400042F0((__int64)&v44, (int *)&v48);
    v32 = &unk_1400D44E0;
    v33 = P;
    if ( P )
      v32 = P;
    (*(void (__fastcall **)(_QWORD, PVOID, unsigned __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v32, 2 * v46);
    if ( v33 )
      ExFreePool(v33);
    v34 = a1[5];
    v35 = *(void **)(v34 + 16);
    v36 = *(_QWORD *)(v34 + 24);
    if ( v35 )
      v7 = v35;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v7, 2 * v36);
  }
  v37 = a1[3];
  v38 = *(_QWORD *)(v37 + 24);
  v39 = *(_QWORD *)(v37 + 16);
  if ( a3[2] )
    sub_140001480(a3, v39, v38);
  else
    sub_1400011A8(a3, v39, v38);
  v40 = (_QWORD *)a2[36];
  v41 = a2[40] == 0LL;
  v53[0] = *a1;
  v53[2] = a1[1];
  v53[3] = a1[2];
  v53[4] = a1[3];
  v53[5] = a1[4];
  result = a1[5];
  v43 = v40;
  if ( !v41 )
    v43 = a2 + 35;
  v53[1] = a3;
  v53[6] = result;
  while ( v40 != v43 )
  {
    sub_1400A27D4(&v48, v40 + 2);
    v44 = v48;
    v48 = 0uLL;
    result = sub_14009FE94(v53, &v44);
    v40 = (_QWORD *)v40[1];
  }
  return result;
}
