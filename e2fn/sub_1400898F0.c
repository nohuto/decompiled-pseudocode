__int64 __fastcall sub_1400898F0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  void *v11; // rsi
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  unsigned int v19; // ebx
  _BYTE v21[8]; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-50h]
  _BYTE v23[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-40h]
  _BYTE v25[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareRxFilter::Initialize", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 368) + 8LL))(
                    *(_QWORD *)(a1 + 368),
                    v21);
  v7 = *(_QWORD *)(a1 + 432);
  *(_QWORD *)(a1 + 432) = v6[1];
  v8 = *v6;
  v6[1] = v7;
  v9 = *(_QWORD *)(a1 + 424);
  *(_QWORD *)(a1 + 424) = v8;
  *v6 = v9;
  v10 = v22;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( *(_QWORD *)(a1 + 424) )
  {
    v19 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v25)
                     + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v23);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v15,
        10,
        11,
        (__int64)&unk_1400D9990,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"m_multicastAddressListLock");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v17 = v24;
      v1 &= ~2u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v18 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140019600(a1, (__int64)L"m_multicastAddressListLock", 70, 89);
    v19 = -1073741801;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v19;
}
