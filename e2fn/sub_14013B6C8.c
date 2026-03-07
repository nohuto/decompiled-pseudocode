__int64 __fastcall sub_14013B6C8(__int64 a1)
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
  unsigned int v13; // r12d
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rdx
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  const wchar_t *v21; // rsi
  const wchar_t *v22; // rdi
  const wchar_t *v23; // rax
  const wchar_t *v24; // rax
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  _BYTE v28[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v29; // [rsp+60h] [rbp-21h]
  _BYTE v30[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v31; // [rsp+70h] [rbp-11h]
  _BYTE v32[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v33; // [rsp+80h] [rbp-1h]
  _BYTE v34[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v35; // [rsp+90h] [rbp+Fh]
  _BYTE v36[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v37; // [rsp+A0h] [rbp+1Fh]
  _BYTE v38[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v39; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ArmWakeFromMagicPacket", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  if ( !*(_BYTE *)(a1 + 360) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = (const wchar_t *)&unk_1400D44E0;
      v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v38)
                              + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v36)
                              + 16LL);
      if ( v24 )
        v21 = v24;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x23u,
        (__int64)&unk_1400D9E10,
        v21,
        v22,
        (const wchar_t *)qword_14014EC70);
      v1 = 48;
    }
    if ( (v1 & 0x20) != 0 )
    {
      v25 = v37;
      v1 &= ~0x20u;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v26 = v39;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
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
                                          v30)
                           + 16LL);
    if ( v7 )
      v6 = v7;
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v28);
    v9 = (const wchar_t *)&unk_1400D44E0;
    v10 = *(const wchar_t **)(*(_QWORD *)v8 + 16LL);
    if ( v10 )
      v9 = v10;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x21u,
      (__int64)&unk_1400D9E10,
      v9,
      v6,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v11 = v29;
    v1 &= ~2u;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v12 = v31;
    v1 &= ~1u;
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 8LL))(*(_QWORD *)(a1 + 520));
  if ( !v13 )
  {
LABEL_57:
    v13 = 0;
    goto LABEL_58;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v1 |= 0xCu;
    v14 = (const wchar_t *)&unk_1400D44E0;
    v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v34)
                            + 16LL);
    if ( v15 )
      v14 = v15;
    v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v32);
    v17 = (const wchar_t *)&unk_1400D44E0;
    v18 = *(const wchar_t **)(*(_QWORD *)v16 + 16LL);
    if ( v18 )
      v17 = v18;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      2u,
      0xBu,
      0x22u,
      (__int64)&unk_1400D9E10,
      v17,
      v14,
      L"m_hardwareWolPatterns->EnableWakeFromMagicPacket()");
  }
  if ( (v1 & 8) != 0 )
  {
    v19 = v33;
    v1 &= ~8u;
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v20 = v35;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
  sub_14000F3C4(a1, (__int64)L"m_hardwareWolPatterns->EnableWakeFromMagicPacket()", 316, 113, v13);
LABEL_58:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v13;
}
