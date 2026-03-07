__int64 __fastcall sub_140123900(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r14d
  const wchar_t *v7; // r13
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rsi
  volatile signed __int32 *v12; // rdi
  const wchar_t *v13; // r13
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  __int64 v16; // rsi
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  const wchar_t *v20; // r13
  const wchar_t *v21; // rdi
  const wchar_t *v22; // rax
  const wchar_t *v23; // rax
  volatile signed __int32 *v24; // rsi
  volatile signed __int32 *v25; // rdi
  _BYTE v27[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v28; // [rsp+60h] [rbp-21h]
  _BYTE v29[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v30; // [rsp+70h] [rbp-11h]
  _BYTE v31[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v32; // [rsp+80h] [rbp-1h]
  _BYTE v33[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v34; // [rsp+90h] [rbp+Fh]
  _BYTE v35[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v36; // [rsp+A0h] [rbp+1Fh]
  _BYTE v37[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v38; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::EvtDeviceArmWakeFromSx", (__int64)(a1 - 44));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = sub_1401369E0(a1[12]);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                            a1 - 37,
                                            v29)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             v27)
                              + 16LL);
      if ( v10 )
        v7 = v10;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        2u,
        0xBu,
        0x31u,
        (__int64)&unk_1400D9408,
        v7,
        v8,
        L"m_arpOffload->EvtDeviceArmWakeFromSx()");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v11 = v28;
      v1 &= ~2u;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v12 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    sub_140009088((_DWORD)a1 - 352, (__int64)L"m_arpOffload->EvtDeviceArmWakeFromSx()", 308, 100, v6);
  }
  else
  {
    v6 = sub_14013800C(a1[14]);
    if ( v6 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v13 = (const wchar_t *)&unk_1400D44E0;
        v14 = (const wchar_t *)&unk_1400D44E0;
        v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                               a1 - 37,
                                               v31)
                                + 16LL);
        if ( v15 )
          v14 = v15;
        v16 = *(_QWORD *)(*(a1 - 22) + 16LL);
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                               a1 - 37,
                                               v33)
                                + 16LL);
        if ( v17 )
          v13 = v17;
        sub_1400A5E80(v16, 2u, 0xBu, 0x32u, (__int64)&unk_1400D9408, v14, v13, L"m_nsOffload->EvtDeviceArmWakeFromSx()");
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v18 = v32;
        v1 &= ~8u;
        if ( v32 )
        {
          if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v19 = v34;
        if ( v34 )
        {
          if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      sub_140008F3C((_DWORD)a1 - 352, (__int64)L"m_nsOffload->EvtDeviceArmWakeFromSx()", 309, 100, v6);
    }
    else
    {
      v6 = sub_14013EE74(a1[16]);
      if ( v6 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v20 = (const wchar_t *)&unk_1400D44E0;
          v21 = (const wchar_t *)&unk_1400D44E0;
          v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                                 a1 - 37,
                                                 v37)
                                  + 16LL);
          if ( v22 )
            v21 = v22;
          v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                                 a1 - 37,
                                                 v35)
                                  + 16LL);
          if ( v23 )
            v20 = v23;
          sub_1400A5E80(
            *(_QWORD *)(*(a1 - 22) + 16LL),
            2u,
            0xBu,
            0x33u,
            (__int64)&unk_1400D9408,
            v20,
            v21,
            L"m_wolPatterns->EvtDeviceArmWakeFromSx()");
          v1 = 48;
        }
        if ( (v1 & 0x20) != 0 )
        {
          v24 = v36;
          v1 &= ~0x20u;
          if ( v36 )
          {
            if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
              if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
            }
          }
        }
        if ( (v1 & 0x10) != 0 )
        {
          v25 = v38;
          if ( v38 )
          {
            if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
              if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
            }
          }
        }
        sub_1400091D4((_DWORD)a1 - 352, (__int64)L"m_wolPatterns->EvtDeviceArmWakeFromSx()", 310, 100, v6);
      }
      else
      {
        v6 = 0;
      }
    }
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v6;
}
