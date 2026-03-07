void __fastcall sub_14013A488(_QWORD *a1)
{
  char v1; // si
  __int64 *v2; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int16 *v7; // rax
  __int64 v8; // rdx
  __int16 v9; // bx
  const wchar_t *v10; // r12
  const char *v11; // r13
  const wchar_t *v12; // rsi
  const wchar_t *v13; // rax
  __int64 v14; // rax
  const wchar_t *v15; // rdx
  const wchar_t *v16; // rax
  const char *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  _BYTE v25[8]; // [rsp+50h] [rbp-19h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-11h]
  _BYTE v27[8]; // [rsp+60h] [rbp-9h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-1h]
  _BYTE v29[8]; // [rsp+70h] [rbp+7h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp+Fh]
  _BYTE v31[8]; // [rsp+80h] [rbp+17h] BYREF
  volatile signed __int32 *v32; // [rsp+88h] [rbp+1Fh]
  __int16 v33; // [rsp+D0h] [rbp+67h]
  __int64 v34; // [rsp+D8h] [rbp+6Fh] BYREF

  v1 = 0;
  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterWolPatterns::AdvertiseLinkStatusChangeCapabilities",
             (__int64)a1);
      if ( v5 )
        v2 = v5;
    }
  }
  v34 = 0LL;
  v6 = a1[65];
  LODWORD(v34) = 8;
  v7 = (__int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
  v8 = a1[63];
  v9 = *v7;
  v33 = *v7;
  WORD2(v34) = *v7;
  ((void (__fastcall *)(__int64, __int64, __int64 *))qword_1400DF778)(qword_1400DF700, v8, &v34);
  v10 = (const wchar_t *)&unk_1400D44E0;
  v11 = "False";
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v12 = (const wchar_t *)&unk_1400D44E0;
    v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v27)
                            + 16LL);
    if ( v13 )
      v12 = v13;
    v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v25);
    v15 = (const wchar_t *)&unk_1400D44E0;
    v16 = *(const wchar_t **)(*(_QWORD *)v14 + 16LL);
    if ( v16 )
      v15 = v16;
    v17 = "False";
    if ( (_BYTE)v9 )
      v17 = "True";
    sub_1400AA8D8(
      *(_QWORD *)(a1[22] + 16LL),
      4u,
      0xBu,
      0x15u,
      (__int64)&unk_1400D9E10,
      v15,
      v12,
      (const wchar_t *)qword_14014EC70,
      v17);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v18 = v26;
    v1 &= ~2u;
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v19 = v28;
    v1 &= ~1u;
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v1 |= 0xCu;
    v20 = (const wchar_t *)&unk_1400D44E0;
    v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v31)
                            + 16LL);
    if ( v21 )
      v20 = v21;
    v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v29)
                            + 16LL);
    if ( v22 )
      v10 = v22;
    if ( HIBYTE(v33) )
      v11 = "True";
    sub_1400AA8D8(
      *(_QWORD *)(a1[22] + 16LL),
      4u,
      0xBu,
      0x16u,
      (__int64)&unk_1400D9E10,
      v10,
      v20,
      (const wchar_t *)qword_14014EC70,
      v11);
  }
  if ( (v1 & 8) != 0 )
  {
    v23 = v30;
    v1 &= ~8u;
    if ( v30 )
    {
      if ( !_InterlockedDecrement(v30 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( !_InterlockedDecrement(v23 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v24 = v32;
    if ( v32 )
    {
      if ( !_InterlockedDecrement(v32 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( !_InterlockedDecrement(v24 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  if ( v2 )
  {
    sub_140075108(v2);
    ExFreePool(v2);
  }
}
