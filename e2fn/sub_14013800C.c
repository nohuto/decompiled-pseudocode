__int64 __fastcall sub_14013800C(__int64 a1)
{
  char v1; // r14
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rax
  __int64 v8; // rax
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rdi
  __int64 v18; // rax
  const wchar_t *v19; // r8
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  const wchar_t *v25; // rsi
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  _BYTE v32[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v33; // [rsp+60h] [rbp-41h]
  _BYTE v34[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v35; // [rsp+70h] [rbp-31h]
  _BYTE v36[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v37; // [rsp+80h] [rbp-21h]
  _BYTE v38[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v39; // [rsp+90h] [rbp-11h]
  _BYTE v40[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v41; // [rsp+A0h] [rbp-1h]
  _BYTE v42[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v43; // [rsp+B0h] [rbp+Fh]
  _QWORD v44[4]; // [rsp+B8h] [rbp+17h] BYREF
  unsigned int v45; // [rsp+108h] [rbp+67h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterNsOffload::EvtDeviceArmWakeFromSx", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  sub_140138570(a1);
  if ( !*(_BYTE *)(a1 + 360) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v42)
                              + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v40)
                              + 16LL);
      if ( v28 )
        v25 = v28;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0xFu,
        (__int64)&unk_1400D9D48,
        v25,
        v26,
        (const wchar_t *)qword_14014EC70);
      v1 = 48;
    }
    if ( (v1 & 0x20) != 0 )
    {
      v29 = v41;
      v1 &= ~0x20u;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v30 = v43;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    goto LABEL_57;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 = (const wchar_t *)&unk_1400D44E0;
    v7 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v34)
                           + 16LL);
    if ( v7 )
      v6 = v7;
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v32);
    v9 = (const wchar_t *)&unk_1400D44E0;
    v10 = *(const wchar_t **)(*(_QWORD *)v8 + 16LL);
    if ( v10 )
      v9 = v10;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0xDu,
      (__int64)&unk_1400D9D48,
      v9,
      v6,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v11 = v33;
    v1 &= ~2u;
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v12 = v35;
    v1 &= ~1u;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  v13 = *(__int64 **)(a1 + 384);
  v14 = *v13;
  v15 = sub_14008F8B0(v44, (_QWORD *)(a1 + 400));
  v45 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v14 + 16))(v13, v15);
  v16 = v45;
  if ( !v45 )
  {
LABEL_57:
    v16 = 0;
    goto LABEL_58;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v1 |= 0xCu;
    v17 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v38);
    v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v36);
    v19 = (const wchar_t *)&unk_1400D44E0;
    v20 = (const wchar_t *)&unk_1400D44E0;
    v21 = *(const wchar_t **)(*(_QWORD *)v18 + 16LL);
    if ( v21 )
      v20 = v21;
    v22 = *(const wchar_t **)(v17 + 16);
    v16 = v45;
    if ( v22 )
      v19 = v22;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      2u,
      0xBu,
      0xEu,
      (__int64)&unk_1400D9D48,
      v20,
      v19,
      L"m_hardwareNsOffload->EnableNsOffload(m_hardwareNsOffloadParametersVector)");
  }
  if ( (v1 & 8) != 0 )
  {
    v23 = v37;
    v1 &= ~8u;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v24 = v39;
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  sub_140039B9C(a1, (__int64)L"m_hardwareNsOffload->EnableNsOffload(m_hardwareNsOffloadParametersVector)", 97, 105, v16);
LABEL_58:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v16;
}
