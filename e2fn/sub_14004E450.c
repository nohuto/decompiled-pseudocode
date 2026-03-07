__int64 __fastcall sub_14004E450(_QWORD *a1, _QWORD *a2)
{
  char v2; // si
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rdi
  __int64 v18; // rbx
  _QWORD *v19; // rdx
  volatile signed __int32 *v20; // rdi
  _BYTE v21[8]; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-40h]
  _BYTE v23[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnMsixInterruptDispatcher::RegisterInterrupt",
             (__int64)(a1 - 44));
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *a2 )
  {
    v18 = a1[10];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( a1[17] )
      v19 = a1 + 12;
    else
      v19 = (_QWORD *)a1[13];
    sub_1400A440C(a1 + 12, v19, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v20 = (volatile signed __int32 *)a2[1];
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    return 0LL;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(a1 - 37, v23) + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(a1 - 37, v21);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        v12,
        10,
        16,
        (__int64)&unk_1400D7418,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"interruptAssertedCallback");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v22;
      v2 &= ~2u;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v24;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_140017CC8((_DWORD)a1 - 352, (__int64)L"interruptAssertedCallback", 128, 64);
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v16 = (volatile signed __int32 *)a2[1];
    if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return 3221225485LL;
  }
}
