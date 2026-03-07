__int64 __fastcall sub_1401369E0(__int64 a1)
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
  unsigned int v16; // r12d
  __int64 v17; // rdi
  __int64 v18; // rax
  const wchar_t *v19; // r8
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  const wchar_t *v24; // rsi
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  _BYTE v31[8]; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v32; // [rsp+60h] [rbp-31h]
  _BYTE v33[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v34; // [rsp+70h] [rbp-21h]
  _BYTE v35[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v36; // [rsp+80h] [rbp-11h]
  _BYTE v37[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v38; // [rsp+90h] [rbp-1h]
  _BYTE v39[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v40; // [rsp+A0h] [rbp+Fh]
  _BYTE v41[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v42; // [rsp+B0h] [rbp+1Fh]
  __int64 v43; // [rsp+B8h] [rbp+27h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterArpOffload::EvtDeviceArmWakeFromSx", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  sub_140136F48(a1);
  if ( !*(_BYTE *)(a1 + 360) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v41)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v39)
                              + 16LL);
      if ( v27 )
        v24 = v27;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x10u,
        (__int64)&unk_1400D9C98,
        v24,
        v25,
        (const wchar_t *)qword_14014EC70);
      v1 = 48;
    }
    if ( (v1 & 0x20) != 0 )
    {
      v28 = v40;
      v1 &= ~0x20u;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v29 = v42;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
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
                                          v33)
                           + 16LL);
    if ( v7 )
      v6 = v7;
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v31);
    v9 = (const wchar_t *)&unk_1400D44E0;
    v10 = *(const wchar_t **)(*(_QWORD *)v8 + 16LL);
    if ( v10 )
      v9 = v10;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0xEu,
      (__int64)&unk_1400D9C98,
      v9,
      v6,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v11 = v32;
    v1 &= ~2u;
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v12 = v34;
    v1 &= ~1u;
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  v13 = *(__int64 **)(a1 + 440);
  v14 = *v13;
  v15 = sub_1400A27D4(&v43, (__int64 *)(a1 + 456));
  v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v14 + 16))(v13, v15);
  if ( !v16 )
  {
LABEL_57:
    v16 = 0;
    goto LABEL_58;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v1 |= 0xCu;
    v17 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v37);
    v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v35);
    v19 = (const wchar_t *)&unk_1400D44E0;
    v20 = (const wchar_t *)&unk_1400D44E0;
    v21 = *(const wchar_t **)(*(_QWORD *)v18 + 16LL);
    if ( v21 )
      v20 = v21;
    if ( *(_QWORD *)(v17 + 16) )
      v19 = *(const wchar_t **)(v17 + 16);
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      2u,
      0xBu,
      0xFu,
      (__int64)&unk_1400D9C98,
      v20,
      v19,
      L"m_hardwareArpOffload->EnableArpOffload(m_hardwareArpOffloadParameters)");
  }
  if ( (v1 & 8) != 0 )
  {
    v22 = v36;
    v1 &= ~8u;
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v23 = v38;
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
  }
  sub_14000F510(a1, (__int64)L"m_hardwareArpOffload->EnableArpOffload(m_hardwareArpOffloadParameters)", 99, 101, v16);
LABEL_58:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v16;
}
