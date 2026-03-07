__int64 __fastcall sub_140033E80(_QWORD *a1, _QWORD *a2)
{
  char v2; // si
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rbx
  void *v9; // rbp
  void *v10; // rsi
  void *v11; // rax
  void *v12; // rax
  int v13; // edx
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  unsigned int v16; // ebx
  __int64 v18; // [rsp+30h] [rbp-58h]
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-40h]
  _BYTE v21[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareRxFilter::SetMulticastAddressList",
             (__int64)(a1 - 44));
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = a1[9];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  sub_1400329E0(a1 + 5, a2);
  if ( a1[7] != a2[2] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = &unk_1400D44E0;
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(a1 - 37, v21) + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(a1 - 37, v19) + 16LL);
      if ( v12 )
        v9 = v12;
      v18 = (__int64)v10;
      v2 = 3;
      LOBYTE(v13) = 3;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        v13,
        14,
        16,
        (__int64)&unk_1400D69D8,
        (__int64)v9,
        v18,
        (__int64)qword_1400B7720);
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v20;
      v2 &= ~2u;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v22;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  v16 = sub_1400340B4(a1 - 44, a2);
  if ( v4 )
  {
    sub_14000BFA4(v4);
    ExFreePool(v4);
  }
  return v16;
}
