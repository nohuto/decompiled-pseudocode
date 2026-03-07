__int64 __fastcall sub_1400EDC70(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // r12d
  unsigned int v7; // esi
  const wchar_t *v8; // r13
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // r14
  volatile signed __int32 *v13; // rdi
  const wchar_t *v14; // r13
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // r14
  volatile signed __int32 *v19; // rdi
  const wchar_t *v20; // r13
  const wchar_t *v21; // rdi
  const wchar_t *v22; // rax
  const wchar_t *v23; // rax
  volatile signed __int32 *v24; // r14
  volatile signed __int32 *v25; // rdi
  const wchar_t *v26; // r13
  const wchar_t *v27; // rdi
  const wchar_t *v28; // rax
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // r14
  volatile signed __int32 *v31; // rdi
  _BYTE v33[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v34; // [rsp+60h] [rbp-41h]
  _BYTE v35[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v36; // [rsp+70h] [rbp-31h]
  _BYTE v37[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v38; // [rsp+80h] [rbp-21h]
  _BYTE v39[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v40; // [rsp+90h] [rbp-11h]
  _BYTE v41[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v42; // [rsp+A0h] [rbp-1h]
  _BYTE v43[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v44; // [rsp+B0h] [rbp+Fh]
  _BYTE v45[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v46; // [rsp+C0h] [rbp+1Fh]
  _BYTE v47[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v48; // [rsp+D0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::EvtD0EntryFromS0", a1 - 352);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1 - 352;
  v7 = sub_1400ED130(a1 - 352);
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v35)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v33)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xAu,
        0x58u,
        (__int64)&unk_1400D49F8,
        v8,
        v9,
        L"EvtD0Entry()");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v34;
      v1 &= ~2u;
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
    if ( (v1 & 1) != 0 )
    {
      v13 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000AD10(v6, (__int64)L"EvtD0Entry()", 470, 46, v7);
  }
  else
  {
    v7 = sub_1401015C4(*(_QWORD *)(a1 + 352));
    if ( v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = (const wchar_t *)&unk_1400D44E0;
        v15 = (const wchar_t *)&unk_1400D44E0;
        v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v39)
                                + 16LL);
        if ( v16 )
          v15 = v16;
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v37)
                                + 16LL);
        if ( v17 )
          v14 = v17;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          0xAu,
          0x59u,
          (__int64)&unk_1400D49F8,
          v14,
          v15,
          L"m_wolPatterns->EvtD0Entry()");
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v18 = v38;
        v1 &= ~8u;
        if ( v38 )
        {
          if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v19 = v40;
        if ( v40 )
        {
          if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      sub_140008628(v6, (__int64)L"m_wolPatterns->EvtD0Entry()", 472, 46, v7);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 368) + 24LL))(*(_QWORD *)(a1 + 368));
      if ( v7 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v20 = (const wchar_t *)&unk_1400D44E0;
          v21 = (const wchar_t *)&unk_1400D44E0;
          v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                                 a1 - 296,
                                                 v43)
                                  + 16LL);
          if ( v22 )
            v21 = v22;
          v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                                 a1 - 296,
                                                 v41)
                                  + 16LL);
          if ( v23 )
            v20 = v23;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
            2u,
            0xAu,
            0x5Au,
            (__int64)&unk_1400D49F8,
            v20,
            v21,
            L"m_firmware->EvtD0EntryFromS0()");
          v1 = 48;
        }
        if ( (v1 & 0x20) != 0 )
        {
          v24 = v42;
          v1 &= ~0x20u;
          if ( v42 )
          {
            if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
              if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
            }
          }
        }
        if ( (v1 & 0x10) != 0 )
        {
          v25 = v44;
          if ( v44 )
          {
            if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
              if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
            }
          }
        }
        sub_140008A0C(v6, (__int64)L"m_firmware->EvtD0EntryFromS0()", 476, 46, v7);
      }
      else
      {
        v7 = sub_14010652C(*(_QWORD *)(a1 + 496));
        if ( v7 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v26 = (const wchar_t *)&unk_1400D44E0;
            v27 = (const wchar_t *)&unk_1400D44E0;
            v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                             + 16LL))(
                                                   a1 - 296,
                                                   v47)
                                    + 16LL);
            if ( v28 )
              v27 = v28;
            v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                             + 24LL))(
                                                   a1 - 296,
                                                   v45)
                                    + 16LL);
            if ( v29 )
              v26 = v29;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
              2u,
              0xAu,
              0x5Bu,
              (__int64)&unk_1400D49F8,
              v26,
              v27,
              L"m_manageabilitySession->EvtD0EntryFromS0()");
            v1 = -64;
          }
          if ( v1 < 0 )
          {
            v30 = v46;
            v1 &= ~0x80u;
            if ( v46 )
            {
              if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
                if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
              }
            }
          }
          if ( (v1 & 0x40) != 0 )
          {
            v31 = v48;
            if ( v48 )
            {
              if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
                if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
              }
            }
          }
          sub_14000946C(v6, (__int64)L"m_manageabilitySession->EvtD0EntryFromS0()", 478, 46, v7);
        }
        else
        {
          v7 = 0;
        }
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
