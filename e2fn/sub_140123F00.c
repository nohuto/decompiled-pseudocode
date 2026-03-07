void __fastcall sub_140123F00(__int64 a1)
{
  _QWORD *Pool2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rbx

  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v3 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::EvtDeviceWakeFromSxTriggered", a1 - 352);
      v4 = v3;
      if ( v3 )
      {
        sub_140075108(v3);
        ExFreePool(v4);
      }
    }
  }
}
