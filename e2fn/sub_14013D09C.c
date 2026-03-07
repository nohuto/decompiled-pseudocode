__int64 __fastcall sub_14013D09C(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int v8; // r14d
  const wchar_t *v9; // rsi
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _BYTE v16[8]; // [rsp+50h] [rbp-78h] BYREF
  volatile signed __int32 *v17; // [rsp+58h] [rbp-70h]
  _BYTE v18[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v19; // [rsp+68h] [rbp-60h]
  _OWORD v20[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v21; // [rsp+90h] [rbp-38h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ConfigureWakeByBitmapPattern", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  *(_BYTE *)(a1 + 364) = 1;
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  LODWORD(v20[0]) = 40;
  ((void (__fastcall *)(__int64, __int64, _OWORD *))qword_1400DF950)(qword_1400DF700, a2, v20);
  v8 = sub_1400911B8(a1, (__int64)v20);
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v18)
                              + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v16)
                              + 16LL);
      if ( v12 )
        v9 = v12;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x35u,
        (__int64)&unk_1400D9E10,
        v9,
        v10,
        L"UpdateFlexibleFiltersList(bitmapPatternParameters)");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v13 = v17;
      v2 &= ~2u;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v14 = v19;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_14000F3C4(a1, (__int64)L"UpdateFlexibleFiltersList(bitmapPatternParameters)", 536, 113, v8);
  }
  else
  {
    v8 = 0;
  }
  if ( v4 )
  {
    sub_140075108(v4);
    ExFreePool(v4);
  }
  return v8;
}
