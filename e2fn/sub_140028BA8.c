__int64 __fastcall sub_140028BA8(_QWORD *a1, _BYTE *a2)
{
  char v2; // di
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  char v8; // al
  char v9; // cl
  unsigned int v10; // r12d
  void *v11; // rsi
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _BYTE v20[8]; // [rsp+58h] [rbp-51h] BYREF
  volatile signed __int32 *v21; // [rsp+60h] [rbp-49h]
  _BYTE v22[8]; // [rsp+68h] [rbp-41h] BYREF
  volatile signed __int32 *v23; // [rsp+70h] [rbp-39h]
  __int16 v24; // [rsp+80h] [rbp-29h] BYREF
  char v25; // [rsp+82h] [rbp-27h]
  char v26; // [rsp+83h] [rbp-26h]
  char v27; // [rsp+84h] [rbp-25h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::WritePowerManagementParametersToFirmware",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v7 )
        v4 = v7;
    }
  }
  sub_1400B6C40(&v24, 0LL, 80LL);
  v8 = a2[2];
  v9 = 2 * (a2[3] & 1);
  v24 = 304;
  v25 = 0;
  v27 = v27 & 0xF0 | *a2 & 1 | (2 * (a2[1] & 1 | (2 * (v8 & 1 | v9))));
  v26 = sub_1400237DC((__int64)a1, (__int64)&v24);
  v10 = (*(__int64 (__fastcall **)(_QWORD *, __int16 *, __int64))(*a1 + 48LL))(a1, &v24, 80LL);
  if ( v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v22) + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v20);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[23] + 16LL),
        v15,
        14,
        35,
        (__int64)&unk_1400D6110,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))",
        v10);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v17 = v21;
      v2 &= ~2u;
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
    if ( (v2 & 1) != 0 )
    {
      v18 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_1400095B8((_DWORD)a1 + 8, (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))", 457, 45, v10);
  }
  else
  {
    v10 = 0;
  }
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v10;
}
