void __fastcall sub_14014A294(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  __int64 v11; // rax
  const char *v12; // r10
  const char *v13; // r8
  const char *v14; // rdx
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  _BYTE v18[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v19; // [rsp+68h] [rbp-30h]
  _BYTE v20[8]; // [rsp+70h] [rbp-28h] BYREF
  volatile signed __int32 *v21; // [rsp+78h] [rbp-20h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterChecksumOffload::ConfigTxOffload", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  *(_BYTE *)(a1 + 384) = (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64))qword_1400DF9F0)(
                                            qword_1400DF700,
                                            a2) != 0;
  *(_BYTE *)(a1 + 385) = (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64))qword_1400DF9F8)(
                                            qword_1400DF700,
                                            a2) != 0;
  *(_BYTE *)(a1 + 386) = (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64))qword_1400DFA00)(
                                            qword_1400DF700,
                                            a2) != 0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 = (const wchar_t *)&unk_1400D44E0;
    v9 = (const wchar_t *)&unk_1400D44E0;
    v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v20)
                            + 16LL);
    if ( v10 )
      v9 = v10;
    v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v18);
    v12 = "Disabled";
    v13 = "Disabled";
    v14 = "Disabled";
    v15 = *(const wchar_t **)(*(_QWORD *)v11 + 16LL);
    if ( v15 )
      v8 = v15;
    if ( *(_BYTE *)(a1 + 386) )
      v13 = "Enabled";
    if ( *(_BYTE *)(a1 + 385) )
      v14 = "Enabled";
    if ( *(_BYTE *)(a1 + 384) )
      v12 = "Enabled";
    sub_1400B5C48(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x11u,
      (__int64)&unk_1400DA378,
      v8,
      v9,
      (const wchar_t *)qword_14014EC70,
      v12,
      v14,
      v13);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v16 = v19;
    v2 &= ~2u;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v17 = v21;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  sub_14009C098((_QWORD *)a1);
  if ( v4 )
  {
    sub_140075108(v4);
    ExFreePool(v4);
  }
}
