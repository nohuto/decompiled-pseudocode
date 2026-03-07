__int64 __fastcall sub_14009F220(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8
  void *v5; // rbp
  void *v6; // rdx
  void *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r8
  void *v10; // rdx
  void *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  void *v14; // rdx
  void *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r8
  void *v18; // rdx
  void *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r8
  void *v22; // rax
  __int64 v23; // r8
  __int64 result; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  _QWORD *v27; // rsi
  _QWORD v28[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( sub_140071A64((__int64)a1) || sub_140071A58((__int64)a1) )
  {
    v4 = a2[1];
    v5 = &unk_1400D44E0;
    v6 = &unk_1400D44E0;
    v7 = *(void **)(v4 + 16);
    v8 = *(_QWORD *)(v4 + 24);
    if ( v7 )
      v6 = v7;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, v6, 2 * v8);
    if ( sub_140071A64((__int64)a1) )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(a1[25] + 40LL))(a1 + 25, *a2, 0LL);
      v9 = a2[2];
      v10 = &unk_1400D44E0;
      v11 = *(void **)(v9 + 16);
      v12 = *(_QWORD *)(v9 + 24);
      if ( v11 )
        v10 = v11;
      (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, v10, 2 * v12);
      v13 = a2[3];
      v14 = &unk_1400D44E0;
      v15 = *(void **)(v13 + 16);
      v16 = *(_QWORD *)(v13 + 24);
      if ( v15 )
        v14 = v15;
      (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, v14, 2 * v16);
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(a1[25] + 48LL))(a1 + 25, *a2, 0LL, 0LL);
      v17 = a2[2];
      v18 = &unk_1400D44E0;
      v19 = *(void **)(v17 + 16);
      v20 = *(_QWORD *)(v17 + 24);
      if ( v19 )
        v18 = v19;
      (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, v18, 2 * v20);
    }
    v28[0] = *a2;
    v28[1] = a2[4];
    v28[2] = a2[2];
    v28[3] = a2[3];
    sub_14009F604(a1, v28);
    v21 = a2[1];
    v22 = *(void **)(v21 + 16);
    v23 = *(_QWORD *)(v21 + 24);
    if ( v22 )
      v5 = v22;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, v5, 2 * v23);
  }
  result = a1[34];
  v25 = a1 + 30;
  v26 = (_QWORD *)a1[31];
  v27 = v26;
  if ( result )
    v27 = v25;
  while ( v26 != v27 )
  {
    result = sub_14009F220(v26[2], a2);
    v26 = (_QWORD *)v26[1];
  }
  return result;
}
