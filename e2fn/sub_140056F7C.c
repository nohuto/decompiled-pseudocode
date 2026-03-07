__int64 __fastcall sub_140056F7C(__int64 a1)
{
  char v1; // si
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  void *v6; // r12
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  void *v10; // rdx
  void *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // r14d
  void *v15; // rdi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 v23; // [rsp+28h] [rbp-90h]
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
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"e1000_hardware::E1000HardwareReceiveControlRegister::E1000AcceptMulticastPromiscuous",
             a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = &unk_1400D44E0;
    v8 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v26)
                  + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v24);
    v10 = &unk_1400D44E0;
    v11 = *(void **)(*(_QWORD *)v9 + 16LL);
    if ( v11 )
      v10 = v11;
    v23 = (__int64)v10;
    LOBYTE(v10) = 4;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      (_DWORD)v10,
      10,
      18,
      (__int64)&unk_1400D7890,
      v23,
      (__int64)v7,
      (__int64)qword_1400B7720);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v12 = v25;
    v1 &= ~2u;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v13 = v27;
    v1 &= ~1u;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  v14 = sub_14007D424(a1, 16LL);
  if ( v14 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 |= 0xCu;
      v15 = &unk_1400D44E0;
      v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v30)
                     + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v28);
      LOBYTE(v18) = 2;
      v19 = *(void **)(*(_QWORD *)v17 + 16LL);
      if ( v19 )
        v6 = v19;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v18,
        10,
        19,
        (__int64)&unk_1400D7890,
        (__int64)v6,
        (__int64)v15,
        (__int64)L"SetMaskSafe((1 << 4))",
        v14);
    }
    if ( (v1 & 8) != 0 )
    {
      v20 = v29;
      v1 &= ~8u;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v21 = v31;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    sub_14003B824(a1, (__int64)L"SetMaskSafe((1 << 4))", 93, 121, v14);
  }
  else
  {
    v14 = 0;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v14;
}
