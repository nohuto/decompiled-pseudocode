__int64 __fastcall sub_140055708(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rdi

  *(_QWORD *)a1 = &off_1400D77D8;
  v2 = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400D7800;
  *(_QWORD *)(a1 + 200) = off_1400D7830;
  *(_QWORD *)(a1 + 352) = off_1400D7878;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnOtherInterruptControl::~ProductE2fnOtherInterruptControl",
             a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = *(_QWORD *)(a1 + 384);
  if ( v5 )
    sub_1400528B0(v5, *(_DWORD *)(a1 + 416));
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  v6 = *(volatile signed __int32 **)(a1 + 408);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = *(volatile signed __int32 **)(a1 + 392);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v8 = *(volatile signed __int32 **)(a1 + 376);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  *(_QWORD *)(a1 + 352) = &off_1400D5BA0;
  return sub_14007134C(a1);
}
