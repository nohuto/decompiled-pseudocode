void __fastcall sub_1400FBB40(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  _BYTE v12[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v13; // [rsp+58h] [rbp-30h]
  _BYTE v14[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0;
  v16 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::EvtD0ExitToS0",
             (a1 + 8) & -(__int64)(a1 != 0));
      if ( v5 )
        v3 = v5;
    }
  }
  HIBYTE(v16) = *(_BYTE *)(a1 + 482);
  *(_WORD *)((char *)&v16 + 1) = 0;
  LOBYTE(v16) = 1;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 = (const wchar_t *)&unk_1400D44E0;
    v7 = (const wchar_t *)&unk_1400D44E0;
    v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 16LL))(
                                          a1 + 64,
                                          v14)
                           + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 24LL))(
                                          a1 + 64,
                                          v12)
                           + 16LL);
    if ( v9 )
      v6 = v9;
    sub_1400A6AA8(
      *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL),
      4u,
      0xEu,
      0x13u,
      (__int64)&unk_1400D6110,
      v6,
      v7,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v10 = v13;
    v1 &= ~2u;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v11 = v15;
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
  sub_140028BA8((_QWORD *)a1, &v16);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
}
