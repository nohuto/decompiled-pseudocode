__int64 __fastcall sub_1400F4F80(__int64 a1, int a2, unsigned int a3)
{
  char v3; // di
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // ebp
  int v11; // r15d
  const wchar_t *v12; // r12
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rsi
  volatile signed __int32 *v17; // rdi
  const wchar_t *v18; // r12
  const wchar_t *v19; // rdi
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rsi
  volatile signed __int32 *v23; // rdi
  _BYTE v25[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-60h]
  _BYTE v27[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-50h]
  _BYTE v29[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp-40h]
  _BYTE v31[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v32; // [rsp+88h] [rbp-30h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareReceiveScaling::Enable", a1 - 352);
      if ( v9 )
        v5 = v9;
    }
  }
  *(_BYTE *)(a1 + 16) = 0;
  if ( a2 == 1 )
  {
    v11 = a1 - 352;
    v10 = sub_1400103E8((_QWORD *)(a1 - 352));
    if ( v10 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v12 = (const wchar_t *)&unk_1400D44E0;
        v13 = (const wchar_t *)&unk_1400D44E0;
        v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v27)
                                + 16LL);
        if ( v14 )
          v13 = v14;
        v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v25)
                                + 16LL);
        if ( v15 )
          v12 = v15;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          2u,
          0xAu,
          0xDu,
          (__int64)&unk_1400D5028,
          v12,
          v13,
          L"EnableReceiveScalingHashValue()");
        v3 = 3;
      }
      if ( (v3 & 2) != 0 )
      {
        v16 = v26;
        v3 &= ~2u;
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
          }
        }
      }
      if ( (v3 & 1) != 0 )
      {
        v17 = v28;
        if ( v28 )
        {
          if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
      }
      sub_140008B58(v11, (__int64)L"EnableReceiveScalingHashValue()", 97, 54, v10);
    }
    else
    {
      v10 = sub_14000FF2C((_QWORD *)(a1 - 352), a3);
      if ( v10 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v18 = (const wchar_t *)&unk_1400D44E0;
          v19 = (const wchar_t *)&unk_1400D44E0;
          v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                                 a1 - 296,
                                                 v31)
                                  + 16LL);
          if ( v20 )
            v19 = v20;
          v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                                 a1 - 296,
                                                 v29)
                                  + 16LL);
          if ( v21 )
            v18 = v21;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
            2u,
            0xAu,
            0xEu,
            (__int64)&unk_1400D5028,
            v18,
            v19,
            L"EnableMultipleReceiveQueues(protocolType)");
          v3 = 12;
        }
        if ( (v3 & 8) != 0 )
        {
          v22 = v30;
          v3 &= ~8u;
          if ( v30 )
          {
            if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
              if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
            }
          }
        }
        if ( (v3 & 4) != 0 )
        {
          v23 = v32;
          if ( v32 )
          {
            if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
              if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
            }
          }
        }
        sub_14000D514(v11, (__int64)L"EnableMultipleReceiveQueues(protocolType)", 99, 54, v10);
      }
      else
      {
        *(_BYTE *)(a1 + 16) = 1;
        v10 = 0;
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A69B8(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), 2u, 0xAu, 0xCu, (__int64)&unk_1400D5028, a2);
    v10 = -1073741811;
  }
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  return v10;
}
