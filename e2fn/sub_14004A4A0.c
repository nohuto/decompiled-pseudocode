__int64 __fastcall sub_14004A4A0(__int64 a1)
{
  __int64 *v2; // rsi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &off_1400D7360;
  v2 = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400D7388;
  *(_QWORD *)(a1 + 200) = off_1400D73B8;
  *(_QWORD *)(a1 + 352) = off_1400D7400;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnQueueMsixInterruptControl::~ProductE2fnQueueMsixInterruptControl",
             a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = *(_QWORD *)(a1 + 416);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *(unsigned int *)(a1 + 436));
  v6 = *(__int64 **)(a1 + 368);
  if ( v6 )
  {
    v7 = *v6;
    v8 = sub_1400A27D4(v14, a1 + 400);
    (*(void (__fastcall **)(__int64 *, __int64))(v7 + 16))(v6, v8);
  }
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  v9 = *(volatile signed __int32 **)(a1 + 424);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = *(volatile signed __int32 **)(a1 + 408);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = *(volatile signed __int32 **)(a1 + 392);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  v12 = *(volatile signed __int32 **)(a1 + 376);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  *(_QWORD *)(a1 + 352) = &off_1400D5BA0;
  return sub_14007134C(a1);
}
