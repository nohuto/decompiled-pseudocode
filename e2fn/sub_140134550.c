__int64 __fastcall sub_140134550(__int64 a1)
{
  char v1; // si
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // r14
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  unsigned int v12; // r12d
  __int64 v13; // rbx
  const wchar_t *v14; // r14
  const wchar_t *v15; // rsi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // r14
  volatile signed __int32 *v19; // rsi
  _BYTE v21[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-60h]
  _BYTE v23[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-50h]
  _BYTE v25[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-40h]
  _BYTE v27[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterRegistryAccessor::Open", a1 - 352);
      if ( v5 )
        v3 = v5;
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    v13 = *(_QWORD *)(a1 + 24);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( *(_DWORD *)(a1 + 40)
      || (v12 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64))qword_1400DF7A8)(
                  qword_1400DF700,
                  *(_QWORD *)(a1 + 16),
                  0LL,
                  a1 + 48)) == 0 )
    {
      ++*(_DWORD *)(a1 + 40);
      v12 = 0;
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = (const wchar_t *)&unk_1400D44E0;
        v15 = (const wchar_t *)&unk_1400D44E0;
        v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v27)
                                + 16LL);
        if ( v16 )
          v15 = v16;
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v25)
                                + 16LL);
        if ( v17 )
          v14 = v17;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          0xBu,
          0xFu,
          (__int64)&unk_1400D9AF0,
          v14,
          v15,
          L"NetAdapterOpenConfiguration(m_netAdapter, (0), &m_configuration)");
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v18 = v26;
        v1 &= ~8u;
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v19 = v28;
        if ( v28 )
        {
          if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      sub_14000A164(
        a1 - 352,
        (__int64)L"NetAdapterOpenConfiguration(m_netAdapter, (0), &m_configuration)",
        82,
        108,
        v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = (const wchar_t *)&unk_1400D44E0;
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                            a1 - 296,
                                            v23)
                             + 16LL);
      if ( v8 )
        v7 = v8;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                            a1 - 296,
                                            v21)
                             + 16LL);
      if ( v9 )
        v6 = v9;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xBu,
        0xEu,
        (__int64)&unk_1400D9AF0,
        v6,
        v7,
        L"m_netAdapter");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v10 = v22;
      v1 &= ~2u;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v11 = v24;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    sub_14000BA2C(a1 - 352, (__int64)L"m_netAdapter", 76, 108);
    v12 = -1073741661;
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v12;
}
