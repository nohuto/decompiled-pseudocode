__int64 __fastcall sub_140102598(__int64 a1)
{
  char v1; // r15
  __int64 *v2; // rsi
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // r12d
  const wchar_t *v10; // r12
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  const wchar_t *v21; // rdi
  const wchar_t *v22; // rax
  const wchar_t *v23; // rax
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  int v26; // eax
  const wchar_t *v27; // rdi
  const wchar_t *v28; // rax
  __int64 v29; // rsi
  const wchar_t *v30; // rax
  const wchar_t *v31; // rcx
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  int v34; // eax
  const wchar_t *v35; // r14
  const wchar_t *v36; // rdi
  const wchar_t *v37; // rax
  __int64 v38; // rsi
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  _BYTE v43[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v44; // [rsp+60h] [rbp-41h]
  _BYTE v45[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v46; // [rsp+70h] [rbp-31h]
  _BYTE v47[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v48; // [rsp+80h] [rbp-21h]
  _BYTE v49[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v50; // [rsp+90h] [rbp-11h]
  _BYTE v51[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v52; // [rsp+A0h] [rbp-1h]
  _BYTE v53[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v54; // [rsp+B0h] [rbp+Fh]
  _BYTE v55[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v56; // [rsp+C0h] [rbp+1Fh]
  _BYTE v57[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v58; // [rsp+D0h] [rbp+2Fh]
  __int64 *v59; // [rsp+108h] [rbp+67h]

  v1 = 0;
  v2 = 0LL;
  v59 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::UpdateWakeStatus", a1);
      if ( v5 )
        v2 = v5;
      v59 = v2;
    }
  }
  v6 = *(_QWORD *)(a1 + 432);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v34 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v34 = -1073741130;
    v9 = v34;
    goto LABEL_73;
  }
  v8 = *(_DWORD *)(v7 + 22544);
  *(_DWORD *)(a1 + 504) = v8;
  if ( v8 == -1 && *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v9 = -1073741130;
LABEL_73:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v35 = (const wchar_t *)&unk_1400D44E0;
      v36 = (const wchar_t *)&unk_1400D44E0;
      v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v55)
                              + 16LL);
      if ( v37 )
        v36 = v37;
      v38 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v57)
                              + 16LL);
      if ( v39 )
        v35 = v39;
      sub_1400A5E80(
        v38,
        2u,
        0xAu,
        0x13u,
        (__int64)&unk_1400D64E8,
        v36,
        v35,
        L"m_mmioAccessor->ReadRegisterSafe(0x05810, m_wusRegister)");
      v2 = v59;
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v40 = v56;
      v1 &= ~2u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v41 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    sub_140009AE8(a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05810, m_wusRegister)", 152, 59, v9);
    goto LABEL_90;
  }
  v10 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = (const wchar_t *)&unk_1400D44E0;
    v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v45)
                            + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v43);
    v14 = (const wchar_t *)&unk_1400D44E0;
    v15 = *(const wchar_t **)(*(_QWORD *)v13 + 16LL);
    if ( v15 )
      v14 = v15;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xAu,
      0x14u,
      (__int64)&unk_1400D64E8,
      v14,
      v11,
      (const wchar_t *)qword_14014EC70);
    v1 = 12;
  }
  if ( (v1 & 8) != 0 )
  {
    v16 = v44;
    v1 &= ~8u;
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v17 = v46;
    v1 &= ~4u;
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  v18 = *(_QWORD *)(a1 + 432);
  v19 = *(_QWORD *)(v18 + 8);
  if ( !v19 || *(_DWORD *)(v18 + 20) )
  {
    v26 = -1073741661;
    if ( *(_DWORD *)(v18 + 20) == 3 )
      v26 = -1073741130;
    v9 = v26;
    goto LABEL_53;
  }
  v20 = *(_DWORD *)(v19 + 22548);
  *(_DWORD *)(a1 + 508) = v20;
  if ( v20 == -1 && *(_DWORD *)(*(_QWORD *)(v18 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 8LL))(v18, 3LL);
    v9 = -1073741130;
LABEL_53:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 |= 0x30u;
      v27 = (const wchar_t *)&unk_1400D44E0;
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v51)
                              + 16LL);
      if ( v28 )
        v27 = v28;
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v53)
                              + 16LL);
      v31 = (const wchar_t *)&unk_1400D44E0;
      if ( v30 )
        v31 = v30;
      sub_1400A5E80(
        v29,
        2u,
        0xAu,
        0x15u,
        (__int64)&unk_1400D64E8,
        v27,
        v31,
        L"m_mmioAccessor->ReadRegisterSafe(0x05814, m_wusExtRegister)");
      v2 = v59;
    }
    if ( (v1 & 0x20) != 0 )
    {
      v32 = v52;
      v1 &= ~0x20u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v33 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    sub_140028FA0(a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05814, m_wusExtRegister)", 155, 59, v9);
    goto LABEL_90;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v1 |= 0xC0u;
    v21 = (const wchar_t *)&unk_1400D44E0;
    v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v49)
                            + 16LL);
    if ( v22 )
      v21 = v22;
    v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v47)
                            + 16LL);
    if ( v23 )
      v10 = v23;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xAu,
      0x16u,
      (__int64)&unk_1400D64E8,
      v10,
      v21,
      (const wchar_t *)qword_14014EC70);
  }
  if ( v1 < 0 )
  {
    v24 = v48;
    v1 &= ~0x80u;
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  if ( (v1 & 0x40) != 0 )
  {
    v25 = v50;
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
  }
  v9 = 0;
LABEL_90:
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  return v9;
}
