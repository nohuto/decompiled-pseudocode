__int64 __fastcall sub_140127864(__int64 a1)
{
  char v1; // r15
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // edi
  const wchar_t *v7; // r14
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  __int64 v10; // rsi
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // edi
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // rdx
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  const wchar_t *v22; // rdi
  const wchar_t *v23; // rax
  __int64 v24; // rsi
  const wchar_t *v25; // rax
  const wchar_t *v26; // rcx
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
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::InitializeTxQueuesContainer", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 8LL))(*(_QWORD *)(a1 + 416)) + 16);
  v42 = v6;
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v36)
                              + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v34);
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *(const wchar_t **)(*(_QWORD *)v17 + 16LL);
      if ( v19 )
        v18 = v19;
      sub_1400AA268(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x4Cu,
        (__int64)&unk_1400D9408,
        v18,
        v15,
        (const wchar_t *)qword_14014EC70);
      v6 = v42;
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v20 = v35;
      v1 &= ~8u;
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
    if ( (v1 & 4) != 0 )
    {
      v21 = v37;
      v1 &= ~4u;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 576) == v6 )
      goto LABEL_61;
    if ( !(unsigned int)sub_14000CDB4((_QWORD *)(a1 + 560), v6) )
      *(_QWORD *)(a1 + 576) = v6;
    if ( *(_QWORD *)(a1 + 576) == v6 )
    {
LABEL_61:
      v14 = 0;
    }
    else
    {
      v14 = -1073741801;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v1 |= 0x30u;
        v22 = (const wchar_t *)&unk_1400D44E0;
        v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v38)
                                + 16LL);
        if ( v23 )
          v22 = v23;
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v40)
                                + 16LL);
        v26 = (const wchar_t *)&unk_1400D44E0;
        if ( v25 )
          v26 = v25;
        sub_1400A5E80(v24, 2u, 0xBu, 0x4Du, (__int64)&unk_1400D9408, v22, v26, L"ResizeVector(m_txQueues, numTxQueues)");
        v14 = -1073741801;
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
      sub_140008F3C(a1, (__int64)L"ResizeVector(m_txQueues, numTxQueues)", 563, 100, 0xC0000017);
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                            a1 + 56,
                                            v30)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v32)
                              + 16LL);
      if ( v11 )
        v7 = v11;
      sub_1400A3320(v10, 2u, 0xBu, 0x4Bu, (__int64)&unk_1400D9408, v8, v7, (const wchar_t *)qword_14014EC70);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v31;
      v1 &= ~2u;
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
    if ( (v1 & 1) != 0 )
    {
      v13 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    v14 = -1073741661;
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v14;
}
