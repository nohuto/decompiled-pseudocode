__int64 __fastcall sub_14010A2E0(__int64 *a1, __int64 a2)
{
  const wchar_t *v2; // rdi
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int v8; // r14d
  const wchar_t *v9; // r13
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  const wchar_t *v18; // r13
  const wchar_t *v19; // rdx
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  const wchar_t *v23; // r13
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  const wchar_t *v28; // r13
  const wchar_t *v29; // rax
  __int64 v30; // rsi
  const wchar_t *v31; // rax
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rdi
  const wchar_t *v34; // r13
  const wchar_t *v35; // rax
  const wchar_t *v36; // rax
  volatile signed __int32 *v37; // rsi
  volatile signed __int32 *v38; // rdi
  _BYTE v40[8]; // [rsp+58h] [rbp-79h] BYREF
  volatile signed __int32 *v41; // [rsp+60h] [rbp-71h]
  _BYTE v42[8]; // [rsp+68h] [rbp-69h] BYREF
  volatile signed __int32 *v43; // [rsp+70h] [rbp-61h]
  _BYTE v44[8]; // [rsp+78h] [rbp-59h] BYREF
  volatile signed __int32 *v45; // [rsp+80h] [rbp-51h]
  _BYTE v46[8]; // [rsp+88h] [rbp-49h] BYREF
  volatile signed __int32 *v47; // [rsp+90h] [rbp-41h]
  _BYTE v48[8]; // [rsp+98h] [rbp-39h] BYREF
  volatile signed __int32 *v49; // [rsp+A0h] [rbp-31h]
  _BYTE v50[8]; // [rsp+A8h] [rbp-29h] BYREF
  volatile signed __int32 *v51; // [rsp+B0h] [rbp-21h]
  _BYTE v52[8]; // [rsp+B8h] [rbp-19h] BYREF
  volatile signed __int32 *v53; // [rsp+C0h] [rbp-11h]
  _BYTE v54[8]; // [rsp+C8h] [rbp-9h] BYREF
  volatile signed __int32 *v55; // [rsp+D0h] [rbp-1h]
  _BYTE v56[8]; // [rsp+D8h] [rbp+7h] BYREF
  volatile signed __int32 *v57; // [rsp+E0h] [rbp+Fh]
  _BYTE v58[8]; // [rsp+E8h] [rbp+17h] BYREF
  volatile signed __int32 *v59; // [rsp+F0h] [rbp+1Fh]
  __int64 v60; // [rsp+F8h] [rbp+27h] BYREF

  LOWORD(v2) = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005B310(Pool2, (__int64)L"os_resources::OsResources::Initialize", (__int64)(a1 - 44));
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = sub_140111290(a1[14], a2);
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 16))(
                                             a1 - 37,
                                             v42)
                              + 16LL);
      if ( v10 )
        v2 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 24))(
                                             a1 - 37,
                                             v40)
                              + 16LL);
      if ( v11 )
        v9 = v11;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16),
        2u,
        4u,
        0x14u,
        (__int64)&unk_1400D7B48,
        v9,
        v2,
        L"m_eventDispatcher->Initialize(device)");
      LOBYTE(v2) = 3;
    }
    if ( ((unsigned __int8)v2 & 2) != 0 )
    {
      v12 = v41;
      LOBYTE(v2) = (unsigned __int8)v2 & 0xFD;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( ((unsigned __int8)v2 & 1) != 0 )
    {
      v13 = v43;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_140008F3C((_DWORD)a1 - 352, (__int64)L"m_eventDispatcher->Initialize(device)", 130, 142, v8);
  }
  else
  {
    v14 = a1[12];
    v15 = sub_1400A27D4(&v60, a1 + 2);
    v8 = sub_140110888(v14, a2, v15);
    if ( v8 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v16 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 24))(a1 - 37, v44);
        v17 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 16))(a1 - 37, v46);
        v18 = (const wchar_t *)&unk_1400D44E0;
        v19 = (const wchar_t *)&unk_1400D44E0;
        v20 = *(const wchar_t **)(*(_QWORD *)v17 + 16LL);
        if ( v20 )
          v19 = v20;
        if ( *(_QWORD *)(v16 + 16) )
          v18 = *(const wchar_t **)(v16 + 16);
        sub_1400A5E80(
          *(_QWORD *)(*(a1 - 22) + 16),
          2u,
          4u,
          0x15u,
          (__int64)&unk_1400D7B48,
          v18,
          v19,
          L"m_systemPower->BindAndInitialize(device, m_osServices)");
        LOBYTE(v2) = 12;
      }
      if ( ((unsigned __int8)v2 & 8) != 0 )
      {
        v21 = v45;
        LOBYTE(v2) = (unsigned __int8)v2 & 0xF7;
        if ( v45 )
        {
          if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      if ( ((unsigned __int8)v2 & 4) != 0 )
      {
        v22 = v47;
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      sub_1400143F0((_DWORD)a1 - 352, (__int64)L"m_systemPower->BindAndInitialize(device, m_osServices)", 133, 142, v8);
    }
    else
    {
      v8 = sub_14010E708(a1[6], a2);
      if ( v8 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v23 = (const wchar_t *)&unk_1400D44E0;
          v2 = (const wchar_t *)&unk_1400D44E0;
          v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 16))(
                                                 a1 - 37,
                                                 v50)
                                  + 16LL);
          if ( v24 )
            v2 = v24;
          v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 24))(
                                                 a1 - 37,
                                                 v48)
                                  + 16LL);
          if ( v25 )
            v23 = v25;
          sub_1400A5E80(
            *(_QWORD *)(*(a1 - 22) + 16),
            2u,
            4u,
            0x16u,
            (__int64)&unk_1400D7B48,
            v23,
            v2,
            L"m_pciConfigSpaceAccessor->Initialize(device)");
          LOBYTE(v2) = 48;
        }
        if ( ((unsigned __int8)v2 & 0x20) != 0 )
        {
          v26 = v49;
          LOBYTE(v2) = (unsigned __int8)v2 & 0xDF;
          if ( v49 )
          {
            if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
              if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
            }
          }
        }
        if ( ((unsigned __int8)v2 & 0x10) != 0 )
        {
          v27 = v51;
          if ( v51 )
          {
            if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
              if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
            }
          }
        }
        sub_140021FDC((_DWORD)a1 - 352, (__int64)L"m_pciConfigSpaceAccessor->Initialize(device)", 135, 142, v8);
      }
      else
      {
        v8 = sub_14010ED30(a1[8], a2, 1024LL, 0x40000LL);
        if ( v8 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v28 = (const wchar_t *)&unk_1400D44E0;
            v2 = (const wchar_t *)&unk_1400D44E0;
            v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 24))(
                                                   a1 - 37,
                                                   v52)
                                    + 16LL);
            if ( v29 )
              v2 = v29;
            v30 = *(_QWORD *)(*(a1 - 22) + 16);
            v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 16))(
                                                   a1 - 37,
                                                   v54)
                                    + 16LL);
            if ( v31 )
              v28 = v31;
            sub_1400A5E80(
              v30,
              2u,
              4u,
              0x17u,
              (__int64)&unk_1400D7B48,
              v2,
              v28,
              L"m_commonBufferFactory->Initialize(device, sc_commonBufferAlignmentRequirement, sc_maxDmaTransactionLength)");
            LOBYTE(v2) = -64;
          }
          if ( (char)v2 < 0 )
          {
            v32 = v53;
            LOBYTE(v2) = (unsigned __int8)v2 & 0x7F;
            if ( v53 )
            {
              if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
                if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
              }
            }
          }
          if ( ((unsigned __int8)v2 & 0x40) != 0 )
          {
            v33 = v55;
            if ( v55 )
            {
              if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
                if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
              }
            }
          }
          sub_14005B0EC(
            (_DWORD)a1 - 352,
            (__int64)L"m_commonBufferFactory->Initialize(device, sc_commonBufferAlignmentRequirement, sc_maxDmaTransactionLength)",
            140,
            142,
            v8);
        }
        else
        {
          v8 = sub_14010FFC4(a1[10], a2);
          if ( v8 )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v34 = (const wchar_t *)&unk_1400D44E0;
              v2 = (const wchar_t *)&unk_1400D44E0;
              v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 16))(
                                                     a1 - 37,
                                                     v58)
                                      + 16LL);
              if ( v35 )
                v2 = v35;
              v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 24))(
                                                     a1 - 37,
                                                     v56)
                                      + 16LL);
              if ( v36 )
                v34 = v36;
              sub_1400A5E80(
                *(_QWORD *)(*(a1 - 22) + 16),
                2u,
                4u,
                0x18u,
                (__int64)&unk_1400D7B48,
                v34,
                v2,
                L"m_interruptsPool->Initialize(device)");
              LOWORD(v2) = 768;
            }
            if ( ((unsigned __int16)v2 & 0x200) != 0 )
            {
              v37 = v57;
              LOWORD(v2) = (unsigned __int16)v2 & 0xFDFF;
              if ( v57 )
              {
                if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
                  if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
                }
              }
            }
            if ( ((unsigned __int16)v2 & 0x100) != 0 )
            {
              v38 = v59;
              if ( v59 )
              {
                if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
                  if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
                }
              }
            }
            sub_14000D3C8((_DWORD)a1 - 352, (__int64)L"m_interruptsPool->Initialize(device)", 142, 142, v8);
          }
          else
          {
            v8 = 0;
          }
        }
      }
    }
  }
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
  return v8;
}
