__int64 __fastcall sub_14013DBDC(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ConfigureWakebyMagicPacket", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  *(_BYTE *)(a1 + 360) = 1;
  if ( v1 )
  {
    sub_140075108(v1);
    ExFreePool(v1);
  }
  return 0LL;
}
