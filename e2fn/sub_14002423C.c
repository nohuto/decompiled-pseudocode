__int64 __fastcall sub_14002423C(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r12d
  void *v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _BYTE v16[8]; // [rsp+60h] [rbp-51h] BYREF
  volatile signed __int32 *v17; // [rsp+68h] [rbp-49h]
  _BYTE v18[8]; // [rsp+70h] [rbp-41h] BYREF
  volatile signed __int32 *v19; // [rsp+78h] [rbp-39h]
  __int16 v20; // [rsp+88h] [rbp-29h] BYREF
  char v21; // [rsp+8Ah] [rbp-27h]
  char v22; // [rsp+8Bh] [rbp-26h]
  char v23; // [rsp+8Ch] [rbp-25h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::ClearPowerManagementParametersInFirmware",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v5 )
        v3 = v5;
    }
  }
  sub_1400B6C40(&v20, 0LL, 80LL);
  v20 = 304;
  v21 = 0;
  v23 = 0;
  v22 = sub_1400237DC((__int64)a1, (__int64)&v20);
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int16 *, __int64))(*a1 + 48LL))(a1, &v20, 80LL);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v18) + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v16);
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A5E80(
        *(_QWORD *)(a1[23] + 16LL),
        v11,
        14,
        36,
        (__int64)&unk_1400D6110,
        (__int64)v7,
        (__int64)v8,
        (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))",
        v6);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v13 = v17;
      v1 &= ~2u;
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
    if ( (v1 & 1) != 0 )
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
    sub_1400095B8((_DWORD)a1 + 8, (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))", 477, 45, v6);
  }
  else
  {
    v6 = 0;
  }
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v6;
}
