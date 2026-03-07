__int64 __fastcall sub_140023FA0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  char v6; // bl
  unsigned int v7; // r12d
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  _BYTE v17[8]; // [rsp+58h] [rbp-51h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp-49h]
  _BYTE v19[8]; // [rsp+68h] [rbp-41h] BYREF
  volatile signed __int32 *v20; // [rsp+70h] [rbp-39h]
  _WORD v21[4]; // [rsp+80h] [rbp-29h] BYREF
  char v22; // [rsp+88h] [rbp-21h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::ClearNsOffloadTableInFirmware",
             (a1 + 8) & -(__int64)(a1 != 0));
      if ( v5 )
        v3 = v5;
    }
  }
  *(_BYTE *)(a1 + 480) = 0;
  v6 = 1;
  while ( 1 )
  {
    sub_1400B6C40(v21, 0LL, 80LL);
    strcpy((char *)v21, "xK");
    v21[2] = 768;
    LOBYTE(v21[3]) = 2;
    HIBYTE(v21[3]) = v6;
    v22 = 0;
    HIBYTE(v21[1]) = sub_1400237DC(a1, (__int64)v21);
    v7 = (*(__int64 (__fastcall **)(__int64, _WORD *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v21, 80LL);
    if ( v7 )
      break;
    if ( (unsigned __int8)++v6 > 2u )
      goto LABEL_27;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 = &unk_1400D44E0;
    v9 = &unk_1400D44E0;
    v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 16LL))(
                                  a1 + 64,
                                  v19)
                   + 16LL);
    if ( v10 )
      v9 = v10;
    v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 24LL))(a1 + 64, v17);
    LOBYTE(v12) = 2;
    v13 = *(void **)(*(_QWORD *)v11 + 16LL);
    if ( v13 )
      v8 = v13;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL),
      v12,
      14,
      30,
      (__int64)&unk_1400D6110,
      (__int64)v8,
      (__int64)v9,
      (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))",
      v7);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v14 = v18;
    v1 &= ~2u;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v15 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  sub_1400095B8(a1 + 8, (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))", 373, 45, v7);
LABEL_27:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v7;
}
