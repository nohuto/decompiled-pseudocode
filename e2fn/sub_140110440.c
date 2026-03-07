__int64 __fastcall sub_140110440(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r12d
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
  volatile signed __int32 *v19; // rdi
  _BYTE *v20; // r14
  const wchar_t *v22; // [rsp+38h] [rbp-59h]
  char v23[8]; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-29h]
  char v25[8]; // [rsp+70h] [rbp-21h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-19h]
  char v27[8]; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp-9h]
  char v29[8]; // [rsp+90h] [rbp-1h] BYREF
  volatile signed __int32 *v30; // [rsp+98h] [rbp+7h]
  _DWORD v31[6]; // [rsp+A0h] [rbp+Fh] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14005B310(Pool2, (__int64)L"os_resources::SystemPower::AssignWakeSettings", a1 - 352);
      if ( v5 )
        v3 = v5;
    }
  }
  v31[4] = 0;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x12 )
      v31[0] = -1;
    else
      v31[0] = stru_1400DF410.Queue.ListEntry.Flink[9].Flink;
  }
  else
  {
    v31[0] = 20;
  }
  v6 = *(_QWORD *)(a1 + 280);
  v31[3] = 2;
  v31[2] = 2;
  v31[1] = 5;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(qword_1400DF678 + 376))(qword_1400DF6A8, v6, v31);
  if ( v7 == -1073741101 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v25)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v23)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      v22 = v9;
      v1 = 3;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        3u,
        4u,
        0x16u,
        (__int64)&unk_1400D8AB8,
        v8,
        v22,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v24;
      v1 &= ~2u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( L"Not supported by platform" != *(wchar_t **)(a1 + 240) )
      sub_1400011A8((_QWORD *)(a1 + 224), (__int64)L"Not supported by platform", 0x19uLL);
    v7 = 0;
LABEL_50:
    v20 = (_BYTE *)(a1 + 216);
    goto LABEL_54;
  }
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v29)
                              + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v27)
                              + 16LL);
      if ( v17 )
        v14 = v17;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        4u,
        0x17u,
        (__int64)&unk_1400D8AB8,
        v14,
        v15,
        (const wchar_t *)qword_14014EC70);
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v18 = v28;
      v1 &= ~8u;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v19 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( L"Configuration error" != *(wchar_t **)(a1 + 240) )
      sub_1400011A8((_QWORD *)(a1 + 224), (__int64)L"Configuration error", 0x13uLL);
    goto LABEL_50;
  }
  if ( L"Enabled" != *(wchar_t **)(a1 + 240) )
    sub_1400011A8((_QWORD *)(a1 + 224), (__int64)L"Enabled", 7uLL);
  v20 = (_BYTE *)(a1 + 216);
  v7 = 0;
LABEL_54:
  *v20 = 1;
  if ( v3 )
  {
    sub_14005B5AC(v3);
    ExFreePool(v3);
  }
  return v7;
}
