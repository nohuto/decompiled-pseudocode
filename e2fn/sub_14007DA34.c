__int64 __fastcall sub_14007DA34(__int64 a1, int a2)
{
  char v2; // di
  __int64 v4; // rcx
  __int64 v6; // r9
  int v7; // edx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // rcx
  void *v13; // r14
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // r14
  volatile signed __int32 *v20; // rdi
  int v21; // eax
  void *v22; // r14
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // r14
  volatile signed __int32 *v29; // rdi
  signed __int32 v30[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-78h]
  const wchar_t *v32; // [rsp+38h] [rbp-70h]
  unsigned int v33; // [rsp+40h] [rbp-68h]
  char v34[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v35; // [rsp+58h] [rbp-50h]
  char v36[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v37; // [rsp+68h] [rbp-40h]
  char v38[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v39; // [rsp+78h] [rbp-30h]
  char v40[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v41; // [rsp+88h] [rbp-20h]

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 368);
  v6 = *(_QWORD *)(v4 + 8);
  if ( !v6 || *(_DWORD *)(v4 + 20) )
  {
    v21 = -1073741661;
    if ( *(_DWORD *)(v4 + 20) == 3 )
      v21 = -1073741130;
    v8 = v21;
    goto LABEL_31;
  }
  v7 = *(_DWORD *)(*(unsigned int *)(a1 + 360) + v6);
  if ( v7 == -1 && *(_DWORD *)(*(_QWORD *)(v4 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 3LL);
    v8 = -1073741130;
LABEL_31:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v22 = &unk_1400D44E0;
      v23 = &unk_1400D44E0;
      v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v40)
                     + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v38);
      v33 = v8;
      v32 = L"m_mmioAccessor->ReadRegisterSafe(m_address, value)";
      LOBYTE(v26) = 2;
      v31 = (__int64)v23;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v22 = v27;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v26,
        10,
        15,
        (__int64)&unk_1400D9898,
        (__int64)v22,
        v31,
        (__int64)v32,
        v33);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v28 = v39;
      v2 &= ~2u;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v29 = v41;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000F3C4(a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(m_address, value)", 150, 114, v8);
    return v8;
  }
  v9 = *(_QWORD *)(a1 + 368);
  v10 = *(_QWORD *)(v9 + 8);
  v11 = (_DWORD *)(v9 + 20);
  if ( v10 && !*v11 )
  {
    *(_DWORD *)(*(unsigned int *)(a1 + 360) + v10) = a2 | v7;
    _InterlockedOr(v30, 0);
    return 0LL;
  }
  v8 = -1073741130;
  if ( *v11 != 3 )
    v8 = -1073741661;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v13 = &unk_1400D44E0;
    v14 = &unk_1400D44E0;
    v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v36)
                   + 16LL);
    if ( v15 )
      v14 = v15;
    v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v34);
    v33 = v8;
    v32 = L"m_mmioAccessor->WriteRegisterSafe(m_address, value)";
    LOBYTE(v17) = 2;
    v31 = (__int64)v14;
    v18 = *(void **)(*(_QWORD *)v16 + 16LL);
    if ( v18 )
      v13 = v18;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      v17,
      10,
      16,
      (__int64)&unk_1400D9898,
      (__int64)v13,
      v31,
      (__int64)v32,
      v33);
    v2 = 12;
  }
  if ( (v2 & 8) != 0 )
  {
    v19 = v35;
    v2 &= ~8u;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v20 = v37;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
  sub_1400142A4(a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(m_address, value)", 152, 114, v8);
  return v8;
}
