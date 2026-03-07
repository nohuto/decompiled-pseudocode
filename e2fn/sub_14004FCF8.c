__int64 __fastcall sub_14004FCF8(__int64 a1)
{
  unsigned int v1; // r14d
  char v3; // si
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  void *v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // r8
  void *v11; // rdx
  void *v12; // rax
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // rcx
  void *v26; // rdi
  void *v27; // rax
  __int64 v28; // rax
  int v29; // edx
  void *v30; // rax
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  void *v33; // rdi
  void *v34; // rax
  __int64 v35; // rax
  int v36; // edx
  void *v37; // rax
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  int v40; // eax
  void *v41; // rdi
  void *v42; // rax
  __int64 v43; // rax
  int v44; // edx
  void *v45; // rax
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  signed __int32 v49[8]; // [rsp+8h] [rbp-99h] BYREF
  __int64 v50; // [rsp+38h] [rbp-69h]
  unsigned int v51; // [rsp+48h] [rbp-59h]
  char v52[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v53; // [rsp+60h] [rbp-41h]
  char v54[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v55; // [rsp+70h] [rbp-31h]
  char v56[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v57; // [rsp+80h] [rbp-21h]
  char v58[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v59; // [rsp+90h] [rbp-11h]
  char v60[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v61; // [rsp+A0h] [rbp-1h]
  char v62[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v63; // [rsp+B0h] [rbp+Fh]
  char v64[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v65; // [rsp+C0h] [rbp+1Fh]
  char v66[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v67; // [rsp+D0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnInterruptCauseRegister::EvtD0Entry", a1);
      if ( v6 )
        v4 = v6;
    }
  }
  v7 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v54);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v52);
    v10 = &unk_1400D44E0;
    v11 = &unk_1400D44E0;
    v12 = *(void **)(*(_QWORD *)v9 + 16LL);
    if ( v12 )
      v10 = v12;
    if ( *(_QWORD *)(v8 + 16) )
      v11 = *(void **)(v8 + 16);
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v51 = *(_DWORD *)(a1 + 388);
    v50 = (__int64)v11;
    LOBYTE(v11) = 4;
    sub_1400A5E80(v13, (_DWORD)v11, 10, 15, (__int64)&unk_1400D7528, (__int64)v10, v50, (__int64)qword_1400B7720, v51);
    v3 = 3;
  }
  if ( (v3 & 2) != 0 )
  {
    v14 = v53;
    v3 &= ~2u;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v15 = v55;
    v3 &= ~1u;
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  v16 = *(_QWORD *)(a1 + 368);
  v17 = *(_QWORD *)(v16 + 8);
  if ( !v17 || *(_DWORD *)(v16 + 20) )
  {
    v40 = -1073741661;
    if ( *(_DWORD *)(v16 + 20) == 3 )
      v40 = -1073741130;
    v1 = v40;
    goto LABEL_73;
  }
  if ( *(_DWORD *)(v17 + 192) == -1 && *(_DWORD *)(*(_QWORD *)(v16 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 8LL))(v16, 3LL);
    v1 = -1073741130;
LABEL_73:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0xCu;
      v41 = &unk_1400D44E0;
      v42 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v66)
                     + 16LL);
      if ( v42 )
        v41 = v42;
      v43 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v64);
      v51 = v1;
      LOBYTE(v44) = 2;
      v45 = *(void **)(*(_QWORD *)v43 + 16LL);
      if ( v45 )
        v7 = v45;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v44,
        10,
        16,
        (__int64)&unk_1400D7528,
        (__int64)v7,
        (__int64)v41,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x000C0, icr)",
        v51);
    }
    if ( (v3 & 8) != 0 )
    {
      v46 = v65;
      v3 &= ~8u;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
          if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v47 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
    }
    sub_140009704(a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x000C0, icr)", 125, 60, v1);
    goto LABEL_90;
  }
  v18 = *(unsigned int *)(a1 + 388);
  v19 = *(_QWORD *)(a1 + 368);
  v20 = *(_QWORD *)(v19 + 8);
  v21 = (_DWORD *)(v19 + 20);
  if ( !v20 || *v21 )
  {
    v1 = -1073741130;
    if ( *v21 != 3 )
      v1 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0x30u;
      v33 = &unk_1400D44E0;
      v34 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v62,
                                    v18)
                     + 16LL);
      if ( v34 )
        v33 = v34;
      v35 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v60);
      v51 = v1;
      LOBYTE(v36) = 2;
      v37 = *(void **)(*(_QWORD *)v35 + 16LL);
      if ( v37 )
        v7 = v37;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v36,
        10,
        17,
        (__int64)&unk_1400D7528,
        (__int64)v7,
        (__int64)v33,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x000D0, m_ImrShadow)",
        v51);
    }
    if ( (v3 & 0x20) != 0 )
    {
      v38 = v61;
      v3 &= ~0x20u;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v38 + 8LL))(v38, v20, v18);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v39 = v63;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v39 + 8LL))(v39, v20, v18);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
    sub_1400358A0(a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x000D0, m_ImrShadow)", 127, 60, v1);
  }
  else
  {
    *(_DWORD *)(v20 + 208) = v18;
    _InterlockedOr(v49, 0);
    v22 = *(_QWORD *)(a1 + 368);
    v23 = (unsigned int)~*(_DWORD *)(a1 + 388);
    v24 = *(_QWORD *)(v22 + 8);
    v25 = (_DWORD *)(v22 + 20);
    if ( !v24 || *v25 )
    {
      v1 = -1073741130;
      if ( *v25 != 3 )
        v1 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v3 |= 0xC0u;
        v26 = &unk_1400D44E0;
        v27 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v58)
                       + 16LL);
        if ( v27 )
          v26 = v27;
        v28 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v56);
        v51 = v1;
        LOBYTE(v29) = 2;
        v30 = *(void **)(*(_QWORD *)v28 + 16LL);
        if ( v30 )
          v7 = v30;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v29,
          10,
          18,
          (__int64)&unk_1400D7528,
          (__int64)v7,
          (__int64)v26,
          (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x000D8, ~m_ImrShadow)",
          v51);
      }
      if ( v3 < 0 )
      {
        v31 = v57;
        v3 &= ~0x80u;
        if ( v57 )
        {
          if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v31 + 8LL))(v31, v23);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      if ( (v3 & 0x40) != 0 )
      {
        v32 = v59;
        if ( v59 )
        {
          if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v32 + 8LL))(v32, v23);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
      }
      sub_140009AE8(a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x000D8, ~m_ImrShadow)", 128, 60, v1);
    }
    else
    {
      *(_DWORD *)(v24 + 216) = v23;
      _InterlockedOr(v49, 0);
    }
  }
LABEL_90:
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v1;
}
