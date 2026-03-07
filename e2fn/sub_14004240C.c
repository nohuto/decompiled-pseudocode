__int64 __fastcall sub_14004240C(__int64 a1)
{
  char v1; // si
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r15d
  void *v8; // rbp
  void *v9; // rsi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  _BYTE v17[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-40h]
  _BYTE v19[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v20; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwarePhy::ReleasePhyOwnership", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 392);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 360) + 128LL))(*(_QWORD *)(a1 + 360), 2LL);
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v19)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v17);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v12,
        14,
        54,
        (__int64)&unk_1400D71E0,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"m_firmware->ReleaseOwnership((1 << 1))",
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
    sub_140009088(a1, (__int64)L"m_firmware->ReleaseOwnership((1 << 1))", 462, 156, v7);
  }
  else
  {
    v7 = 0;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v7;
}
