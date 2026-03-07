__int64 __fastcall sub_140026DDC(__int64 a1, int a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r15
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rdi
  unsigned int v16; // ebx
  void *v17; // r15
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v24; // rdi
  _BYTE v26[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-50h]
  _BYTE v28[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp-40h]
  _BYTE v30[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v31; // [rsp+78h] [rbp-30h]
  _BYTE v32[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v33; // [rsp+88h] [rbp-20h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::ValidateFirmwareCommandLength",
             (a1 + 8) & -(__int64)(a1 != 0));
      if ( v7 )
        v4 = v7;
    }
  }
  if ( (unsigned int)(a2 - 1) > 0x6FF )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = &unk_1400D44E0;
      v18 = &unk_1400D44E0;
      v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 16LL))(
                                    a1 + 64,
                                    v32)
                     + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 24LL))(a1 + 64, v30);
      LOBYTE(v21) = 2;
      v22 = *(void **)(*(_QWORD *)v20 + 16LL);
      if ( v22 )
        v17 = v22;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL),
        v21,
        14,
        64,
        (__int64)&unk_1400D6110,
        (__int64)v17,
        (__int64)v18,
        (__int64)qword_1400B7720,
        a2);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v23 = v31;
      v2 &= ~2u;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v24 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    v16 = -1073741820;
  }
  else if ( (a2 & 3) != 0 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 16LL))(
                                    a1 + 64,
                                    v28)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 24LL))(a1 + 64, v26);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL),
        v12,
        14,
        65,
        (__int64)&unk_1400D6110,
        (__int64)v8,
        (__int64)v9,
        (__int64)qword_1400B7720,
        a2);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v14 = v27;
      v2 &= ~8u;
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
    if ( (v2 & 4) != 0 )
    {
      v15 = v29;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = -1073741811;
  }
  else
  {
    v16 = 0;
  }
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v16;
}
