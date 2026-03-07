__int64 __fastcall sub_140040D54(__int64 a1, _DWORD *a2)
{
  char v4; // di
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int v8; // r15d
  const wchar_t *v9; // r12
  void *v10; // rsi
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rsi
  volatile signed __int32 *v17; // rdi
  int v18; // r8d
  void *v19; // rsi
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rdi
  _BYTE v28[8]; // [rsp+58h] [rbp-9h] BYREF
  volatile signed __int32 *v29; // [rsp+60h] [rbp-1h]
  _BYTE v30[8]; // [rsp+68h] [rbp+7h] BYREF
  volatile signed __int32 *v31; // [rsp+70h] [rbp+Fh]
  _BYTE v32[8]; // [rsp+78h] [rbp+17h] BYREF
  volatile signed __int32 *v33; // [rsp+80h] [rbp+1Fh]
  _BYTE v34[8]; // [rsp+88h] [rbp+27h] BYREF
  volatile signed __int32 *v35; // [rsp+90h] [rbp+2Fh]
  int v36; // [rsp+D0h] [rbp+6Fh] BYREF

  v36 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwarePhy::GetPhyId", a1);
      if ( v7 )
        v5 = v7;
    }
  }
  LOWORD(v36) = 0;
  *a2 = 0;
  v8 = sub_140041700(a1, 2LL, &v36);
  if ( v8 )
  {
    v9 = L"ReadPhyRegister(0x2, phyValue)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v30)
                     + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v28);
      LOBYTE(v14) = 2;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v10 = v15;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v14,
        14,
        25,
        (__int64)&unk_1400D71E0,
        (__int64)v10,
        (__int64)v11,
        (__int64)L"ReadPhyRegister(0x2, phyValue)",
        v8);
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v16 = v29;
      v4 &= ~2u;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v17 = v31;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    v18 = 220;
LABEL_42:
    sub_140008A0C(a1, (__int64)v9, v18, 156, v8);
    goto LABEL_44;
  }
  *a2 = (unsigned __int16)v36 << 16;
  LOWORD(v36) = 0;
  v8 = sub_140041700(a1, 3LL, &v36);
  if ( v8 )
  {
    v9 = L"ReadPhyRegister(0x3, phyValue)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = &unk_1400D44E0;
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v34)
                     + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v32);
      LOBYTE(v23) = 2;
      v24 = *(void **)(*(_QWORD *)v22 + 16LL);
      if ( v24 )
        v19 = v24;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v23,
        14,
        26,
        (__int64)&unk_1400D71E0,
        (__int64)v19,
        (__int64)v20,
        (__int64)L"ReadPhyRegister(0x3, phyValue)",
        v8);
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v25 = v33;
      v4 &= ~8u;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v26 = v35;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    v18 = 227;
    goto LABEL_42;
  }
  v8 = 0;
  *a2 |= v36 & 0xFFF0;
LABEL_44:
  if ( v5 )
  {
    sub_140005840(v5);
    ExFreePool(v5);
  }
  return v8;
}
