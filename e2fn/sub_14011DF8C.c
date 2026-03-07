void __fastcall sub_14011DF8C(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::AdvertiseRxFilterCapabilities", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  sub_1401418A0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 368), sub_14011C890);
  if ( v2 )
  {
    sub_140075108(v2);
    ExFreePool(v2);
  }
}
