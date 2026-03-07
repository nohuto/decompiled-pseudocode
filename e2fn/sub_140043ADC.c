__int64 __fastcall sub_140043ADC(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rax
  unsigned int v8; // esi
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  void *v13; // r12
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rdi
  void *v21; // r12
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // rsi
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  void *v32; // r12
  void *v33; // rdx
  void *v34; // rax
  __int64 v35; // rcx
  volatile signed __int32 *v36; // r14
  volatile signed __int32 *v37; // rdi
  int v38; // eax
  void *v39; // r12
  void *v40; // rdi
  void *v41; // rax
  __int64 v42; // rax
  int v43; // edx
  void *v44; // rax
  volatile signed __int32 *v45; // r14
  volatile signed __int32 *v46; // rdi
  signed __int32 v48[8]; // [rsp+8h] [rbp-99h] BYREF
  __int64 v49; // [rsp+30h] [rbp-71h]
  __int64 v50; // [rsp+38h] [rbp-69h]
  const wchar_t *v51; // [rsp+40h] [rbp-61h]
  int v52; // [rsp+48h] [rbp-59h]
  char v53[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v54; // [rsp+60h] [rbp-41h]
  char v55[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v56; // [rsp+70h] [rbp-31h]
  char v57[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v58; // [rsp+80h] [rbp-21h]
  char v59[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v60; // [rsp+90h] [rbp-11h]
  char v61[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v62; // [rsp+A0h] [rbp-1h]
  char v63[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v64; // [rsp+B0h] [rbp+Fh]
  char v65[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v66; // [rsp+C0h] [rbp+1Fh]
  char v67[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v68; // [rsp+D0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwarePhy::WaitTillPhyResetComplete", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  KeStallExecutionProcessor(0x64u);
  v6 = a1[47];
  v7 = *(_DWORD **)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v38 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v38 = -1073741130;
    v8 = v38;
    goto LABEL_73;
  }
  if ( *v7 == -1 && *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v8 = -1073741130;
LABEL_73:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v39 = &unk_1400D44E0;
      v40 = &unk_1400D44E0;
      v41 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v67) + 16LL);
      if ( v41 )
        v40 = v41;
      v42 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v65);
      v52 = v8;
      v51 = L"m_mmioAccessor->UnsetMaskSafe(0x00000, (UINT32)(1 << 31))";
      LOBYTE(v43) = 2;
      v50 = (__int64)v40;
      v44 = *(void **)(*(_QWORD *)v42 + 16LL);
      if ( v44 )
        v39 = v44;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v43,
        14,
        27,
        (__int64)&unk_1400D71E0,
        (__int64)v39,
        v50,
        (__int64)v51,
        v52);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v45 = v66;
      v1 &= ~2u;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
          if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v46 = v68;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
          if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
        }
      }
    }
    sub_140009C34((int)a1, (__int64)L"m_mmioAccessor->UnsetMaskSafe(0x00000, (UINT32)(1 << 31))", 246, 156, v8);
    goto LABEL_90;
  }
  **(_DWORD **)(v6 + 8) = *v7 & 0x7FFFFFFF;
  _InterlockedOr(v48, 0);
  v9 = 0;
  while ( 1 )
  {
    v10 = a1[47];
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 || *(_DWORD *)(v10 + 20) )
    {
      v29 = -1073741661;
      if ( *(_DWORD *)(v10 + 20) == 3 )
        v29 = -1073741130;
      v8 = v29;
      goto LABEL_53;
    }
    v12 = *(_DWORD *)(v11 + 3604);
    if ( v12 == -1 )
      break;
    if ( (v12 & 0x100) != 0 )
      goto LABEL_37;
    KeStallExecutionProcessor(0x32u);
    if ( (unsigned int)++v9 >= 0x7D0 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v13 = &unk_1400D44E0;
        v14 = &unk_1400D44E0;
        v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v55) + 16LL);
        if ( v15 )
          v14 = v15;
        v16 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v53);
        v52 = 2000;
        LOBYTE(v17) = 3;
        v18 = *(void **)(*(_QWORD *)v16 + 16LL);
        if ( v18 )
          v13 = v18;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v17,
          14,
          30,
          (__int64)&unk_1400D71E0,
          (__int64)v13,
          (__int64)v14,
          (__int64)qword_1400B7720,
          v52);
        v1 = -64;
      }
      if ( v1 < 0 )
      {
        v19 = v54;
        v1 &= ~0x80u;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      if ( (v1 & 0x40) != 0 )
      {
        v20 = v56;
        goto LABEL_30;
      }
      goto LABEL_34;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(v10 + 8) + 8LL) != -1 )
  {
LABEL_37:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = &unk_1400D44E0;
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v57) + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = *(_QWORD *)(a1[22] + 16LL);
      v25 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v59);
      v52 = v9;
      LOBYTE(v26) = 4;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v21 = v27;
      sub_1400A5E80(
        v24,
        v26,
        14,
        29,
        (__int64)&unk_1400D71E0,
        (__int64)v22,
        (__int64)v21,
        (__int64)qword_1400B7720,
        v52);
      v1 = 48;
    }
    if ( (v1 & 0x20) != 0 )
    {
      v28 = v58;
      v1 &= ~0x20u;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v20 = v60;
LABEL_30:
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
LABEL_34:
    v8 = 0;
    goto LABEL_90;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 3LL);
  v8 = -1073741130;
LABEL_53:
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v30 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v63);
    v31 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v61);
    v52 = v8;
    v32 = &unk_1400D44E0;
    v51 = L"m_mmioAccessor->ReadRegisterSafe(0x00E14, phpmValue)";
    v33 = &unk_1400D44E0;
    v34 = *(void **)(*(_QWORD *)v31 + 16LL);
    if ( v34 )
      v33 = v34;
    v35 = *(_QWORD *)(a1[22] + 16LL);
    if ( *(_QWORD *)(v30 + 16) )
      v32 = *(void **)(v30 + 16);
    v49 = (__int64)v33;
    LOBYTE(v33) = 2;
    sub_1400A5E80(v35, (_DWORD)v33, 14, 28, (__int64)&unk_1400D71E0, v49, (__int64)v32, (__int64)v51, v52);
    v1 = 12;
  }
  if ( (v1 & 8) != 0 )
  {
    v36 = v62;
    v1 &= ~8u;
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
        if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v37 = v64;
    if ( v64 )
    {
      if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
  }
  sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00E14, phpmValue)", 250, 156, v8);
LABEL_90:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v8;
}
