__int64 __fastcall sub_1400EF4C0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // r12d
  unsigned int v7; // r14d
  const wchar_t *v8; // r13
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  const wchar_t *v16; // r13
  __int64 v17; // rcx
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  __int64 v20; // rsi
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rsi
  volatile signed __int32 *v23; // rdi
  const wchar_t *v24; // r13
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rdi
  _BYTE v31[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v32; // [rsp+60h] [rbp-21h]
  _BYTE v33[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v34; // [rsp+70h] [rbp-11h]
  _BYTE v35[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v36; // [rsp+80h] [rbp-1h]
  _BYTE v37[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v38; // [rsp+90h] [rbp+Fh]
  _BYTE v39[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v40; // [rsp+A0h] [rbp+1Fh]
  _BYTE v41[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v42; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::EvtPrepareHardware", a1 - 352);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1 - 352;
  v7 = sub_1400E9990(a1 - 352);
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v33)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v31)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xAu,
        0x49u,
        (__int64)&unk_1400D49F8,
        v8,
        v9,
        L"CreateInterruptsFactory()");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v32;
      v1 &= ~2u;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v34;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_140008390(v6, (__int64)L"CreateInterruptsFactory()", 380, 46, v7);
  }
  else
  {
    v7 = sub_1400F4044(*(_QWORD *)(a1 + 288));
    if ( v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = a1 - 296;
        v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v35);
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = a1 - 296;
        v18 = (const wchar_t *)&unk_1400D44E0;
        v19 = *(const wchar_t **)(*(_QWORD *)v15 + 16LL);
        if ( v19 )
          v18 = v19;
        v20 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
        v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 16LL))(
                                               v17,
                                               v37)
                                + 16LL);
        if ( v21 )
          v16 = v21;
        sub_1400A5E80(v20, 2u, 0xAu, 0x4Au, (__int64)&unk_1400D49F8, v18, v16, L"m_link->EvtPrepareHardware()");
        v1 = 12;
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
      sub_140008774(v6, (__int64)L"m_link->EvtPrepareHardware()", 382, 46, v7);
    }
    else
    {
      v7 = sub_1400FBD74(*(_QWORD *)(a1 + 368));
      if ( v7 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v24 = (const wchar_t *)&unk_1400D44E0;
          v25 = (const wchar_t *)&unk_1400D44E0;
          v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                                 a1 - 296,
                                                 v41)
                                  + 16LL);
          if ( v26 )
            v25 = v26;
          v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                                 a1 - 296,
                                                 v39)
                                  + 16LL);
          if ( v27 )
            v24 = v27;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
            2u,
            0xAu,
            0x4Bu,
            (__int64)&unk_1400D49F8,
            v24,
            v25,
            L"m_firmware->EvtPrepareHardware()");
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
        sub_140008CA4(v6, (__int64)L"m_firmware->EvtPrepareHardware()", 384, 46, v7);
      }
      else
      {
        v7 = 0;
      }
    }
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v7;
}
