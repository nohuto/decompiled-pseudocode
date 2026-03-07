void __fastcall sub_14013A818(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::AdvertiseMagicPacketCapabilities", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v6 = 0LL;
  v5 = *(_QWORD *)(a1 + 504);
  LODWORD(v6) = 8;
  BYTE4(v6) = 1;
  ((void (__fastcall *)(__int64, __int64, __int64 *))qword_1400DF780)(qword_1400DF700, v5, &v6);
  if ( v1 )
  {
    sub_140075108(v1);
    ExFreePool(v1);
  }
}
