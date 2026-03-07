__int64 __fastcall sub_14009FE94(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  void *v6; // rsi
  __int64 v7; // rcx
  void *v8; // rdx
  void *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  PVOID v12; // rdx
  PVOID v13; // rbx
  __int64 v14; // r8
  void *v15; // rdx
  void *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r8
  void *v19; // rdx
  void *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  char *v23; // rbx
  const wchar_t *v24; // rdx
  unsigned __int64 v25; // r8
  PVOID v26; // rdx
  __int64 v27; // r8
  void *v28; // rdx
  void *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r8
  void *v32; // rdx
  void *v33; // rax
  __int64 v34; // r8
  PVOID v35; // rdx
  PVOID v36; // rbx
  __int64 v37; // r8
  void *v38; // rax
  __int64 v39; // r8
  volatile signed __int32 *v40; // rbx
  signed __int32 v41; // eax
  bool v42; // zf
  __int128 v43; // [rsp+28h] [rbp-99h] BYREF
  __int64 v44; // [rsp+38h] [rbp-89h]
  __int64 (__fastcall **v45)(PVOID); // [rsp+48h] [rbp-79h] BYREF
  __int16 v46; // [rsp+50h] [rbp-71h]
  PVOID v47; // [rsp+58h] [rbp-69h]
  __int64 v48; // [rsp+60h] [rbp-61h]
  __int64 v49; // [rsp+68h] [rbp-59h]
  char v50[8]; // [rsp+70h] [rbp-51h] BYREF
  char *v51; // [rsp+78h] [rbp-49h]
  __int64 v52; // [rsp+90h] [rbp-31h]
  __int128 v53; // [rsp+98h] [rbp-29h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-19h]
  char v55[16]; // [rsp+B8h] [rbp-9h] BYREF
  PVOID P; // [rsp+C8h] [rbp+7h]
  __int64 v57; // [rsp+D0h] [rbp+Fh]
  char v58[16]; // [rsp+E0h] [rbp+1Fh] BYREF
  PVOID v59; // [rsp+F0h] [rbp+2Fh]
  __int64 v60; // [rsp+F8h] [rbp+37h]

  result = *a2;
  if ( !*(_BYTE *)(*a2 + 128) )
  {
    v5 = a1[1];
    v6 = &unk_1400D44E0;
    v7 = *a1;
    v8 = &unk_1400D44E0;
    v9 = *(void **)(v5 + 16);
    v10 = *(_QWORD *)(v5 + 24);
    if ( v9 )
      v8 = v9;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 8LL))(v7, v8, 2 * v10);
    v11 = *a2;
    *((_QWORD *)&v43 + 1) = 10LL;
    v44 = 10LL;
    *(_QWORD *)&v43 = *(_QWORD *)(v11 + 32);
    v54 = 10LL;
    v53 = v43;
    sub_14000139C((__int64)v55, (__int64 *)&v53);
    v12 = &unk_1400D44E0;
    v13 = P;
    if ( P )
      v12 = P;
    (*(void (__fastcall **)(_QWORD, PVOID, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v12, 2 * v57);
    if ( v13 )
      ExFreePool(v13);
    v14 = a1[2];
    v15 = &unk_1400D44E0;
    v16 = *(void **)(v14 + 16);
    v17 = *(_QWORD *)(v14 + 24);
    if ( v16 )
      v15 = v16;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v15, 2 * v17);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)*a2 + 40LL))(*a2, *a1, 0LL);
    v18 = a1[3];
    v19 = &unk_1400D44E0;
    v20 = *(void **)(v18 + 16);
    v21 = *(_QWORD *)(v18 + 24);
    if ( v20 )
      v19 = v20;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v19, 2 * v21);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)*a2 + 56LL))(*a2, v50);
    v22 = v52;
    v23 = v51;
    if ( v52 )
    {
      if ( v51 != v50 )
      {
        do
        {
          v45 = &off_1400D41D0;
          v46 = 0;
          v47 = 0LL;
          v48 = 0LL;
          v49 = 0LL;
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
          sub_1400011A8(&v45, (__int64)v24, v25);
          v26 = &unk_1400D44E0;
          if ( v47 )
            v26 = v47;
          (*(void (__fastcall **)(_QWORD, PVOID, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v26, 2 * v48);
          if ( v47 )
            ExFreePool(v47);
          v27 = a1[4];
          v28 = &unk_1400D44E0;
          v29 = *(void **)(v27 + 16);
          v30 = *(_QWORD *)(v27 + 24);
          if ( v29 )
            v28 = v29;
          (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v28, 2 * v30);
          v23 = (char *)*((_QWORD *)v23 + 1);
        }
        while ( v23 != v50 );
        v22 = v52;
      }
      if ( v22 )
      {
        do
          sub_1400A4398(v50, v51);
        while ( v52 );
      }
    }
    v31 = a1[5];
    v32 = &unk_1400D44E0;
    v33 = *(void **)(v31 + 16);
    v34 = *(_QWORD *)(v31 + 24);
    if ( v33 )
      v32 = v33;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v32, 2 * v34);
    *(_QWORD *)&v43 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*a2 + 24LL))(*a2) | 0xA00000000LL;
    DWORD2(v43) = 10;
    sub_1400042F0((__int64)v58, (int *)&v43);
    v35 = &unk_1400D44E0;
    v36 = v59;
    if ( v59 )
      v35 = v59;
    (*(void (__fastcall **)(_QWORD, PVOID, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v35, 2 * v60);
    if ( v36 )
      ExFreePool(v36);
    v37 = a1[6];
    v38 = *(void **)(v37 + 16);
    v39 = *(_QWORD *)(v37 + 24);
    if ( v38 )
      v6 = v38;
    result = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, v6, 2 * v39);
  }
  v40 = (volatile signed __int32 *)a2[1];
  if ( v40 )
  {
    v41 = _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF);
    v42 = v41 == 1;
    result = (unsigned int)(v41 - 1);
    if ( v42 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
      result = (unsigned int)_InterlockedDecrement(v40 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
    }
  }
  return result;
}
