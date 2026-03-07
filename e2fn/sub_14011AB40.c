__int64 __fastcall sub_14011AB40(__int64 a1)
{
  char v1; // r15
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r14d
  const wchar_t *v12; // r15
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rsi
  const wchar_t *v19; // r15
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rdi
  const wchar_t *v25; // r15
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  __int64 v28; // rsi
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  const wchar_t *v32; // r15
  const wchar_t *v33; // rdi
  const wchar_t *v34; // rax
  const wchar_t *v35; // rax
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rdi
  _BYTE v39[8]; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v40; // [rsp+60h] [rbp-61h]
  _BYTE v41[8]; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v42; // [rsp+70h] [rbp-51h]
  _BYTE v43[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v44; // [rsp+80h] [rbp-41h]
  _BYTE v45[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v46; // [rsp+90h] [rbp-31h]
  _BYTE v47[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v48; // [rsp+A0h] [rbp-21h]
  _BYTE v49[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v50; // [rsp+B0h] [rbp-11h]
  _BYTE v51[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v52; // [rsp+C0h] [rbp-1h]
  _BYTE v53[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v54; // [rsp+D0h] [rbp+Fh]
  _BYTE v55[16]; // [rsp+D8h] [rbp+17h] BYREF
  _BYTE v56[16]; // [rsp+E8h] [rbp+27h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceContext::InitializeSecondLevelComponents", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(__int64 **)(a1 + 456);
  v7 = *(_QWORD *)(a1 + 424);
  v8 = *v6;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 440) + 8LL))(*(_QWORD *)(a1 + 440), v55);
  v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 16LL))(v7, v56);
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v8 + 8))(v6, v10, v9);
  if ( v11 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v41)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v39)
                              + 16LL);
      if ( v15 )
        v12 = v15;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        8u,
        0x3Bu,
        (__int64)&unk_1400D91A8,
        v12,
        v13,
        L"m_link->Bind(m_hardwareAbstraction->GetLink(), m_netAdapter->GetLink())");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v16 = v40;
      v1 &= ~2u;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v17 = v42;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000F65C(a1, (__int64)L"m_link->Bind(m_hardwareAbstraction->GetLink(), m_netAdapter->GetLink())", 411, 74, v11);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 16LL))(*(_QWORD *)(a1 + 456));
    if ( v11 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v19 = (const wchar_t *)&unk_1400D44E0;
        v20 = (const wchar_t *)&unk_1400D44E0;
        v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v45)
                                + 16LL);
        if ( v21 )
          v20 = v21;
        v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v43)
                                + 16LL);
        if ( v22 )
          v19 = v22;
        sub_1400A5E80(v18, 2u, 8u, 0x3Cu, (__int64)&unk_1400D91A8, v19, v20, L"m_link->Initialize()");
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v23 = v44;
        v1 &= ~8u;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v24 = v46;
        if ( v46 )
        {
          if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
          }
        }
      }
      sub_140007FAC(a1, (__int64)L"m_link->Initialize()", 412, 74, v11);
    }
    else
    {
      v11 = sub_140116944((_QWORD *)a1);
      if ( v11 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v25 = (const wchar_t *)&unk_1400D44E0;
          v26 = (const wchar_t *)&unk_1400D44E0;
          v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v47)
                                  + 16LL);
          if ( v27 )
            v26 = v27;
          v28 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v49)
                                  + 16LL);
          if ( v29 )
            v25 = v29;
          sub_1400A5E80(v28, 2u, 8u, 0x3Du, (__int64)&unk_1400D91A8, v26, v25, L"CreateObjecsInfoAccessor()");
          v1 = 48;
        }
        if ( (v1 & 0x20) != 0 )
        {
          v30 = v48;
          v1 &= ~0x20u;
          if ( v48 )
          {
            if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
        if ( (v1 & 0x10) != 0 )
        {
          v31 = v50;
          if ( v50 )
          {
            if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
              if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
            }
          }
        }
        sub_1400084DC(a1, (__int64)L"CreateObjecsInfoAccessor()", 416, 74, v11);
      }
      else
      {
        v11 = sub_140115140(a1);
        if ( v11 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v32 = (const wchar_t *)&unk_1400D44E0;
            v33 = (const wchar_t *)&unk_1400D44E0;
            v34 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                             + 16LL))(
                                                   a1 + 56,
                                                   v53)
                                    + 16LL);
            if ( v34 )
              v33 = v34;
            v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                             + 24LL))(
                                                   a1 + 56,
                                                   v51)
                                    + 16LL);
            if ( v35 )
              v32 = v35;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
              2u,
              8u,
              0x3Eu,
              (__int64)&unk_1400D91A8,
              v32,
              v33,
              L"AssignPowerSettings()");
            v1 = -64;
          }
          if ( v1 < 0 )
          {
            v36 = v52;
            v1 &= ~0x80u;
            if ( v52 )
            {
              if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
                if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
              }
            }
          }
          if ( (v1 & 0x40) != 0 )
          {
            v37 = v54;
            if ( v54 )
            {
              if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
                if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
              }
            }
          }
          sub_14003B824(a1, (__int64)L"AssignPowerSettings()", 418, 74, v11);
        }
        else
        {
          sub_14011B240(a1);
          v11 = 0;
        }
      }
    }
  }
  if ( v3 )
  {
    sub_140073F78(v3);
    ExFreePool(v3);
  }
  return v11;
}
