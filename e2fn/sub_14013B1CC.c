__int64 __fastcall sub_14013B1CC(__int64 a1)
{
  char v1; // r15
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // eax
  bool v7; // zf
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  __int64 v10; // rax
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rsi
  const wchar_t *v17; // rdi
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  const wchar_t *v20; // rcx
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  const wchar_t *v23; // rsi
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rax
  const wchar_t *v26; // rax
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  _BYTE v30[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v31; // [rsp+60h] [rbp-21h]
  _BYTE v32[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v33; // [rsp+70h] [rbp-11h]
  _BYTE v34[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v35; // [rsp+80h] [rbp-1h]
  _BYTE v36[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v37; // [rsp+90h] [rbp+Fh]
  _BYTE v38[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v39; // [rsp+A0h] [rbp+1Fh]
  _BYTE v40[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v41; // [rsp+B0h] [rbp+2Fh]
  unsigned int v42; // [rsp+E8h] [rbp+67h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ArmWakeFromLinkStatusChange", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_DWORD *)(a1 + 584);
  if ( v6 == 1 )
  {
    v7 = *(_BYTE *)(a1 + 362) == 0;
  }
  else
  {
    if ( v6 != 2 )
    {
LABEL_45:
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v23 = (const wchar_t *)&unk_1400D44E0;
        v24 = (const wchar_t *)&unk_1400D44E0;
        v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v40)
                                + 16LL);
        if ( v25 )
          v24 = v25;
        v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v38)
                                + 16LL);
        if ( v26 )
          v23 = v26;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          4u,
          0xBu,
          0x26u,
          (__int64)&unk_1400D9E10,
          v23,
          v24,
          (const wchar_t *)qword_14014EC70);
        v1 = 48;
      }
      if ( (v1 & 0x20) != 0 )
      {
        v27 = v39;
        v1 &= ~0x20u;
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      if ( (v1 & 0x10) != 0 )
      {
        v28 = v41;
        if ( v41 )
        {
          if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
            if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
      }
      goto LABEL_61;
    }
    v7 = *(_BYTE *)(a1 + 361) == 0;
  }
  if ( v7 )
    goto LABEL_45;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 = (const wchar_t *)&unk_1400D44E0;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v32)
                           + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v30);
    v11 = (const wchar_t *)&unk_1400D44E0;
    v12 = *(const wchar_t **)(*(_QWORD *)v10 + 16LL);
    if ( v12 )
      v11 = v12;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x24u,
      (__int64)&unk_1400D9E10,
      v11,
      v8,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v13 = v31;
    v1 &= ~2u;
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v14 = v33;
    v1 &= ~1u;
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 24LL))(*(_QWORD *)(a1 + 520));
  v15 = v42;
  if ( !v42 )
  {
LABEL_61:
    v15 = 0;
    goto LABEL_62;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v1 |= 0xCu;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v17 = (const wchar_t *)&unk_1400D44E0;
    v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v36)
                            + 16LL);
    if ( v18 )
      v17 = v18;
    v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v34)
                            + 16LL);
    v20 = (const wchar_t *)&unk_1400D44E0;
    if ( v19 )
      v20 = v19;
    sub_1400A5E80(
      v16,
      2u,
      0xBu,
      0x25u,
      (__int64)&unk_1400D9E10,
      v20,
      v17,
      L"m_hardwareWolPatterns->EnableWakeFromLinkStatusChange()");
    v15 = v42;
  }
  if ( (v1 & 8) != 0 )
  {
    v21 = v35;
    v1 &= ~8u;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v22 = v37;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  sub_1400358A0(a1, (__int64)L"m_hardwareWolPatterns->EnableWakeFromLinkStatusChange()", 339, 113, v15);
LABEL_62:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v15;
}
