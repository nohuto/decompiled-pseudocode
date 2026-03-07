__int64 __fastcall sub_140033604(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int v9; // r14d
  void *v10; // rsi
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  signed __int32 v19[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v20; // [rsp+30h] [rbp-68h]
  const wchar_t *v21; // [rsp+38h] [rbp-60h]
  unsigned int v22; // [rsp+40h] [rbp-58h]
  char v23[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-40h]
  char v25[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareRxFilter::DisableMulticastInHardware",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[59];
  v7 = 20992LL;
  if ( !*(_QWORD *)(v6 + 8) || *(_DWORD *)(v6 + 20) )
  {
    v9 = -1073741130;
    if ( *(_DWORD *)(v6 + 20) != 3 )
      v9 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v25) + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v23);
      v22 = v9;
      v21 = L"m_mmioAccessor->ClearRegistersRangeSafe((0x05200 + (0) * 4), sc_multicastHashTableSize)";
      LOBYTE(v14) = 2;
      v20 = (__int64)v11;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v10 = v15;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v14,
        14,
        21,
        (__int64)&unk_1400D69D8,
        (__int64)v10,
        v20,
        (__int64)v21,
        v22);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v16 = v24;
      v1 &= ~2u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 8LL))(v16, v7);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v17 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 8LL))(v17, v7);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_1400117D0(
      (int)a1,
      (__int64)L"m_mmioAccessor->ClearRegistersRangeSafe((0x05200 + (0) * 4), sc_multicastHashTableSize)",
      247,
      56,
      v9);
  }
  else
  {
    v8 = 128LL;
    do
    {
      *(_DWORD *)((unsigned int)v7 + *(_QWORD *)(v6 + 8)) = 0;
      _InterlockedOr(v19, 0);
      LODWORD(v7) = v7 + 4;
      --v8;
    }
    while ( v8 );
    v9 = 0;
  }
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v9;
}
