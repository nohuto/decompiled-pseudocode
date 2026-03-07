void __fastcall sub_140140C90(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // r15d
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  const wchar_t *v14; // rsi
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rsi
  _BYTE v19[8]; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-50h]
  _BYTE v21[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-40h]
  _BYTE v23[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-30h]
  _BYTE v25[8]; // [rsp+70h] [rbp-28h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-20h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ReportWakeFromLinkStatusChange", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_DWORD *)(a1 + 584);
  v7 = 0;
  if ( v6 == 1 )
  {
    v7 = 2;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v21)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v19)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x41u,
        (__int64)&unk_1400D9E10,
        v8,
        v9,
        (const wchar_t *)qword_14014EC70);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v20;
      v1 &= ~2u;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v22;
LABEL_34:
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
  }
  else if ( v6 == 2 )
  {
    v7 = 1;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v25)
                              + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v23)
                              + 16LL);
      if ( v17 )
        v14 = v17;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x42u,
        (__int64)&unk_1400D9E10,
        v14,
        v15,
        (const wchar_t *)qword_14014EC70);
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v18 = v24;
      v1 &= ~8u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v13 = v26;
      goto LABEL_34;
    }
  }
  ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_1400DF7E8)(qword_1400DF700, *(_QWORD *)(a1 + 504), v7);
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
}
