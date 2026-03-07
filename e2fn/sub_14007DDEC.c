__int64 __fastcall sub_14007DDEC(__int64 a1, int a2, int a3)
{
  char v3; // di
  __int64 v5; // rcx
  __int64 v7; // r10
  int v8; // r9d
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // rcx
  void *v14; // r14
  void *v15; // rdi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // r14
  volatile signed __int32 *v21; // rdi
  int v22; // eax
  void *v23; // r14
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  volatile signed __int32 *v29; // r14
  volatile signed __int32 *v30; // rdi
  signed __int32 v31[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-78h]
  const wchar_t *v33; // [rsp+38h] [rbp-70h]
  unsigned int v34; // [rsp+40h] [rbp-68h]
  char v35[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v36; // [rsp+58h] [rbp-50h]
  char v37[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v38; // [rsp+68h] [rbp-40h]
  char v39[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v40; // [rsp+78h] [rbp-30h]
  char v41[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v42; // [rsp+88h] [rbp-20h]

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 368);
  v7 = *(_QWORD *)(v5 + 8);
  if ( !v7 || *(_DWORD *)(v5 + 20) )
  {
    v22 = -1073741661;
    if ( *(_DWORD *)(v5 + 20) == 3 )
      v22 = -1073741130;
    v9 = v22;
    goto LABEL_31;
  }
  v8 = *(_DWORD *)(*(unsigned int *)(a1 + 360) + v7);
  if ( v8 == -1 && *(_DWORD *)(*(_QWORD *)(v5 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, 3LL);
    v9 = -1073741130;
LABEL_31:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = &unk_1400D44E0;
      v24 = &unk_1400D44E0;
      v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v41)
                     + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v39);
      v34 = v9;
      v33 = L"m_mmioAccessor->ReadRegisterSafe(m_address, registerValue)";
      LOBYTE(v27) = 2;
      v32 = (__int64)v24;
      v28 = *(void **)(*(_QWORD *)v26 + 16LL);
      if ( v28 )
        v23 = v28;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v27,
        10,
        19,
        (__int64)&unk_1400D9898,
        (__int64)v23,
        v32,
        (__int64)v33,
        v34);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v29 = v40;
      v3 &= ~2u;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v30 = v42;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_140028E54(a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(m_address, registerValue)", 193, 114, v9);
    return v9;
  }
  v10 = *(_QWORD *)(a1 + 368);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = (_DWORD *)(v10 + 20);
  if ( v11 && !*v12 )
  {
    *(_DWORD *)(*(unsigned int *)(a1 + 360) + v11) = a3 & a2 | v8 & ~a2;
    _InterlockedOr(v31, 0);
    return 0LL;
  }
  v9 = -1073741130;
  if ( *v12 != 3 )
    v9 = -1073741661;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v14 = &unk_1400D44E0;
    v15 = &unk_1400D44E0;
    v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v37)
                   + 16LL);
    if ( v16 )
      v15 = v16;
    v17 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v35);
    v34 = v9;
    v33 = L"m_mmioAccessor->WriteRegisterSafe(m_address, registerValue)";
    LOBYTE(v18) = 2;
    v32 = (__int64)v15;
    v19 = *(void **)(*(_QWORD *)v17 + 16LL);
    if ( v19 )
      v14 = v19;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      v18,
      10,
      20,
      (__int64)&unk_1400D9898,
      (__int64)v14,
      v32,
      (__int64)v33,
      v34);
    v3 = 12;
  }
  if ( (v3 & 8) != 0 )
  {
    v20 = v36;
    v3 &= ~8u;
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
  if ( (v3 & 4) != 0 )
  {
    v21 = v38;
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  sub_140028FA0(a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(m_address, registerValue)", 204, 114, v9);
  return v9;
}
