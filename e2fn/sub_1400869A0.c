void __fastcall sub_1400869A0(_QWORD *a1)
{
  __int64 *v2; // rsi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rdi
  void *v7; // rcx

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareRxQueue::Deconfigure", (__int64)(a1 - 62));
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = (volatile signed __int32 *)a1[4];
  a1[4] = 0LL;
  a1[3] = 0LL;
  if ( v5 )
  {
    if ( !_InterlockedDecrement(v5 + 2) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( !_InterlockedDecrement(v5 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v6 = (volatile signed __int32 *)a1[6];
  a1[6] = 0LL;
  a1[5] = 0LL;
  if ( v6 )
  {
    if ( !_InterlockedDecrement(v6 + 2) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = (void *)a1[9];
  if ( v7 )
  {
    ExFreePool(v7);
    a1[9] = 0LL;
  }
  a1[10] = 0LL;
  a1[11] = 0LL;
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
