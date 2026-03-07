__int64 __fastcall sub_1400148E4(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  char v3; // di
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r14d
  int v14; // eax
  const wchar_t *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rax
  void *v18; // rsi
  void *v19; // rdx
  void *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdi
  void *v29; // rax
  void *v30; // rcx
  void *v31; // rdx
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // edx
  int v37; // eax
  void *v38; // rsi
  void *v39; // rdi
  void *v40; // rax
  __int64 v41; // rax
  int v42; // edx
  void *v43; // rax
  volatile signed __int32 *v44; // rsi
  volatile signed __int32 *v45; // rdi
  __int64 v47; // [rsp+30h] [rbp-51h]
  __int64 v48; // [rsp+38h] [rbp-49h]
  _BYTE v49[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v50; // [rsp+60h] [rbp-21h]
  _BYTE v51[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v52; // [rsp+70h] [rbp-11h]
  _BYTE v53[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v54; // [rsp+80h] [rbp-1h]
  _BYTE v55[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v56; // [rsp+90h] [rbp+Fh]
  _BYTE v57[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v58; // [rsp+A0h] [rbp+1Fh]
  _BYTE v59[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v60; // [rsp+B0h] [rbp+2Fh]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::CalculateTransmitWaitValue",
             (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  *a3 = 0;
  if ( a2 == 100000000 )
  {
    v34 = a1[51];
    v35 = *(_QWORD *)(v34 + 8);
    if ( !v35 || *(_DWORD *)(v34 + 20) )
    {
      v37 = -1073741661;
      if ( *(_DWORD *)(v34 + 20) == 3 )
        v37 = -1073741130;
      v13 = v37;
    }
    else
    {
      v36 = *(_DWORD *)(v35 + 3636);
      if ( v36 != -1 || *(_DWORD *)(*(_QWORD *)(v34 + 8) + 8LL) != -1 )
      {
        v12 = v36 >> 8;
        goto LABEL_65;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 8LL))(v34, 3LL);
      v13 = -1073741130;
    }
    v15 = L"m_mmioAccessor->ReadRegisterSafe(0x00E34, eeeSetupValue)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v38 = &unk_1400D44E0;
      v39 = &unk_1400D44E0;
      v40 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v59) + 16LL);
      if ( v40 )
        v39 = v40;
      v41 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v57);
      LOBYTE(v42) = 2;
      v43 = *(void **)(*(_QWORD *)v41 + 16LL);
      if ( v43 )
        v38 = v43;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v42,
        10,
        21,
        (__int64)&unk_1400D5648,
        (__int64)v38,
        (__int64)v39,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00E34, eeeSetupValue)",
        v13);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v44 = v58;
      v3 &= ~2u;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v45 = v60;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
          if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
        }
      }
    }
    v23 = 210;
    goto LABEL_87;
  }
  if ( a2 == 1000000000 )
  {
    v24 = a1[51];
    v25 = *(_QWORD *)(v24 + 8);
    if ( !v25 || *(_DWORD *)(v24 + 20) )
    {
      v26 = -1073741661;
      if ( *(_DWORD *)(v24 + 20) == 3 )
        v26 = -1073741130;
      v13 = v26;
    }
    else
    {
      v12 = *(_DWORD *)(v25 + 3636);
      if ( v12 != -1 || *(_DWORD *)(*(_QWORD *)(v24 + 8) + 8LL) != -1 )
        goto LABEL_65;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 8LL))(v24, 3LL);
      v13 = -1073741130;
    }
    v15 = L"m_mmioAccessor->ReadRegisterSafe(0x00E34, eeeSetupValue)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v27 = *(_QWORD *)(a1[22] + 16LL);
      v28 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v53);
      v29 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v55) + 16LL);
      v30 = &unk_1400D44E0;
      v31 = &unk_1400D44E0;
      if ( v29 )
        v31 = v29;
      v48 = (__int64)v31;
      LOBYTE(v31) = 2;
      if ( *(_QWORD *)(v28 + 16) )
        v30 = *(void **)(v28 + 16);
      sub_1400A5E80(
        v27,
        (_DWORD)v31,
        10,
        22,
        (__int64)&unk_1400D5648,
        (__int64)v30,
        v48,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00E34, eeeSetupValue)",
        v13);
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v32 = v54;
      v3 &= ~8u;
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
    if ( (v3 & 4) != 0 )
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
    v23 = 214;
    goto LABEL_87;
  }
  if ( a2 != 2500000000LL )
  {
LABEL_66:
    v13 = 0;
    goto LABEL_88;
  }
  v10 = a1[51];
  v11 = *(_QWORD *)(v10 + 8);
  if ( !v11 || *(_DWORD *)(v10 + 20) )
  {
    v14 = -1073741661;
    if ( *(_DWORD *)(v10 + 20) == 3 )
      v14 = -1073741130;
    v13 = v14;
    goto LABEL_17;
  }
  v12 = *(_DWORD *)(v11 + 3644);
  if ( v12 != -1 || *(_DWORD *)(*(_QWORD *)(v10 + 8) + 8LL) != -1 )
  {
LABEL_65:
    *a3 = 500 * (unsigned __int8)v12;
    goto LABEL_66;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 3LL);
  v13 = -1073741130;
LABEL_17:
  v15 = L"m_mmioAccessor->ReadRegisterSafe(0x00E3C, eeeSetupValue)";
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v16 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v51);
    v17 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v49);
    v18 = &unk_1400D44E0;
    v19 = &unk_1400D44E0;
    v20 = *(void **)(*(_QWORD *)v17 + 16LL);
    if ( v20 )
      v19 = v20;
    if ( *(_QWORD *)(v16 + 16) )
      v18 = *(void **)(v16 + 16);
    v47 = (__int64)v19;
    LOBYTE(v19) = 2;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      (_DWORD)v19,
      10,
      23,
      (__int64)&unk_1400D5648,
      v47,
      (__int64)v18,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00E3C, eeeSetupValue)",
      v13);
    v3 = 48;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v21 = v50;
    v3 &= ~0x20u;
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  if ( (v3 & 0x10) != 0 )
  {
    v22 = v52;
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  v23 = 218;
LABEL_87:
  sub_140009AE8((int)a1, (__int64)v15, v23, 152, v13);
LABEL_88:
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  return v13;
}
