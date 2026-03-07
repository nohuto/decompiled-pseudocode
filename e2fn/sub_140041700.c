__int64 __fastcall sub_140041700(_QWORD *a1, unsigned int a2, _WORD *a3)
{
  char v5; // di
  unsigned int v6; // r15d
  void *v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rsi
  volatile signed __int32 *v14; // rdi
  int v16; // ebx
  unsigned int v17; // r12d
  const wchar_t *v18; // r15
  void *v19; // rsi
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rdi
  int v27; // r8d
  __int64 v28; // rax
  int v29; // esi
  int v30; // r13d
  __int64 v31; // rcx
  int v32; // r12d
  int v33; // eax
  __int64 v34; // rcx
  int v35; // r15d
  __int64 v36; // rdx
  void *v37; // rsi
  void *v38; // rdi
  void *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  void *v42; // rax
  volatile signed __int32 *v43; // rsi
  volatile signed __int32 *v44; // rdi
  signed __int32 v45[8]; // [rsp+0h] [rbp-89h] BYREF
  __int64 v46; // [rsp+30h] [rbp-59h]
  const wchar_t *v47; // [rsp+38h] [rbp-51h]
  unsigned int v48; // [rsp+40h] [rbp-49h]
  char v49[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v50; // [rsp+58h] [rbp-31h]
  char v51[8]; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v52; // [rsp+68h] [rbp-21h]
  char v53[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v54; // [rsp+78h] [rbp-11h]
  char v55[8]; // [rsp+80h] [rbp-9h] BYREF
  volatile signed __int32 *v56; // [rsp+88h] [rbp-1h]
  char v57[8]; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v58; // [rsp+98h] [rbp+Fh]
  char v59[8]; // [rsp+A0h] [rbp+17h] BYREF
  volatile signed __int32 *v60; // [rsp+A8h] [rbp+1Fh]

  *a3 = 0;
  v5 = 0;
  if ( (a2 & 0xFFFF0000) != 0 )
  {
    v6 = sub_140041C4C();
    if ( !v6 )
      return 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v51) + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v49);
      v48 = v6;
      v47 = L"ReadPhyXmdioRegister(offset, value)";
      v46 = (__int64)v8;
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v11,
        10,
        31,
        (__int64)&unk_1400D71E0,
        (__int64)v7,
        v46,
        (__int64)v47,
        v48);
      v5 = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v13 = v50;
      v5 &= ~2u;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v14 = v52;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_1400113EC((int)a1, (__int64)L"ReadPhyXmdioRegister(offset, value)", 275, 156, v6);
    return v6;
  }
  v16 = (a2 & 0x1F | 0x800) << 16;
  v17 = sub_14003E7A0((__int64)a1);
  if ( v17 )
  {
    v18 = L"AcquirePhyOwnership()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = &unk_1400D44E0;
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v53) + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v55);
      v48 = v17;
      v47 = L"AcquirePhyOwnership()";
      LOBYTE(v23) = 2;
      v24 = *(void **)(*(_QWORD *)v22 + 16LL);
      if ( v24 )
        v19 = v24;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v23,
        10,
        32,
        (__int64)&unk_1400D71E0,
        (__int64)v20,
        (__int64)v19,
        (__int64)v47,
        v48);
      v5 = 12;
    }
    if ( (v5 & 8) != 0 )
    {
      v25 = v54;
      v5 &= ~8u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v26 = v56;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    v27 = 282;
LABEL_39:
    sub_14003B824((int)a1, (__int64)v18, v27, 156, v17);
    return v17;
  }
  v28 = a1[47];
  v29 = -1073741130;
  v30 = -1073741661;
  v31 = *(_QWORD *)(v28 + 8);
  if ( !v31 || *(_DWORD *)(v28 + 20) )
  {
    v32 = -1073741661;
    if ( *(_DWORD *)(v28 + 20) == 3 )
      v32 = -1073741130;
  }
  else
  {
    *(_DWORD *)(v31 + 32) = v16;
    _InterlockedOr(v45, 0);
    v32 = 0;
  }
  v33 = sub_14004333C(a1, a2);
  v34 = a1[47];
  v35 = v32 | v33;
  v36 = *(_QWORD *)(v34 + 8);
  if ( !v36 || *(_DWORD *)(v34 + 20) )
  {
    if ( *(_DWORD *)(v34 + 20) == 3 )
      v30 = -1073741130;
    v29 = v30;
  }
  else
  {
    v16 = *(_DWORD *)(v36 + 32);
    if ( v16 == -1 && *(_DWORD *)(*(_QWORD *)(v34 + 8) + 8LL) == -1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 8LL))(v34, 3LL);
    else
      v29 = 0;
  }
  v6 = v29 | v35;
  v17 = sub_14004240C(a1);
  if ( v17 )
  {
    v18 = L"ReleasePhyOwnership()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v37 = &unk_1400D44E0;
      v38 = &unk_1400D44E0;
      v39 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v59) + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v57);
      v48 = v17;
      v47 = L"ReleasePhyOwnership()";
      LOBYTE(v41) = 2;
      v46 = (__int64)v38;
      v42 = *(void **)(*(_QWORD *)v40 + 16LL);
      if ( v42 )
        v37 = v42;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v41,
        10,
        33,
        (__int64)&unk_1400D71E0,
        (__int64)v37,
        v46,
        (__int64)v47,
        v48);
      v5 = 48;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v43 = v58;
      v5 &= ~0x20u;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      v44 = v60;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    v27 = 292;
    goto LABEL_39;
  }
  *a3 = v16;
  return v6;
}
