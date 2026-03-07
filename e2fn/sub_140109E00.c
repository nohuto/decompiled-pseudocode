__int64 __fastcall sub_140109E00(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // ebp
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // rdi
  const wchar_t *v17; // rsi
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  _BYTE v24[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v25; // [rsp+58h] [rbp-60h]
  _BYTE v26[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v27; // [rsp+68h] [rbp-50h]
  _BYTE v28[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v29; // [rsp+78h] [rbp-40h]
  _BYTE v30[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v31; // [rsp+88h] [rbp-30h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005B310(Pool2, (__int64)L"os_resources::OsResources::EvtPrepareHardware", a1 - 352);
      if ( v9 )
        v5 = v9;
    }
  }
  v10 = sub_14010DF64(*(_QWORD *)(a1 + 32), a3);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v26)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v24)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        4u,
        0x19u,
        (__int64)&unk_1400D7B48,
        v11,
        v12,
        L"m_memoryMappedIoAccessorsProvider->EvtPrepareHardware(resourcesTranslated)");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v15 = v25;
      v3 &= ~2u;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v16 = v27;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14000A694(
      a1 - 352,
      (__int64)L"m_memoryMappedIoAccessorsProvider->EvtPrepareHardware(resourcesTranslated)",
      158,
      142,
      v10);
  }
  else
  {
    v10 = sub_14010F230(*(_QWORD *)(a1 + 80), a2, a3);
    if ( v10 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v17 = (const wchar_t *)&unk_1400D44E0;
        v18 = (const wchar_t *)&unk_1400D44E0;
        v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v30)
                                + 16LL);
        if ( v19 )
          v18 = v19;
        v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v28)
                                + 16LL);
        if ( v20 )
          v17 = v20;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          4u,
          0x1Au,
          (__int64)&unk_1400D7B48,
          v17,
          v18,
          L"m_interruptsPool->EvtPrepareHardware(resourcesRaw, resourcesTranslated)");
        v3 = 12;
      }
      if ( (v3 & 8) != 0 )
      {
        v21 = v29;
        v3 &= ~8u;
        if ( v29 )
        {
          if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      if ( (v3 & 4) != 0 )
      {
        v22 = v31;
        if ( v31 )
        {
          if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      sub_14000F65C(
        a1 - 352,
        (__int64)L"m_interruptsPool->EvtPrepareHardware(resourcesRaw, resourcesTranslated)",
        159,
        142,
        v10);
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v5 )
  {
    sub_14005B5AC(v5);
    ExFreePool(v5);
  }
  return v10;
}
