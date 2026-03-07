__int64 __fastcall sub_140041104(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // ebp
  void *v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rsi
  volatile signed __int32 *v14; // rdi
  void *v15; // rsi
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  void *v20; // rax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 *v22; // rdi
  _BYTE v24[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v25; // [rsp+58h] [rbp-60h]
  _BYTE v26[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v27; // [rsp+68h] [rbp-50h]
  _BYTE v28[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v29; // [rsp+78h] [rbp-40h]
  _BYTE v30[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v31; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwarePhy::InitializePhy", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = sub_140042668(a1);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                   a1 + 56,
                                   v26)
                    + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v24);
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v11,
        14,
        15,
        (__int64)&unk_1400D71E0,
        (__int64)v7,
        (__int64)v8,
        (__int64)L"ResetPhy()",
        v6);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v13 = v25;
      v1 &= ~2u;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v14 = v27;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_14003E4F0(a1, (__int64)L"ResetPhy()", 99, 156, v6);
  }
  else
  {
    v6 = sub_140042D68(a1);
    if ( v6 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v15 = &unk_1400D44E0;
        v16 = &unk_1400D44E0;
        v17 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v30)
                       + 16LL);
        if ( v17 )
          v16 = v17;
        v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v28);
        LOBYTE(v19) = 2;
        v20 = *(void **)(*(_QWORD *)v18 + 16LL);
        if ( v20 )
          v15 = v20;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v19,
          14,
          16,
          (__int64)&unk_1400D71E0,
          (__int64)v15,
          (__int64)v16,
          (__int64)L"VerifyPhyId()",
          v6);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v21 = v29;
        v1 &= ~8u;
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
      if ( (v1 & 4) != 0 )
      {
        v22 = v31;
        if ( v31 )
        {
          if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      sub_140011E4C(a1, (__int64)L"VerifyPhyId()", 101, 156, v6);
    }
    else
    {
      v6 = 0;
    }
  }
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v6;
}
