__int64 __fastcall sub_1400277D0(_QWORD *a1, _QWORD *a2)
{
  char v2; // si
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 *v8; // rcx
  int v9; // ecx
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r13d
  void *v13; // rsi
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v23; // rdi
  _BYTE v24[8]; // [rsp+58h] [rbp-61h] BYREF
  volatile signed __int32 *v25; // [rsp+60h] [rbp-59h]
  _BYTE v26[8]; // [rsp+68h] [rbp-51h] BYREF
  volatile signed __int32 *v27; // [rsp+70h] [rbp-49h]
  __int16 v28; // [rsp+80h] [rbp-39h] BYREF
  char v29; // [rsp+82h] [rbp-37h]
  char v30; // [rsp+83h] [rbp-36h]
  int v31; // [rsp+84h] [rbp-35h]
  char v32; // [rsp+88h] [rbp-31h]
  int v33; // [rsp+89h] [rbp-30h]
  __int16 v34; // [rsp+8Dh] [rbp-2Ch]
  int v35; // [rsp+8Fh] [rbp-2Ah]
  int v36; // [rsp+93h] [rbp-26h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::WriteArpOffloadToFirmware",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v7 )
        v4 = v7;
    }
  }
  sub_1400B6C40(&v28, 0LL, 80LL);
  v8 = (__int64 *)*a2;
  v28 = 4983;
  v29 = 0;
  v31 = 16843520;
  v32 = 1;
  v35 = *(_DWORD *)sub_1400884D0(v8[2]);
  v9 = *(_DWORD *)sub_1400884D0(*(_QWORD *)(*a2 + 32LL));
  v10 = (__int64 *)*a2;
  v36 = v9;
  v11 = *v10;
  v33 = *(_DWORD *)(*v10 + 8);
  v34 = *(_WORD *)(v11 + 12);
  v30 = sub_1400237DC((__int64)a1, (__int64)&v28);
  v12 = (*(__int64 (__fastcall **)(_QWORD *, __int16 *, __int64))(*a1 + 48LL))(a1, &v28, 80LL);
  if ( v12 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = &unk_1400D44E0;
      v14 = &unk_1400D44E0;
      v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v26) + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v24);
      LOBYTE(v17) = 2;
      v18 = *(void **)(*(_QWORD *)v16 + 16LL);
      if ( v18 )
        v13 = v18;
      sub_1400A5E80(
        *(_QWORD *)(a1[23] + 16LL),
        v17,
        14,
        25,
        (__int64)&unk_1400D6110,
        (__int64)v13,
        (__int64)v14,
        (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))",
        v12);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v19 = v25;
      v2 &= ~2u;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v20 = v27;
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
    sub_1400095B8((_DWORD)a1 + 8, (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))", 282, 45, v12);
    if ( v4 )
    {
      sub_140005840(v4);
      ExFreePool(v4);
    }
    v21 = (volatile signed __int32 *)a2[1];
    if ( v21 && _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v12;
  }
  else
  {
    if ( v4 )
    {
      sub_140005840(v4);
      ExFreePool(v4);
    }
    v23 = (volatile signed __int32 *)a2[1];
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    return 0LL;
  }
}
