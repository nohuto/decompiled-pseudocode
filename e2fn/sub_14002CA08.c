__int64 __fastcall sub_14002CA08(_QWORD *a1, _QWORD *a2)
{
  char v2; // si
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // r12d
  void *v20; // rsi
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  void *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  _QWORD v30[2]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v31[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v32; // [rsp+68h] [rbp-50h]
  _BYTE v33[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v34; // [rsp+78h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp+10h] BYREF

  v2 = 0;
  LODWORD(v36) = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareNsOffload::SetNSOffloadparameters",
             (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *(_QWORD *)(*a2 + 32LL) )
  {
    v10 = ExAllocatePool2(64LL, 32LL, 808465505LL);
    if ( !v10 || (v11 = sub_1400A96A0(v10), (v12 = v11) == 0) || (v13 = *(_QWORD *)(v11 + 16)) == 0 )
    {
      v13 = 0LL;
      v12 = 0LL;
    }
    sub_1400A5B28(v13 + 16, *(_QWORD *)(*a2 + 24LL));
    if ( *(_QWORD *)(*a2 + 32LL) <= 1uLL )
    {
      v36 = 0LL;
      v14 = ExAllocatePool2(64LL, 32LL, 808465506LL);
      if ( !v14 || (v15 = sub_1400A9634(v14, &v36)) == 0 || (v16 = *(_QWORD *)(v15 + 16)) == 0 )
      {
        v16 = 0LL;
        v15 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      }
      v17 = *(volatile signed __int32 **)(v13 + 40);
      *(_QWORD *)(v13 + 40) = v15;
      *(_QWORD *)(v13 + 32) = v16;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    else
    {
      sub_1400A5B28(v13 + 32, *(_QWORD *)(*a2 + 24LL) + 16LL);
    }
    sub_1400A5B28(v13, *a2);
    sub_1400A5B28(v13 + 48, *a2 + 64LL);
    sub_1400A5B28(v13 + 64, *a2 + 48LL);
    v18 = a1[48];
    v30[1] = v12;
    v30[0] = v13;
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 80LL))(v18, v30);
    if ( v19 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v20 = &unk_1400D44E0;
        v21 = &unk_1400D44E0;
        v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v33) + 16LL);
        if ( v22 )
          v21 = v22;
        v23 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v31);
        LOBYTE(v24) = 2;
        v25 = *(void **)(*(_QWORD *)v23 + 16LL);
        if ( v25 )
          v20 = v25;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v24,
          10,
          19,
          (__int64)&unk_1400D6400,
          (__int64)v20,
          (__int64)v21,
          (__int64)L"m_firmware->WriteNsOffloadToFirmware(move(firmwareProtocolOffloadNsParameters))",
          v19);
        v2 = 3;
      }
      if ( (v2 & 2) != 0 )
      {
        v26 = v32;
        v2 &= ~2u;
        if ( v32 )
        {
          if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      if ( (v2 & 1) != 0 )
      {
        v27 = v34;
        if ( v34 )
        {
          if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      sub_14000A92C(
        (int)a1,
        (__int64)L"m_firmware->WriteNsOffloadToFirmware(move(firmwareProtocolOffloadNsParameters))",
        160,
        52,
        v19);
      if ( v4 )
      {
        sub_14000BFA4(v4);
        ExFreePool(v4);
      }
      v28 = (volatile signed __int32 *)a2[1];
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      return v19;
    }
    else
    {
      if ( v4 )
      {
        sub_14000BFA4(v4);
        ExFreePool(v4);
      }
      v29 = (volatile signed __int32 *)a2[1];
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
      return 0LL;
    }
  }
  else
  {
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v8 = (volatile signed __int32 *)a2[1];
    if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return 3221225473LL;
  }
}
