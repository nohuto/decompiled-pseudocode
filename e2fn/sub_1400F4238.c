void __fastcall sub_1400F4238(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rbx

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareLink::EvtReleaseHardware", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = *(volatile signed __int32 **)(a1 + 464);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( !_InterlockedDecrement(v5 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
