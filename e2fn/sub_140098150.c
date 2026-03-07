void __fastcall sub_140098150(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  void *v6; // rsi
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  int v10; // edx
  void *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  void *v14; // rsi
  void *v15; // rdi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rdi
  __int64 v22; // [rsp+30h] [rbp-68h]
  _BYTE v23[8]; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int32 *v24; // [rsp+48h] [rbp-50h]
  _BYTE v25[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-40h]
  _BYTE v27[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-30h]
  _BYTE v29[8]; // [rsp+70h] [rbp-28h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp-20h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140095048(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::UpdateCompletePacketsCallback", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 80LL))(*(_QWORD *)(a1 + 456)) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = &unk_1400D44E0;
      v7 = &unk_1400D44E0;
      v8 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                   a1 + 56,
                                   v25)
                    + 16LL);
      if ( v8 )
        v7 = v8;
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v23);
      LOBYTE(v10) = 4;
      v11 = *(void **)(*(_QWORD *)v9 + 16LL);
      if ( v11 )
        v6 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v10,
        12,
        23,
        (__int64)&unk_1400DA108,
        (__int64)v6,
        (__int64)v7,
        (__int64)qword_1400B7720);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v24;
      v1 &= ~2u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_1400A5B28(a1 + 584, a1 + 568);
    sub_140095E80(a1);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = &unk_1400D44E0;
      v15 = &unk_1400D44E0;
      v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v29)
                     + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v27);
      LOBYTE(v18) = 4;
      v19 = *(void **)(*(_QWORD *)v17 + 16LL);
      if ( v19 )
        v14 = v19;
      v22 = (__int64)v15;
      v1 = 12;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v18,
        12,
        24,
        (__int64)&unk_1400DA108,
        (__int64)v14,
        v22,
        (__int64)qword_1400B7720);
    }
    if ( (v1 & 8) != 0 )
    {
      v20 = v28;
      v1 &= ~8u;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v21 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    sub_1400A5B28(a1 + 584, a1 + 552);
  }
  if ( v3 )
  {
    sub_14009548C(v3);
    ExFreePool(v3);
  }
}
