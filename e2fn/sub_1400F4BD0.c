__int64 __fastcall sub_1400F4BD0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // r15d
  unsigned int v7; // ebp
  const wchar_t *v8; // r12
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  const wchar_t *v14; // r12
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  _BYTE v21[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-60h]
  _BYTE v23[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-50h]
  _BYTE v25[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-40h]
  _BYTE v27[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareReceiveScaling::Disable", a1 - 352);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1 - 352;
  *(_BYTE *)(a1 + 16) = 0;
  v7 = sub_14000FCB8((_QWORD *)(a1 - 352));
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v23)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v21)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xAu,
        0xFu,
        (__int64)&unk_1400D5028,
        v8,
        v9,
        L"DisableReceiveScalingHashValue()");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v22;
      v1 &= ~2u;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v24;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_140008CA4(v6, (__int64)L"DisableReceiveScalingHashValue()", 114, 54, v7);
  }
  else
  {
    v7 = sub_14000FA40((_QWORD *)(a1 - 352));
    if ( v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = (const wchar_t *)&unk_1400D44E0;
        v15 = (const wchar_t *)&unk_1400D44E0;
        v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v27)
                                + 16LL);
        if ( v16 )
          v15 = v16;
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v25)
                                + 16LL);
        if ( v17 )
          v14 = v17;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          0xAu,
          0x10u,
          (__int64)&unk_1400D5028,
          v14,
          v15,
          L"DisableMultipleReceiveQueues()");
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v18 = v26;
        v1 &= ~8u;
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
      if ( (v1 & 4) != 0 )
      {
        v19 = v28;
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
      sub_140008A0C(v6, (__int64)L"DisableMultipleReceiveQueues()", 116, 54, v7);
    }
    else
    {
      v7 = 0;
    }
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v7;
}
