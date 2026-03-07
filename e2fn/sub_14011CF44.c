__int64 __fastcall sub_14011CF44(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  _BYTE v14[8]; // [rsp+58h] [rbp-60h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp-58h]
  _BYTE v16[8]; // [rsp+68h] [rbp-50h] BYREF
  volatile signed __int32 *v17; // [rsp+70h] [rbp-48h]
  _DWORD v18[2]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v19; // [rsp+80h] [rbp-38h]
  __int64 v20; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::AdvertiseLinkLayerCapabilities", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 8LL))(*(_QWORD *)(a1 + 416)) + 8);
  v18[1] = 0;
  v19 = v6;
  v20 = v6;
  v18[0] = 24;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = (const wchar_t *)&unk_1400D44E0;
    v8 = (const wchar_t *)&unk_1400D44E0;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v16)
                           + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                           a1 + 56,
                                           v14)
                            + 16LL);
    if ( v10 )
      v7 = v10;
    sub_1400B0BF8(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x55u,
      (__int64)&unk_1400D9408,
      v7,
      v8,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v11 = v15;
    v1 &= ~2u;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v12 = v17;
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  ((void (__fastcall *)(__int64, _QWORD, _DWORD *))qword_1400DF750)(qword_1400DF700, *(_QWORD *)(a1 + 368), v18);
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return 0LL;
}
