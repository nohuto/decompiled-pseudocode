void __fastcall sub_14013A0D8(_QWORD *a1)
{
  char v2; // si
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  const wchar_t *v10; // r12
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  _BYTE v23[8]; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-29h]
  _BYTE v25[8]; // [rsp+70h] [rbp-21h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-19h]
  _BYTE v27[8]; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp-9h]
  _BYTE v29[8]; // [rsp+90h] [rbp-1h] BYREF
  volatile signed __int32 *v30; // [rsp+98h] [rbp+7h]
  int v31; // [rsp+A0h] [rbp+Fh] BYREF
  char v32; // [rsp+A4h] [rbp+13h]
  __int16 v33; // [rsp+A5h] [rbp+14h]
  char v34; // [rsp+A7h] [rbp+16h]
  __int64 v35; // [rsp+A8h] [rbp+17h]
  unsigned __int64 v36; // [rsp+B0h] [rbp+1Fh]

  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterWolPatterns::AdvertiseBitmapPatternsCapabilities",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[65];
  v33 = 0;
  v34 = 0;
  v31 = 24;
  v7 = (unsigned int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6);
  v8 = a1[63];
  v9 = *v7;
  v35 = (unsigned __int16)*v7;
  v36 = (unsigned __int64)v9 >> 16;
  v32 = 1;
  ((void (__fastcall *)(__int64, __int64, int *))qword_1400DF770)(qword_1400DF700, v8, &v31);
  v10 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = (const wchar_t *)&unk_1400D44E0;
    v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v25)
                            + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v23);
    v14 = (const wchar_t *)&unk_1400D44E0;
    v15 = *(const wchar_t **)(*(_QWORD *)v13 + 16LL);
    if ( v15 )
      v14 = v15;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      4u,
      0xBu,
      0x13u,
      (__int64)&unk_1400D9E10,
      v14,
      v11,
      (const wchar_t *)qword_14014EC70);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v16 = v24;
    v2 &= ~2u;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v17 = v26;
    v2 &= ~1u;
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v2 |= 0xCu;
    v18 = (const wchar_t *)&unk_1400D44E0;
    v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v29)
                            + 16LL);
    if ( v19 )
      v18 = v19;
    v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v27)
                            + 16LL);
    if ( v20 )
      v10 = v20;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      4u,
      0xBu,
      0x14u,
      (__int64)&unk_1400D9E10,
      v10,
      v18,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v2 & 8) != 0 )
  {
    v21 = v28;
    v2 &= ~8u;
    if ( v28 )
    {
      if ( !_InterlockedDecrement(v28 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( !_InterlockedDecrement(v21 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v22 = v30;
    if ( v30 )
    {
      if ( !_InterlockedDecrement(v30 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( !_InterlockedDecrement(v22 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
}
