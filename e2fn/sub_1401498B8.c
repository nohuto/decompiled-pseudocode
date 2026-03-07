void __fastcall sub_1401498B8(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  char v4; // si
  __int64 *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r15
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  const wchar_t *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  const wchar_t *v14; // r15
  const wchar_t *v15; // rax
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // rdi
  const char *v19; // rbx
  const char *v20; // r11
  const char *v21; // r10
  const char *v22; // r8
  const char *v23; // rdx
  const wchar_t *v24; // rax
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  char v27; // cl
  bool v28; // zf
  BOOL v29; // r8d
  bool v30; // dl
  char v31; // al
  int v32; // r9d
  char v33; // cl
  unsigned __int8 v34; // r8
  int v35; // edx
  __int64 v36; // r9
  int v37; // eax
  int v38; // eax
  const wchar_t *v39; // rdi
  const wchar_t *v40; // rax
  const wchar_t *v41; // rax
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  _BYTE v44[8]; // [rsp+88h] [rbp-49h] BYREF
  volatile signed __int32 *v45; // [rsp+90h] [rbp-41h]
  _BYTE v46[8]; // [rsp+98h] [rbp-39h] BYREF
  volatile signed __int32 *v47; // [rsp+A0h] [rbp-31h]
  _BYTE v48[8]; // [rsp+A8h] [rbp-29h] BYREF
  volatile signed __int32 *v49; // [rsp+B0h] [rbp-21h]
  _BYTE v50[8]; // [rsp+B8h] [rbp-19h] BYREF
  volatile signed __int32 *v51; // [rsp+C0h] [rbp-11h]
  _DWORD v52[2]; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-1h]
  __int64 v54; // [rsp+D8h] [rbp+7h]

  v4 = 0;
  v6 = 0LL;
  v7 = a2;
  v8 = a1;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterChecksumOffload::AdvertiseTxCapabilities", v8);
      if ( v10 )
        v6 = v10;
    }
  }
  v11 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v12 = v8 + 56;
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v8 + 56) + 16LL))(v8 + 56, v46);
    v14 = (const wchar_t *)&unk_1400D44E0;
    v15 = *(const wchar_t **)(*(_QWORD *)v13 + 16LL);
    if ( v15 )
      v14 = v15;
    v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 24LL))(v12, v44);
    v17 = "Unsupported";
    v18 = "Unsupported";
    v19 = "Unsupported";
    v20 = "Unsupported";
    v21 = "Unsupported";
    v22 = "Unsupported";
    v23 = "Unsupported";
    v24 = *(const wchar_t **)(*(_QWORD *)v16 + 16LL);
    if ( v24 )
      v11 = v24;
    if ( a4[42] )
      v18 = "Supported";
    if ( a4[40] )
      v19 = "Supported";
    if ( a4[41] )
      v20 = "Supported";
    if ( a4[39] )
      v21 = "Supported";
    if ( a4[38] )
      v22 = "Supported";
    if ( a4[36] )
      v23 = "Supported";
    if ( a4[37] )
      v17 = "Supported";
    sub_1400B6050(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0xEu,
      (__int64)&unk_1400DA378,
      v11,
      v14,
      (const wchar_t *)qword_14014EC70,
      v17,
      v23,
      v22,
      v21,
      v20,
      v19,
      v18);
    v8 = a1;
    v11 = (const wchar_t *)&unk_1400D44E0;
    v7 = a2;
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v25 = v45;
    v4 &= ~2u;
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v26 = v47;
    v4 &= ~1u;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
  }
  v27 = a4[36];
  v28 = a4[37] == 0;
  v52[0] = 24;
  v29 = !v28;
  v30 = !v28;
  v31 = a4[39];
  if ( v27 )
    v30 = 1;
  v32 = !v28 | 2;
  v28 = v27 == 0;
  v33 = a4[38];
  if ( v28 )
    v32 = v29;
  v34 = v30;
  if ( v31 )
    v34 = 1;
  v35 = v32 | 4;
  if ( !v31 )
    v35 = v32;
  v36 = v34;
  if ( v33 )
    v36 = 1LL;
  v53 = 0LL;
  v37 = v35 | 8;
  if ( !v33 )
    v37 = v35;
  v28 = a4[41] == 0;
  v52[1] = v37;
  v54 = a3;
  v38 = v53;
  if ( !v28 )
  {
    v38 = v53 | 1;
    LOBYTE(v36) = 1;
    LODWORD(v53) = v53 | 1;
  }
  if ( a4[40] )
  {
    v38 |= 2u;
    LOBYTE(v36) = 1;
    LODWORD(v53) = v38;
  }
  if ( a4[42] )
  {
    LODWORD(v53) = v38 | 4;
LABEL_55:
    ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64))qword_1400DF9E8)(qword_1400DF700, v7, v52, v36);
    goto LABEL_72;
  }
  if ( (_BYTE)v36 )
    goto LABEL_55;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 |= 0xCu;
    v39 = (const wchar_t *)&unk_1400D44E0;
    v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v8 + 56) + 16LL))(
                                           v8 + 56,
                                           v50)
                            + 16LL);
    if ( v40 )
      v39 = v40;
    v41 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v8 + 56) + 24LL))(
                                           v8 + 56,
                                           v48)
                            + 16LL);
    if ( v41 )
      v11 = v41;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(v8 + 176) + 16LL),
      4u,
      0xBu,
      0xFu,
      (__int64)&unk_1400DA378,
      v11,
      v39,
      (const wchar_t *)qword_14014EC70);
  }
  if ( (v4 & 8) != 0 )
  {
    v42 = v49;
    v4 &= ~8u;
    if ( v49 )
    {
      if ( !_InterlockedDecrement(v49 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
        if ( !_InterlockedDecrement(v42 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
      }
    }
  }
  if ( (v4 & 4) != 0 )
  {
    v43 = v51;
    if ( v51 )
    {
      if ( !_InterlockedDecrement(v51 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        if ( !_InterlockedDecrement(v43 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
      }
    }
  }
LABEL_72:
  if ( v6 )
  {
    sub_140075108(v6);
    ExFreePool(v6);
  }
}
