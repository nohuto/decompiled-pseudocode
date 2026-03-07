__int64 __fastcall sub_1400228E4(_QWORD *a1)
{
  char v2; // si
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rbx
  int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  void *v14; // r14
  void *v15; // rsi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // r14
  volatile signed __int32 *v21; // rsi
  unsigned int v22; // r15d
  void *v23; // rsi
  void *v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  void *v29; // rcx
  volatile signed __int32 *v30; // r14
  volatile signed __int32 *v31; // rsi
  int v32; // eax
  void *v33; // rsi
  void *v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  int v37; // edx
  void *v38; // rax
  void *v39; // rcx
  volatile signed __int32 *v40; // r14
  volatile signed __int32 *v41; // rsi
  int v42; // eax
  void *v43; // rsi
  void *v44; // rax
  __int64 v45; // r14
  __int64 v46; // rax
  int v47; // edx
  void *v48; // rax
  void *v49; // rcx
  volatile signed __int32 *v50; // r14
  volatile signed __int32 *v51; // rsi
  signed __int32 v53[8]; // [rsp+8h] [rbp-99h] BYREF
  int v54; // [rsp+48h] [rbp-59h]
  _BYTE v55[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v56; // [rsp+60h] [rbp-41h]
  _BYTE v57[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v58; // [rsp+70h] [rbp-31h]
  _BYTE v59[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v60; // [rsp+80h] [rbp-21h]
  _BYTE v61[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v62; // [rsp+90h] [rbp-11h]
  _BYTE v63[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v64; // [rsp+A0h] [rbp-1h]
  _BYTE v65[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v66; // [rsp+B0h] [rbp+Fh]
  _BYTE v67[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v68; // [rsp+C0h] [rbp+1Fh]
  _BYTE v69[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v70; // [rsp+D0h] [rbp+2Fh]

  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::AcquireFirmwareSemaphore",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[48];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = 0;
  while ( 1 )
  {
    v8 = a1[46];
    v9 = *(_QWORD *)(v8 + 8);
    if ( !v9 || *(_DWORD *)(v8 + 20) )
    {
      v42 = -1073741661;
      if ( *(_DWORD *)(v8 + 20) == 3 )
        v42 = -1073741130;
      v22 = v42;
      goto LABEL_77;
    }
    v10 = *(_DWORD *)(v9 + 23376);
    if ( v10 == -1 && *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) == -1 )
      break;
    *(_DWORD *)(*(_QWORD *)(v8 + 8) + 23376LL) = v10 | 2;
    _InterlockedOr(v53, 0);
    v11 = a1[46];
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 || *(_DWORD *)(v11 + 20) )
    {
      v32 = -1073741661;
      if ( *(_DWORD *)(v11 + 20) == 3 )
        v32 = -1073741130;
      v22 = v32;
LABEL_57:
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v33 = &unk_1400D44E0;
        v34 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v63) + 16LL);
        if ( v34 )
          v33 = v34;
        v35 = *(_QWORD *)(a1[23] + 16LL);
        v36 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v65);
        v54 = v22;
        LOBYTE(v37) = 2;
        v38 = *(void **)(*(_QWORD *)v36 + 16LL);
        v39 = &unk_1400D44E0;
        if ( v38 )
          v39 = v38;
        sub_1400A5E80(
          v35,
          v37,
          14,
          40,
          (__int64)&unk_1400D6110,
          (__int64)v33,
          (__int64)v39,
          (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05B50, swsmValue)",
          v54);
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v40 = v64;
        v2 &= ~8u;
        if ( v64 )
        {
          if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
            if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v41 = v66;
        if ( v66 )
        {
          if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
            if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
          }
        }
      }
      sub_14000D660((_DWORD)a1 + 8, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05B50, swsmValue)", 524, 45, v22);
      goto LABEL_94;
    }
    v13 = *(_DWORD *)(v12 + 23376);
    if ( v13 == -1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v11 + 8) + 8LL) != -1 )
      {
LABEL_36:
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
        {
          v23 = &unk_1400D44E0;
          v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v61) + 16LL);
          if ( v24 )
            v23 = v24;
          v25 = *(_QWORD *)(a1[23] + 16LL);
          v26 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v59);
          v54 = v7;
          LOBYTE(v27) = 5;
          v28 = *(void **)(*(_QWORD *)v26 + 16LL);
          v29 = &unk_1400D44E0;
          if ( v28 )
            v29 = v28;
          sub_1400A5E80(
            v25,
            v27,
            14,
            41,
            (__int64)&unk_1400D6110,
            (__int64)v29,
            (__int64)v23,
            (__int64)qword_1400B7720,
            v54);
          v2 = 48;
        }
        if ( (v2 & 0x20) != 0 )
        {
          v30 = v60;
          v2 &= ~0x20u;
          if ( v60 )
          {
            if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
        if ( (v2 & 0x10) != 0 )
        {
          v31 = v62;
          if ( v62 )
          {
            if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
              if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
            }
          }
        }
        v22 = 0;
        goto LABEL_94;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, 3LL);
      v22 = -1073741130;
      goto LABEL_57;
    }
    if ( (v13 & 2) != 0 )
      goto LABEL_36;
    KeStallExecutionProcessor(0x32u);
    if ( (unsigned int)++v7 >= 0x7D0 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = &unk_1400D44E0;
        v15 = &unk_1400D44E0;
        v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v55) + 16LL);
        if ( v16 )
          v15 = v16;
        v17 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v57);
        v54 = 100000;
        LOBYTE(v18) = 2;
        v19 = *(void **)(*(_QWORD *)v17 + 16LL);
        if ( v19 )
          v14 = v19;
        sub_1400A5E80(
          *(_QWORD *)(a1[23] + 16LL),
          v18,
          14,
          42,
          (__int64)&unk_1400D6110,
          (__int64)v15,
          (__int64)v14,
          (__int64)qword_1400B7720,
          v54);
        v2 = -64;
      }
      if ( v2 < 0 )
      {
        v20 = v56;
        v2 &= ~0x80u;
        if ( v56 )
        {
          if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      if ( (v2 & 0x40) != 0 )
      {
        v21 = v58;
        if ( v58 )
        {
          if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      v22 = -1073741753;
      goto LABEL_94;
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 3LL);
  v22 = -1073741130;
LABEL_77:
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v43 = &unk_1400D44E0;
    v44 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v69) + 16LL);
    if ( v44 )
      v43 = v44;
    v45 = *(_QWORD *)(a1[23] + 16LL);
    v46 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v67);
    v54 = v22;
    LOBYTE(v47) = 2;
    v48 = *(void **)(*(_QWORD *)v46 + 16LL);
    v49 = &unk_1400D44E0;
    if ( v48 )
      v49 = v48;
    sub_1400A5E80(
      v45,
      v47,
      14,
      39,
      (__int64)&unk_1400D6110,
      (__int64)v49,
      (__int64)v43,
      (__int64)L"m_mmioAccessor->SetMaskSafe(0x05B50, (1 << 1))",
      v54);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v50 = v68;
    v2 &= ~2u;
    if ( v68 )
    {
      if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
        if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v51 = v70;
    if ( v70 )
    {
      if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
      }
    }
  }
  sub_140009704((_DWORD)a1 + 8, (__int64)L"m_mmioAccessor->SetMaskSafe(0x05B50, (1 << 1))", 523, 45, v22);
LABEL_94:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v22;
}
