__int64 __fastcall sub_140027148(_QWORD *a1)
{
  _QWORD *v1; // rdi
  char v2; // r14
  __int64 *v3; // r13
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // r15d
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  void *v19; // rcx
  void *v20; // r8
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  _QWORD *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rcx
  void *v27; // rdi
  void *v28; // rax
  __int64 v29; // rax
  void *v30; // rdx
  void *v31; // rax
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  _QWORD *v34; // rbx
  __int64 v35; // rax
  void *v36; // r12
  _QWORD *v37; // rcx
  void *v38; // rdi
  void *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  void *v42; // rax
  volatile signed __int32 *v43; // rbx
  int v44; // eax
  _QWORD *v45; // rbx
  __int64 v46; // rax
  void *v47; // rsi
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rax
  int v51; // edx
  void *v52; // rax
  volatile signed __int32 *v53; // rbx
  volatile signed __int32 *v54; // rbx
  __int64 v56; // [rsp+30h] [rbp-79h]
  _BYTE v57[8]; // [rsp+50h] [rbp-59h] BYREF
  volatile signed __int32 *v58; // [rsp+58h] [rbp-51h]
  _BYTE v59[8]; // [rsp+60h] [rbp-49h] BYREF
  volatile signed __int32 *v60; // [rsp+68h] [rbp-41h]
  _BYTE v61[8]; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int32 *v62; // [rsp+78h] [rbp-31h]
  _BYTE v63[8]; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v64; // [rsp+88h] [rbp-21h]
  _BYTE v65[8]; // [rsp+90h] [rbp-19h] BYREF
  volatile signed __int32 *v66; // [rsp+98h] [rbp-11h]
  _BYTE v67[8]; // [rsp+A0h] [rbp-9h] BYREF
  volatile signed __int32 *v68; // [rsp+A8h] [rbp-1h]
  _BYTE v69[8]; // [rsp+B0h] [rbp+7h] BYREF
  volatile signed __int32 *v70; // [rsp+B8h] [rbp+Fh]
  _BYTE v71[8]; // [rsp+C0h] [rbp+17h] BYREF
  volatile signed __int32 *v72; // [rsp+C8h] [rbp+1Fh]
  char v74; // [rsp+118h] [rbp+6Fh]

  v1 = a1;
  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::WaitForFirmwareProcessCommand",
             (unsigned __int64)(v1 + 1) & -(__int64)(v1 != 0LL));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = v1[46];
    v8 = *(_QWORD *)(v7 + 8);
    if ( !v8 || *(_DWORD *)(v7 + 20) )
    {
      v44 = -1073741661;
      if ( *(_DWORD *)(v7 + 20) == 3 )
        v44 = -1073741130;
      v10 = v44;
      goto LABEL_67;
    }
    v9 = *(_DWORD *)(v8 + 36608);
    v74 = v9;
    if ( v9 != -1 )
      break;
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 3LL);
      v10 = -1073741130;
LABEL_67:
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v45 = v1 + 8;
        v46 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(v1[8] + 16LL))(v1 + 8, v71);
        v47 = &unk_1400D44E0;
        v48 = v1 + 8;
        v1 = &unk_1400D44E0;
        v49 = *(_QWORD **)(*(_QWORD *)v46 + 16LL);
        if ( v49 )
          v1 = v49;
        v50 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v45 + 24LL))(v48, v69);
        LOBYTE(v51) = 2;
        v52 = *(void **)(*(_QWORD *)v50 + 16LL);
        if ( v52 )
          v47 = v52;
        sub_1400A5E80(
          *(_QWORD *)(a1[23] + 16LL),
          v51,
          14,
          60,
          (__int64)&unk_1400D6110,
          (__int64)v47,
          (__int64)v1,
          (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x08F00, hicrValue)",
          v10);
        LODWORD(v1) = (_DWORD)a1;
        v2 = 3;
      }
      if ( (v2 & 2) != 0 )
      {
        v53 = v70;
        v2 &= ~2u;
        if ( v70 )
        {
          if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
            if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
          }
        }
      }
      if ( (v2 & 1) != 0 )
      {
        v54 = v72;
        if ( v72 )
        {
          if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
            if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
          }
        }
      }
      sub_14000D660((_DWORD)v1 + 8, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x08F00, hicrValue)", 729, 45, v10);
      goto LABEL_84;
    }
LABEL_13:
    KeStallExecutionProcessor(0x32u);
    if ( (unsigned int)++v6 >= 0x1F4 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v11 = v1 + 8;
        v12 = *(_QWORD *)(v1[23] + 16LL);
        v13 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(v1[8] + 24LL))(v1 + 8, v57);
        v14 = v1 + 8;
        v15 = *v13;
        v16 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v11 + 16LL))(v14, v59);
        LOBYTE(v17) = 2;
        v18 = *(void **)(*(_QWORD *)v16 + 16LL);
        v19 = &unk_1400D44E0;
        v20 = &unk_1400D44E0;
        if ( v18 )
          v20 = v18;
        if ( *(_QWORD *)(v15 + 16) )
          v19 = *(void **)(v15 + 16);
        sub_1400A5E80(
          v12,
          v17,
          14,
          63,
          (__int64)&unk_1400D6110,
          (__int64)v19,
          (__int64)v20,
          (__int64)qword_1400B7720,
          168);
        v2 = -64;
      }
      if ( v2 < 0 )
      {
        v21 = v58;
        v2 &= ~0x80u;
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
      if ( (v2 & 0x40) != 0 )
      {
        v22 = v60;
        goto LABEL_27;
      }
      goto LABEL_31;
    }
  }
  if ( (v9 & 2) != 0 )
    goto LABEL_13;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
  {
    v23 = v1 + 8;
    v24 = *(_QWORD *)(v1[23] + 16LL);
    v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(v1[8] + 24LL))(v1 + 8, v61);
    v26 = v1 + 8;
    v27 = &unk_1400D44E0;
    v28 = *(void **)(*(_QWORD *)v25 + 16LL);
    if ( v28 )
      v27 = v28;
    v29 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v23 + 16LL))(v26, v63);
    v30 = &unk_1400D44E0;
    v31 = *(void **)(*(_QWORD *)v29 + 16LL);
    if ( v31 )
      v30 = v31;
    v56 = (__int64)v30;
    LOBYTE(v30) = 5;
    sub_1400A5E80(v24, (_DWORD)v30, 14, 61, (__int64)&unk_1400D6110, (__int64)v27, v56, (__int64)qword_1400B7720, v6);
    v1 = a1;
    v2 = 12;
  }
  if ( (v2 & 8) != 0 )
  {
    v32 = v62;
    v2 &= ~8u;
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v33 = v64;
    v2 &= ~4u;
    if ( v64 )
    {
      if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
  }
  if ( (v74 & 4) == 0 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v34 = v1 + 8;
      v2 |= 0x30u;
      v35 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(v1[8] + 16LL))(v1 + 8, v67);
      v36 = &unk_1400D44E0;
      v37 = v1 + 8;
      v38 = &unk_1400D44E0;
      v39 = *(void **)(*(_QWORD *)v35 + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v34 + 24LL))(v37, v65);
      LOBYTE(v41) = 2;
      v42 = *(void **)(*(_QWORD *)v40 + 16LL);
      if ( v42 )
        v36 = v42;
      sub_1400A5E80(
        *(_QWORD *)(a1[23] + 16LL),
        v41,
        14,
        62,
        (__int64)&unk_1400D6110,
        (__int64)v36,
        (__int64)v38,
        (__int64)qword_1400B7720,
        v74);
    }
    if ( (v2 & 0x20) != 0 )
    {
      v43 = v66;
      v2 &= ~0x20u;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v22 = v68;
LABEL_27:
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
LABEL_31:
    v10 = -1073741661;
    goto LABEL_84;
  }
  v10 = 0;
LABEL_84:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v10;
}
