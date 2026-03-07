__int64 __fastcall sub_14007D480(__int64 a1, int a2)
{
  char v2; // di
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r9d
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // r8
  _DWORD *v10; // rcx
  void *v12; // r14
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // r14
  volatile signed __int32 *v19; // rdi
  int v20; // eax
  void *v21; // r14
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // r14
  volatile signed __int32 *v28; // rdi
  signed __int32 v29[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-78h]
  const wchar_t *v31; // [rsp+38h] [rbp-70h]
  unsigned int v32; // [rsp+40h] [rbp-68h]
  char v33[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v34; // [rsp+58h] [rbp-50h]
  char v35[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v36; // [rsp+68h] [rbp-40h]
  char v37[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v38; // [rsp+78h] [rbp-30h]
  char v39[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v40; // [rsp+88h] [rbp-20h]

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 368);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 || *(_DWORD *)(v4 + 20) )
  {
    v20 = -1073741661;
    if ( *(_DWORD *)(v4 + 20) == 3 )
      v20 = -1073741130;
    v7 = v20;
    goto LABEL_31;
  }
  v6 = *(_DWORD *)(*(unsigned int *)(a1 + 360) + v5);
  if ( v6 == -1 && *(_DWORD *)(*(_QWORD *)(v4 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 3LL);
    v7 = -1073741130;
LABEL_31:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = &unk_1400D44E0;
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v39)
                     + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v37);
      v32 = v7;
      v31 = L"m_mmioAccessor->ReadRegisterSafe(m_address, value)";
      LOBYTE(v25) = 2;
      v30 = (__int64)v22;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      if ( v26 )
        v21 = v26;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v25,
        10,
        17,
        (__int64)&unk_1400D9898,
        (__int64)v21,
        v30,
        (__int64)v31,
        v32);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v27 = v38;
      v2 &= ~2u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v28 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    sub_14000F3C4(a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(m_address, value)", 171, 114, v7);
    return v7;
  }
  v8 = *(_QWORD *)(a1 + 368);
  v9 = *(_QWORD *)(v8 + 8);
  v10 = (_DWORD *)(v8 + 20);
  if ( v9 && !*v10 )
  {
    *(_DWORD *)(*(unsigned int *)(a1 + 360) + v9) = v6 & ~a2;
    _InterlockedOr(v29, 0);
    return 0LL;
  }
  v7 = -1073741130;
  if ( *v10 != 3 )
    v7 = -1073741661;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v12 = &unk_1400D44E0;
    v13 = &unk_1400D44E0;
    v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v35)
                   + 16LL);
    if ( v14 )
      v13 = v14;
    v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v33);
    v32 = v7;
    v31 = L"m_mmioAccessor->WriteRegisterSafe(m_address, value)";
    LOBYTE(v16) = 2;
    v30 = (__int64)v13;
    v17 = *(void **)(*(_QWORD *)v15 + 16LL);
    if ( v17 )
      v12 = v17;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      v16,
      10,
      18,
      (__int64)&unk_1400D9898,
      (__int64)v12,
      v30,
      (__int64)v31,
      v32);
    v2 = 12;
  }
  if ( (v2 & 8) != 0 )
  {
    v18 = v34;
    v2 &= ~8u;
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v19 = v36;
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  sub_1400142A4(a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(m_address, value)", 173, 114, v7);
  return v7;
}
