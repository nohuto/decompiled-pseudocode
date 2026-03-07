__int64 __fastcall sub_1400169B8(_QWORD *a1, unsigned int a2)
{
  char v2; // di
  __int64 *v4; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r12
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rdi
  unsigned int v16; // r14d
  __int64 v17; // r8
  unsigned int v18; // r9d
  char v19; // cl
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // r8
  _DWORD *v25; // rcx
  void *v26; // r12
  void *v27; // rdi
  void *v28; // rax
  __int64 v29; // rax
  int v30; // edx
  void *v31; // rax
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rdi
  int v34; // eax
  void *v35; // r12
  void *v36; // rdi
  void *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  int v40; // edx
  void *v41; // rax
  volatile signed __int32 *v42; // rsi
  volatile signed __int32 *v43; // rdi
  signed __int32 v45[8]; // [rsp+8h] [rbp-79h] BYREF
  __int64 v46; // [rsp+38h] [rbp-49h]
  const wchar_t *v47; // [rsp+40h] [rbp-41h]
  unsigned int v48; // [rsp+48h] [rbp-39h]
  char v49[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v50; // [rsp+60h] [rbp-21h]
  char v51[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v52; // [rsp+70h] [rbp-11h]
  char v53[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v54; // [rsp+80h] [rbp-1h]
  char v55[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v56; // [rsp+90h] [rbp+Fh]
  char v57[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v58; // [rsp+A0h] [rbp+1Fh]
  char v59[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v60; // [rsp+B0h] [rbp+2Fh]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::WriteMaximumThreshold",
             (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( a2 > 0x1FF8000 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v51) + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v49);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v12,
        14,
        29,
        (__int64)&unk_1400D5648,
        (__int64)v8,
        (__int64)v9,
        (__int64)qword_1400B7720);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v50;
      v2 &= ~2u;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v52;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = -1073741823;
    goto LABEL_77;
  }
  v17 = a1[51];
  v18 = a2 >> 10;
  v19 = 15;
  if ( a2 >> 10 <= 0x3FF )
    v19 = 10;
  v20 = *(_QWORD *)(v17 + 8);
  v21 = a2 >> v19;
  v22 = v21 - 1;
  if ( !v21 )
    v22 = 0;
  if ( !v20 || *(_DWORD *)(v17 + 20) )
  {
    v34 = -1073741661;
    if ( *(_DWORD *)(v17 + 20) == 3 )
      v34 = -1073741130;
    v16 = v34;
    goto LABEL_60;
  }
  if ( *(_DWORD *)(v20 + 23476) == -1 && *(_DWORD *)(*(_QWORD *)(v17 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v17 + 8LL))(a1[51], 3LL);
    v16 = -1073741130;
LABEL_60:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v35 = &unk_1400D44E0;
      v36 = &unk_1400D44E0;
      v37 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v57) + 16LL);
      if ( v37 )
        v36 = v37;
      v38 = *(_QWORD *)(a1[22] + 16LL);
      v39 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v59);
      v48 = v16;
      LOBYTE(v40) = 2;
      v41 = *(void **)(*(_QWORD *)v39 + 16LL);
      if ( v41 )
        v35 = v41;
      sub_1400A5E80(
        v38,
        v40,
        10,
        30,
        (__int64)&unk_1400D5648,
        (__int64)v36,
        (__int64)v35,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05BB4, ltrValue)",
        v48);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v42 = v58;
      v2 &= ~8u;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v43 = v60;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    sub_1400142A4((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05BB4, ltrValue)", 324, 152, v16);
    goto LABEL_77;
  }
  if ( v22 == (*(_DWORD *)(v20 + 23476) & 0x3FF) )
  {
LABEL_37:
    v16 = 0;
    goto LABEL_77;
  }
  v23 = a1[51];
  v24 = *(_QWORD *)(v23 + 8);
  v25 = (_DWORD *)(v23 + 20);
  if ( v24 && !*v25 )
  {
    *(_DWORD *)(v24 + 23476) = v22 | (((v18 > 0x3FF) + 34) << 10);
    _InterlockedOr(v45, 0);
    goto LABEL_37;
  }
  v16 = -1073741130;
  if ( *v25 != 3 )
    v16 = -1073741661;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v26 = &unk_1400D44E0;
    v27 = &unk_1400D44E0;
    v28 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v55) + 16LL);
    if ( v28 )
      v27 = v28;
    v29 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v53);
    v48 = v16;
    v47 = L"m_mmioAccessor->WriteRegisterSafe(0x05BB4, ltrValue)";
    LOBYTE(v30) = 2;
    v46 = (__int64)v27;
    v31 = *(void **)(*(_QWORD *)v29 + 16LL);
    if ( v31 )
      v26 = v31;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v30,
      10,
      31,
      (__int64)&unk_1400D5648,
      (__int64)v26,
      v46,
      (__int64)v47,
      v48);
    v2 = 48;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v32 = v54;
    v2 &= ~0x20u;
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
  }
  if ( (v2 & 0x10) != 0 )
  {
    v33 = v56;
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
  }
  sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x05BB4, ltrValue)", 329, 152, v16);
LABEL_77:
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v16;
}
