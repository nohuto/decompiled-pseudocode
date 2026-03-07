__int64 __fastcall sub_140117F7C(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // di
  __int64 *v7; // r15
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // r14d
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
  _BYTE v24[8]; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v25; // [rsp+60h] [rbp-31h]
  _BYTE v26[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v27; // [rsp+70h] [rbp-21h]
  _BYTE v28[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v29; // [rsp+80h] [rbp-11h]
  _BYTE v30[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v31; // [rsp+90h] [rbp-1h]
  __int64 (__fastcall **v32)(PVOID); // [rsp+98h] [rbp+7h] BYREF
  __int16 v33; // [rsp+A0h] [rbp+Fh]
  PVOID P; // [rsp+A8h] [rbp+17h]
  __int64 v35; // [rsp+B0h] [rbp+1Fh]
  __int64 v36; // [rsp+B8h] [rbp+27h]

  v6 = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::EvtDevicePrepareHardware", a1);
      if ( v9 )
        v7 = v9;
    }
  }
  v33 = 0;
  v32 = &off_1400D41D0;
  P = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  sub_1400011A8(&v32, (__int64)L"Prepare Hardware", 0x10uLL);
  sub_14006FED0(*(_QWORD *)(a1 + 504), (__int64)&v32);
  v32 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 392) + 88LL))(
          *(_QWORD *)(a1 + 392),
          a2,
          a3);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v26)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v24)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        8u,
        0x50u,
        (__int64)&unk_1400D91A8,
        v11,
        v12,
        L"m_osResources->EvtPrepareHardware(resourcesRaw, resourcesTranslated)");
      v6 = 3;
    }
    if ( (v6 & 2) != 0 )
    {
      v15 = v25;
      v6 &= ~2u;
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
    if ( (v6 & 1) != 0 )
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
    sub_140039A50(a1, (__int64)L"m_osResources->EvtPrepareHardware(resourcesRaw, resourcesTranslated)", 603, 74, v10);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 128LL))(*(_QWORD *)(a1 + 424));
    if ( v10 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v17 = (const wchar_t *)&unk_1400D44E0;
        v18 = (const wchar_t *)&unk_1400D44E0;
        v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v30)
                                + 16LL);
        if ( v19 )
          v18 = v19;
        v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v28)
                                + 16LL);
        if ( v20 )
          v17 = v20;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          8u,
          0x51u,
          (__int64)&unk_1400D91A8,
          v17,
          v18,
          L"m_hardwareAbstraction->EvtPrepareHardware()");
        v6 = 12;
      }
      if ( (v6 & 8) != 0 )
      {
        v21 = v29;
        v6 &= ~8u;
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
      if ( (v6 & 4) != 0 )
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
      sub_1400095B8(a1, (__int64)L"m_hardwareAbstraction->EvtPrepareHardware()", 604, 74, v10);
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v7 )
  {
    sub_14007404C(v7);
    ExFreePool(v7);
  }
  return v10;
}
