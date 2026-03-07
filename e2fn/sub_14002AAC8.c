__int64 __fastcall sub_14002AAC8(_QWORD *a1, _QWORD *a2)
{
  char v2; // si
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // r12d
  void *v14; // rsi
  void *v15; // rdi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v24; // rdi
  _QWORD v25[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v27; // [rsp+68h] [rbp-40h]
  _BYTE v28[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v29; // [rsp+78h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareArpOffload::SetArpOffloadparameters",
             (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = ExAllocatePool2(64LL, 32LL, 808465465LL);
  if ( !v8 || (v9 = sub_1400A914C(v8), (v10 = v9) == 0) || (v11 = *(_QWORD *)(v9 + 16)) == 0 )
  {
    v11 = 0LL;
    v10 = 0LL;
  }
  sub_1400A5B28(v11 + 16, *a2 + 16LL);
  sub_1400A5B28(v11, *a2);
  sub_1400A5B28(v11 + 32, *a2 + 32LL);
  v12 = a1[48];
  v25[1] = v10;
  v25[0] = v11;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 64LL))(v12, v25);
  if ( v13 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = &unk_1400D44E0;
      v15 = &unk_1400D44E0;
      v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v28) + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v26);
      LOBYTE(v18) = 2;
      v19 = *(void **)(*(_QWORD *)v17 + 16LL);
      if ( v19 )
        v14 = v19;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v18,
        10,
        20,
        (__int64)&unk_1400D6318,
        (__int64)v14,
        (__int64)v15,
        (__int64)L"m_firmware->WriteArpOffloadToFirmware(move(firmwareProtocolOffloadArpParameters))",
        v13);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v20 = v27;
      v2 &= ~2u;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v21 = v29;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    sub_1400290EC(
      (int)a1,
      (__int64)L"m_firmware->WriteArpOffloadToFirmware(move(firmwareProtocolOffloadArpParameters))",
      140,
      47,
      v13);
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v22 = (volatile signed __int32 *)a2[1];
    if ( v22 && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return v13;
  }
  else
  {
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v24 = (volatile signed __int32 *)a2[1];
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    return 0LL;
  }
}
