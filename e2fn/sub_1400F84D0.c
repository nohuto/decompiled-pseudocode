__int64 __fastcall sub_1400F84D0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // rcx
  const wchar_t *v13; // r13
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  const wchar_t *v20; // r13
  const wchar_t *v21; // rdi
  const wchar_t *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  int v28; // eax
  const wchar_t *v29; // r13
  const wchar_t *v30; // rdi
  const wchar_t *v31; // rax
  __int64 v32; // rax
  const wchar_t *v33; // rax
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rdi
  signed __int32 v37[8]; // [rsp+8h] [rbp-79h] BYREF
  const wchar_t *v38; // [rsp+38h] [rbp-49h]
  const wchar_t *v39; // [rsp+40h] [rbp-41h]
  unsigned int v40; // [rsp+48h] [rbp-39h]
  _BYTE v41[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v42; // [rsp+60h] [rbp-21h]
  _BYTE v43[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v44; // [rsp+70h] [rbp-11h]
  _BYTE v45[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v46; // [rsp+80h] [rbp-1h]
  _BYTE v47[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v48; // [rsp+90h] [rbp+Fh]
  _BYTE v49[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v50; // [rsp+A0h] [rbp+1Fh]
  _BYTE v51[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v52; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxQueue::EnableQueue", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 392);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v28 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v28 = -1073741130;
    v9 = v28;
    goto LABEL_52;
  }
  v8 = *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 10280) + v7);
  if ( v8 == -1 && *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v9 = -1073741130;
LABEL_52:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v29 = (const wchar_t *)&unk_1400D44E0;
      v30 = (const wchar_t *)&unk_1400D44E0;
      v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v51)
                              + 16LL);
      if ( v31 )
        v30 = v31;
      v32 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v49);
      v40 = v9;
      v39 = L"m_mmioAccessor->ReadRegisterSafe((0x02828 + (m_queueId) * 0x100), rxDescriptorControl)";
      v38 = v30;
      v33 = *(const wchar_t **)(*(_QWORD *)v32 + 16LL);
      if ( v33 )
        v29 = v33;
      sub_1400A5E80(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL), 2u, 0xAu, 0x14u, (__int64)&unk_1400D56F8, v29, v38, v39);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v34 = v50;
      v1 &= ~2u;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v35 = v52;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    sub_14000ABC4(
      a1,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe((0x02828 + (m_queueId) * 0x100), rxDescriptorControl)",
      288,
      57,
      v9);
    goto LABEL_69;
  }
  v10 = *(_QWORD *)(a1 + 392);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = (_DWORD *)(v10 + 20);
  if ( !v11 || *v12 )
  {
    v9 = -1073741130;
    if ( *v12 != 3 )
      v9 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v45)
                              + 16LL);
      if ( v22 )
        v21 = v22;
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v47);
      v40 = v9;
      v25 = *(const wchar_t **)(*(_QWORD *)v24 + 16LL);
      if ( v25 )
        v20 = v25;
      sub_1400A5E80(
        v23,
        2u,
        0xAu,
        0x15u,
        (__int64)&unk_1400D56F8,
        v21,
        v20,
        L"m_mmioAccessor->WriteRegisterSafe((0x02828 + (m_queueId) * 0x100), rxDescriptorControl)");
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v26 = v46;
      v1 &= ~8u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v27 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_1400117D0(
      a1,
      (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x02828 + (m_queueId) * 0x100), rxDescriptorControl)",
      292,
      57,
      v9);
  }
  else
  {
    *(_DWORD *)((unsigned int)((*(_DWORD *)(a1 + 360) << 8) + 10280) + v11) = v8 | 0x2000000;
    _InterlockedOr(v37, 0);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v43)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v41)
                              + 16LL);
      v17 = *(_QWORD *)(a1 + 176);
      if ( v16 )
        v13 = v16;
      v40 = *(_DWORD *)(a1 + 360);
      sub_1400A5E80(
        *(_QWORD *)(v17 + 16),
        4u,
        0xAu,
        0x16u,
        (__int64)&unk_1400D56F8,
        v13,
        v14,
        (const wchar_t *)qword_14014EC70);
      v1 = 48;
    }
    if ( (v1 & 0x20) != 0 )
    {
      v18 = v42;
      v1 &= ~0x20u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v19 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    v9 = 0;
  }
LABEL_69:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v9;
}
