__int64 __fastcall sub_14001627C(_QWORD *a1)
{
  __int64 v1; // r8
  char v2; // di
  __int64 v4; // rax
  int v5; // ecx
  unsigned int v6; // r14d
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // r8
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rsi
  void *v15; // r12
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  void *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  int v23; // r8d
  const wchar_t *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  _DWORD *v27; // rcx
  void *v29; // r12
  void *v30; // rdi
  void *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  void *v34; // rax
  volatile signed __int32 *v35; // rsi
  volatile signed __int32 *v36; // rdi
  int v37; // eax
  const wchar_t *v38; // rsi
  void *v39; // r12
  void *v40; // rdi
  void *v41; // rax
  __int64 v42; // rax
  int v43; // edx
  void *v44; // rax
  volatile signed __int32 *v45; // rsi
  volatile signed __int32 *v46; // rdi
  int v47; // r8d
  int v48; // eax
  void *v49; // r12
  void *v50; // rdi
  void *v51; // rax
  __int64 v52; // rax
  int v53; // edx
  void *v54; // rax
  volatile signed __int32 *v55; // rsi
  volatile signed __int32 *v56; // rdi
  signed __int32 v57[8]; // [rsp+0h] [rbp-99h] BYREF
  __int64 v58; // [rsp+30h] [rbp-69h]
  const wchar_t *v59; // [rsp+38h] [rbp-61h]
  unsigned int v60; // [rsp+40h] [rbp-59h]
  char v61[8]; // [rsp+50h] [rbp-49h] BYREF
  volatile signed __int32 *v62; // [rsp+58h] [rbp-41h]
  char v63[8]; // [rsp+60h] [rbp-39h] BYREF
  volatile signed __int32 *v64; // [rsp+68h] [rbp-31h]
  char v65[8]; // [rsp+70h] [rbp-29h] BYREF
  volatile signed __int32 *v66; // [rsp+78h] [rbp-21h]
  char v67[8]; // [rsp+80h] [rbp-19h] BYREF
  volatile signed __int32 *v68; // [rsp+88h] [rbp-11h]
  char v69[8]; // [rsp+90h] [rbp-9h] BYREF
  volatile signed __int32 *v70; // [rsp+98h] [rbp-1h]
  char v71[8]; // [rsp+A0h] [rbp+7h] BYREF
  volatile signed __int32 *v72; // [rsp+A8h] [rbp+Fh]
  char v73[8]; // [rsp+B0h] [rbp+17h] BYREF
  volatile signed __int32 *v74; // [rsp+B8h] [rbp+1Fh]
  char v75[8]; // [rsp+C0h] [rbp+27h] BYREF
  volatile signed __int32 *v76; // [rsp+C8h] [rbp+2Fh]

  v1 = a1[51];
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 8);
  if ( !v4 || *(_DWORD *)(v1 + 20) )
  {
    v48 = -1073741661;
    if ( *(_DWORD *)(v1 + 20) == 3 )
      v48 = -1073741130;
    v6 = v48;
    goto LABEL_84;
  }
  v5 = *(_DWORD *)(v4 + 23476);
  if ( v5 == -1 && *(_DWORD *)(*(_QWORD *)(v1 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 3LL);
    v6 = -1073741130;
LABEL_84:
    v38 = L"m_mmioAccessor->ReadRegisterSafe(0x05BB4, ltrValue)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v49 = &unk_1400D44E0;
      v50 = &unk_1400D44E0;
      v51 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v75) + 16LL);
      if ( v51 )
        v50 = v51;
      v52 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v73);
      v60 = v6;
      v59 = L"m_mmioAccessor->ReadRegisterSafe(0x05BB4, ltrValue)";
      LOBYTE(v53) = 2;
      v58 = (__int64)v50;
      v54 = *(void **)(*(_QWORD *)v52 + 16LL);
      if ( v54 )
        v49 = v54;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v53,
        10,
        35,
        (__int64)&unk_1400D5648,
        (__int64)v49,
        v58,
        (__int64)v59,
        v60);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v55 = v74;
      v2 &= ~2u;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
          if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
        }
      }
      v38 = L"m_mmioAccessor->ReadRegisterSafe(0x05BB4, ltrValue)";
    }
    if ( (v2 & 1) != 0 )
    {
      v56 = v76;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
          if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
        }
      }
    }
    v47 = 369;
LABEL_102:
    sub_1400142A4((int)a1, (__int64)v38, v47, 152, v6);
    return v6;
  }
  if ( (*(_DWORD *)(v4 + 23476) & 0x83FF) != 0x8000 )
  {
    v7 = a1[51];
    v8 = v5 & 0x7FFF7C00 | 0x80008000;
    v9 = *(_QWORD *)(v7 + 8);
    v10 = (_DWORD *)(v7 + 20);
    if ( !v9 || *v10 )
    {
      v6 = -1073741130;
      if ( *v10 != 3 )
        v6 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = *(_QWORD *)(a1[22] + 16LL);
        v15 = &unk_1400D44E0;
        v16 = &unk_1400D44E0;
        v17 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v61) + 16LL);
        if ( v17 )
          v16 = v17;
        v18 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v63);
        v60 = v6;
        LOBYTE(v19) = 2;
        v20 = *(void **)(*(_QWORD *)v18 + 16LL);
        if ( v20 )
          v15 = v20;
        sub_1400A5E80(
          v14,
          v19,
          10,
          36,
          (__int64)&unk_1400D5648,
          (__int64)v16,
          (__int64)v15,
          (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x05BB4, ltrValue)",
          v60);
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v21 = v62;
        v2 &= ~8u;
        if ( v62 )
        {
          if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v22 = v64;
        if ( v64 )
        {
          if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      v23 = 376;
      v24 = L"m_mmioAccessor->WriteRegisterSafe(0x05BB4, ltrValue)";
      goto LABEL_34;
    }
    *(_DWORD *)(v9 + 23476) = v8;
    _InterlockedOr(v57, 0);
  }
  v11 = a1[51];
  v12 = *(_QWORD *)(v11 + 8);
  if ( !v12 || *(_DWORD *)(v11 + 20) )
  {
    v37 = -1073741661;
    if ( *(_DWORD *)(v11 + 20) == 3 )
      v37 = -1073741130;
    v6 = v37;
    goto LABEL_63;
  }
  v13 = *(_DWORD *)(v12 + 23472);
  if ( v13 == -1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v11 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, 3LL);
      v6 = -1073741130;
LABEL_63:
      v38 = L"m_mmioAccessor->ReadRegisterSafe(0x05BB0, ltrValue)";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v39 = &unk_1400D44E0;
        v40 = &unk_1400D44E0;
        v41 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v71) + 16LL);
        if ( v41 )
          v40 = v41;
        v42 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v69);
        v60 = v6;
        v59 = L"m_mmioAccessor->ReadRegisterSafe(0x05BB0, ltrValue)";
        LOBYTE(v43) = 2;
        v58 = (__int64)v40;
        v44 = *(void **)(*(_QWORD *)v42 + 16LL);
        if ( v44 )
          v39 = v44;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v43,
          10,
          37,
          (__int64)&unk_1400D5648,
          (__int64)v39,
          v58,
          (__int64)v59,
          v60);
        v2 = 48;
      }
      if ( (v2 & 0x20) != 0 )
      {
        v45 = v70;
        v2 &= ~0x20u;
        if ( v70 )
        {
          if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
            if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
          }
        }
        v38 = L"m_mmioAccessor->ReadRegisterSafe(0x05BB0, ltrValue)";
      }
      if ( (v2 & 0x10) != 0 )
      {
        v46 = v72;
        if ( v72 )
        {
          if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
            if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
          }
        }
      }
      v47 = 379;
      goto LABEL_102;
    }
  }
  else if ( (v13 & 0x3FF) == 0 && (v13 & 0x8000) != 0 )
  {
    return 0LL;
  }
  v25 = a1[51];
  v26 = *(_QWORD *)(v25 + 8);
  v27 = (_DWORD *)(v25 + 20);
  if ( v26 && !*v27 )
  {
    *(_DWORD *)(v26 + 23472) = v13 & 0x7FFF7C00 | 0x80008000;
    _InterlockedOr(v57, 0);
    return 0LL;
  }
  v6 = -1073741130;
  if ( *v27 != 3 )
    v6 = -1073741661;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v29 = &unk_1400D44E0;
    v30 = &unk_1400D44E0;
    v31 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v67) + 16LL);
    if ( v31 )
      v30 = v31;
    v32 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v65);
    v60 = v6;
    v59 = L"m_mmioAccessor->WriteRegisterSafe(0x05BB0, ltrValue)";
    LOBYTE(v33) = 2;
    v58 = (__int64)v30;
    v34 = *(void **)(*(_QWORD *)v32 + 16LL);
    if ( v34 )
      v29 = v34;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v33,
      10,
      38,
      (__int64)&unk_1400D5648,
      (__int64)v29,
      v58,
      (__int64)v59,
      v60);
    v2 = -64;
  }
  if ( v2 < 0 )
  {
    v35 = v66;
    v2 &= ~0x80u;
    if ( v66 )
    {
      if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
  }
  if ( (v2 & 0x40) != 0 )
  {
    v36 = v68;
    if ( v68 )
    {
      if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
        if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
      }
    }
  }
  v23 = 385;
  v24 = L"m_mmioAccessor->WriteRegisterSafe(0x05BB0, ltrValue)";
LABEL_34:
  sub_14000D660((int)a1, (__int64)v24, v23, 152, v6);
  return v6;
}
