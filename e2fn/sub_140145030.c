void __fastcall sub_140145030(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  const wchar_t *v12; // [rsp+30h] [rbp-58h]
  char v13[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v14; // [rsp+58h] [rbp-30h]
  char v15[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+68h] [rbp-20h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140095048(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::EvtStop", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 48LL))(*(_QWORD *)(a1 + 456)) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = (const wchar_t *)&unk_1400D44E0;
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            v15)
                             + 16LL);
      if ( v8 )
        v7 = v8;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                            a1 + 56,
                                            v13)
                             + 16LL);
      if ( v9 )
        v6 = v9;
      v12 = v7;
      v1 = 3;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        3u,
        0xCu,
        0x19u,
        (__int64)&unk_1400DA108,
        v6,
        v12,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v1 & 2) != 0 )
    {
      v10 = v14;
      v1 &= ~2u;
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v11 = v16;
      if ( v16 )
      {
        if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 32LL))(*(_QWORD *)(a1 + 456));
  if ( v3 )
  {
    sub_14009548C(v3);
    ExFreePool(v3);
  }
}
