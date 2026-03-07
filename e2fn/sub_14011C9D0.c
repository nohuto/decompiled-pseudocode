__int64 __fastcall sub_14011C9D0(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // esi
  const wchar_t *v7; // r14
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // r14
  volatile signed __int32 *v12; // rdi
  const wchar_t *v13; // r13
  __int64 v14; // rbx
  __int64 *v15; // rax
  const wchar_t *v16; // r14
  const wchar_t *v17; // rdx
  __int64 v18; // rax
  volatile signed __int32 *v19; // r14
  volatile signed __int32 *v20; // rdi
  int v21; // r8d
  __int64 v22; // rdi
  __int64 v23; // rax
  const wchar_t *v24; // r14
  const wchar_t *v25; // rdx
  const wchar_t *v26; // rax
  volatile signed __int32 *v27; // r14
  volatile signed __int32 *v28; // rdi
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v31; // [rsp+60h] [rbp-A8h]
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v33; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v35; // [rsp+80h] [rbp-88h]
  _BYTE v36[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v37; // [rsp+90h] [rbp-78h]
  _BYTE v38[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v39; // [rsp+A0h] [rbp-68h]
  _BYTE v40[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v41; // [rsp+B0h] [rbp-58h]
  _BYTE v42[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v43[56]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v44[56]; // [rsp+110h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::AdvertiseDataPathCapabilities", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = sub_140123F70(a1, v42);
  if ( !v6 )
  {
    v6 = sub_1401269B0(a1, v44, v42);
    if ( v6 )
    {
      v13 = L"InitializeTxCapabilities(txCapabilities, dmaCapabilities)";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v36);
        v15 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 24LL))(a1 + 7, &v34);
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = (const wchar_t *)&unk_1400D44E0;
        v18 = *v15;
        if ( *(_QWORD *)(v14 + 16) )
          v17 = *(const wchar_t **)(v14 + 16);
        if ( *(_QWORD *)(v18 + 16) )
          v16 = *(const wchar_t **)(v18 + 16);
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          2u,
          0xBu,
          0x59u,
          (__int64)&unk_1400D9408,
          v16,
          v17,
          L"InitializeTxCapabilities(txCapabilities, dmaCapabilities)");
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v19 = v35;
        v1 &= ~8u;
        if ( v35 )
        {
          if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v20 = v37;
        if ( v37 )
        {
          if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      v21 = 701;
    }
    else
    {
      v6 = sub_1401253B0(a1, v43, v42);
      if ( !v6 )
      {
        ((void (__fastcall *)(__int64, _QWORD, _BYTE *, _BYTE *))qword_1400DF790)(qword_1400DF700, a1[46], v44, v43);
        v6 = 0;
        goto LABEL_62;
      }
      v13 = L"InitializeRxCapabilities(rxCapabilities, dmaCapabilities)";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v22 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v40);
        v23 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v38);
        v24 = (const wchar_t *)&unk_1400D44E0;
        v25 = (const wchar_t *)&unk_1400D44E0;
        v26 = *(const wchar_t **)(*(_QWORD *)v23 + 16LL);
        if ( v26 )
          v25 = v26;
        if ( *(_QWORD *)(v22 + 16) )
          v24 = *(const wchar_t **)(v22 + 16);
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          2u,
          0xBu,
          0x5Au,
          (__int64)&unk_1400D9408,
          v25,
          v24,
          L"InitializeRxCapabilities(rxCapabilities, dmaCapabilities)");
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
      v21 = 704;
    }
    sub_140009C34((int)a1, (__int64)v13, v21, 100, v6);
    goto LABEL_62;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = (const wchar_t *)&unk_1400D44E0;
    v8 = (const wchar_t *)&unk_1400D44E0;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 16LL))(a1 + 7, &v32)
                           + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 24LL))(a1 + 7, &v30)
                            + 16LL);
    if ( v10 )
      v7 = v10;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      2u,
      0xBu,
      0x58u,
      (__int64)&unk_1400D9408,
      v7,
      v8,
      L"InitDmaCapabilities(dmaCapabilities)");
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v11 = v31;
    v1 &= ~2u;
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v12 = v33;
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  sub_14000D3C8((int)a1, (__int64)L"InitDmaCapabilities(dmaCapabilities)", 698, 100, v6);
LABEL_62:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v6;
}
