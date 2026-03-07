__int64 __fastcall sub_14009F604(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r10
  void *v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // r8
  void *v12; // rdx
  void *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  void *v16; // rdx
  void *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  void *v21; // rdx
  void *v22; // rax
  __int64 v23; // r8
  volatile signed __int32 *v24; // rdi
  volatile signed __int32 *v25; // rdi
  _BYTE v26[8]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v27; // [rsp+38h] [rbp-20h]
  _BYTE v28[24]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 288);
  result = *(_QWORD *)(a1 + 320);
  v5 = v2;
  v6 = a1 + 280;
  if ( result )
    v5 = v6;
  for ( ; v2 != v5; v2 = *(_QWORD *)(v2 + 8) )
  {
    sub_1400A27D4(v26, v2 + 16);
    v7 = sub_1400A27D4(v28, v26);
    v8 = a2[1];
    v9 = &unk_1400D44E0;
    v10 = (_QWORD *)v7;
    if ( *(_QWORD *)(v8 + 16) )
      v9 = *(void **)(v8 + 16);
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, v9, 2LL * *(_QWORD *)(v8 + 24));
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v10 + 40LL))(*v10, *a2, 0LL);
    v11 = a2[2];
    v12 = &unk_1400D44E0;
    v13 = *(void **)(v11 + 16);
    v14 = *(_QWORD *)(v11 + 24);
    if ( v13 )
      v12 = v13;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, v12, 2 * v14);
    v15 = a2[3];
    v16 = &unk_1400D44E0;
    v17 = *(void **)(v15 + 16);
    v18 = *(_QWORD *)(v15 + 24);
    if ( v17 )
      v16 = v17;
    (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, v16, 2 * v18);
    LOBYTE(v19) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)*v10 + 48LL))(*v10, *a2, 0LL, v19);
    v20 = a2[2];
    v21 = &unk_1400D44E0;
    v22 = *(void **)(v20 + 16);
    v23 = *(_QWORD *)(v20 + 24);
    if ( v22 )
      v21 = v22;
    result = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a2 + 8LL))(*a2, v21, 2 * v23);
    v24 = (volatile signed __int32 *)v10[1];
    if ( v24 )
    {
      result = (unsigned int)_InterlockedDecrement(v24 + 2);
      if ( !(_DWORD)result )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        result = (unsigned int)_InterlockedDecrement(v24 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    if ( v27 )
    {
      result = (unsigned int)_InterlockedDecrement(v27 + 2);
      if ( !(_DWORD)result )
      {
        v25 = v27;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        result = (unsigned int)_InterlockedDecrement(v25 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
  }
  return result;
}
