void __fastcall sub_140149430(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  _QWORD *Pool2; // rax
  __int64 *v11; // rax

  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterChecksumOffload::AdvertiseCapabilities", a1);
      if ( v11 )
        v5 = v11;
    }
  }
  sub_1401494F8(a1, a2, a3, a5);
  sub_1401498B8(a1, a2, a4, a5);
  if ( v5 )
  {
    sub_140075108(v5);
    ExFreePool(v5);
  }
}
