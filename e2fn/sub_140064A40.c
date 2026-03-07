void __fastcall sub_140064A40(__int64 a1)
{
  char v1; // di
  __int64 *v2; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  void *v6; // rsi
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  int v10; // edx
  void *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  _BYTE v14[8]; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v15; // [rsp+48h] [rbp-30h]
  _BYTE v16[8]; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v17; // [rsp+58h] [rbp-20h]

  v1 = 0;
  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14005A6E0(Pool2, (__int64)L"os_services::DeviceRestarter::RestartDevice", a1 - 352);
      if ( v5 )
        v2 = v5;
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 = &unk_1400D44E0;
    v7 = &unk_1400D44E0;
    v8 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                 a1 - 296,
                                 v16)
                  + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v14);
    LOBYTE(v10) = 4;
    v11 = *(void **)(*(_QWORD *)v9 + 16LL);
    if ( v11 )
      v6 = v11;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      v10,
      5,
      11,
      (__int64)&unk_1400D8588,
      (__int64)v6,
      (__int64)v7,
      (__int64)qword_1400B7720);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v12 = v15;
    v1 &= ~2u;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v13 = v17;
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(qword_1400DF678 + 696))(qword_1400DF6A8, *(_QWORD *)(a1 + 16), 1LL);
  if ( v2 )
  {
    sub_14005A99C(v2);
    ExFreePool(v2);
  }
}
