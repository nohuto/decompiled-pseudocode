__int64 __fastcall sub_140051B14(__int64 a1)
{
  char v1; // si
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // r14d
  void *v10; // rsi
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // r9
  void *v20; // rsi
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  void *v25; // rax
  volatile signed __int32 *v26; // rdi
  volatile signed __int32 *v27; // rdi
  _BYTE v29[8]; // [rsp+50h] [rbp-78h] BYREF
  volatile signed __int32 *v30; // [rsp+58h] [rbp-70h]
  _BYTE v31[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v32; // [rsp+68h] [rbp-60h]
  _BYTE v33[8]; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v34; // [rsp+78h] [rbp-50h]
  _BYTE v35[8]; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v36; // [rsp+88h] [rbp-40h]
  _BYTE v37[16]; // [rsp+90h] [rbp-38h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnOtherInterruptsDispatcher::Initialize", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(__int64 **)(a1 + 392);
  v7 = *v6;
  v8 = sub_1400A27D4(v37, a1 + 408);
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v7 + 8))(v6, v8);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v31)
                     + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v29);
      LOBYTE(v14) = 2;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v10 = v15;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v14,
        10,
        14,
        (__int64)&unk_1400D7608,
        (__int64)v10,
        (__int64)v11,
        (__int64)L"m_interruptDispatcher->RegisterInterrupt(m_interruptAssertedCallback)",
        v9);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v16 = v30;
      v1 &= ~2u;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v17 = v32;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14001921C(a1, (__int64)L"m_interruptDispatcher->RegisterInterrupt(m_interruptAssertedCallback)", 87, 67, v9);
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 24LL))(*(_QWORD *)(a1 + 392));
    LOBYTE(v19) = 1;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 376) + 8LL))(
           *(_QWORD *)(a1 + 376),
           9LL,
           v18,
           v19);
    if ( v9 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v20 = &unk_1400D44E0;
        v21 = &unk_1400D44E0;
        v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v35)
                       + 16LL);
        if ( v22 )
          v21 = v22;
        v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v33);
        LOBYTE(v24) = 2;
        v25 = *(void **)(*(_QWORD *)v23 + 16LL);
        if ( v25 )
          v20 = v25;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v24,
          10,
          15,
          (__int64)&unk_1400D7608,
          (__int64)v20,
          (__int64)v21,
          (__int64)L"m_interruptVectorAllocator->AllocateInterruptVector(IProductE2fnInterruptVectorAllocator::IvarIndexTy"
                    "pes::OtherInterrupts, messageId)",
          v9);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v26 = v34;
        v1 &= ~8u;
        if ( v34 )
        {
          if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v27 = v36;
        if ( v36 )
        {
          if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      sub_140050AA0(
        a1,
        (__int64)L"m_interruptVectorAllocator->AllocateInterruptVector(IProductE2fnInterruptVectorAllocator::IvarIndexType"
                  "s::OtherInterrupts, messageId)",
        93,
        67,
        v9);
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v9;
}
