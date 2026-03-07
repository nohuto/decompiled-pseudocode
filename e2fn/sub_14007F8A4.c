void __fastcall sub_14007F8A4(__int64 a1)
{
  __int64 *v2; // rsi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  volatile signed __int32 *v7; // rdi
  void (__fastcall ***v8)(_QWORD); // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareLink::DispatchLinkStateChanged", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = *(_QWORD *)(a1 + 392);
  v6 = v5;
  if ( *(_QWORD *)(a1 + 424) )
    v6 = a1 + 384;
  while ( v5 != v6 )
  {
    sub_1400A27D4(&v8, v5 + 16);
    (**v8)(v8);
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        v7 = v9;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    v5 = *(_QWORD *)(v5 + 8);
  }
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
