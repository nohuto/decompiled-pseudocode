__int64 __fastcall sub_140051090(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rbx
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  unsigned int v16; // ebx
  __int64 (__fastcall *v18)(); // [rsp+40h] [rbp-68h] BYREF
  int v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-50h]
  _BYTE v22[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-40h]
  _BYTE v24[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v25; // [rsp+78h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnOtherInterruptsDispatcher::AllocateComponents",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v19 = 0;
  v18 = sub_140051A30;
  v6 = sub_14000DB1C(&v20, a1, (__int64)&v18);
  sub_1400A3C70(a1 + 51, v6);
  v7 = v21;
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( a1[51] )
  {
    v16 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v24) + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v22);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v12,
        10,
        10,
        (__int64)&unk_1400D7608,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"m_interruptAssertedCallback");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v14 = v23;
      v1 &= ~2u;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v15 = v25;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000B7A4((int)a1, (__int64)L"m_interruptAssertedCallback", 58, 67);
    v16 = -1073741801;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v16;
}
