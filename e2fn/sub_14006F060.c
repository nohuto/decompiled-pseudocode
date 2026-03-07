__int64 __fastcall sub_14006F060(__int64 a1)
{
  char v1; // si
  __int64 v2; // r14
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  void *v7; // rsi
  void *v8; // rbx
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // r14
  volatile signed __int32 *v14; // rsi
  void *v15; // rsi
  void *v16; // rbx
  void *v17; // rax
  void *v18; // rax
  volatile signed __int32 *v19; // r14
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rsi
  void *v22; // rcx
  _BYTE v24[8]; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int32 *v25; // [rsp+48h] [rbp-50h]
  _BYTE v26[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-40h]
  _BYTE v28[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp-30h]
  _BYTE v30[8]; // [rsp+70h] [rbp-28h] BYREF
  volatile signed __int32 *v31; // [rsp+78h] [rbp-20h]

  v1 = 0;
  *(_QWORD *)a1 = &off_1400D8F50;
  v2 = a1 + 56;
  *(_QWORD *)(a1 + 56) = off_1400D8F78;
  v4 = 0LL;
  *(_QWORD *)(a1 + 200) = off_1400D8FA8;
  *(_QWORD *)(a1 + 352) = &off_1400D8FF0;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14005B310(Pool2, (__int64)L"os_resources::PowerResource::~PowerResource", a1);
      if ( v6 )
        v4 = v6;
    }
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)sub_14005AEB0(v2, (__int64)v26) + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = sub_14006CDF0(v2, (__int64)v24);
      LOBYTE(v11) = 4;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v11,
        4,
        10,
        (__int64)&unk_1400D8F38,
        (__int64)v7,
        (__int64)v8,
        (__int64)qword_1400B7720);
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
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, const char *))(qword_1400DF678 + 3512))(
      qword_1400DF6A8,
      *(_QWORD *)(a1 + 368),
      0LL,
      61LL,
      "C:\\Sandbox\\1219361\\Sources\\OsAbstractions\\PowerResource.cpp");
    (***(void (__fastcall ****)(_QWORD, __int64))(a1 + 416))(*(_QWORD *)(a1 + 416), a1);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = &unk_1400D44E0;
      v16 = &unk_1400D44E0;
      v17 = *(void **)(*(_QWORD *)sub_14005AEB0(v2, (__int64)v30) + 16LL);
      if ( v17 )
        v16 = v17;
      v18 = *(void **)(*(_QWORD *)sub_14006CDF0(v2, (__int64)v28) + 16LL);
      if ( v18 )
        v15 = v18;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        3,
        4,
        11,
        (__int64)&unk_1400D8F38,
        (__int64)v15,
        (__int64)v16,
        (__int64)qword_1400B7720);
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v19 = v29;
      v1 &= ~8u;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v20 = v31;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
  }
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
  v21 = *(volatile signed __int32 **)(a1 + 424);
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  v22 = *(void **)(a1 + 392);
  *(_QWORD *)(a1 + 376) = &off_1400D41D0;
  if ( v22 )
    ExFreePool(v22);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 352) = &off_1400D8F48;
  return sub_14007134C(a1);
}
