void __fastcall sub_14013A970(__int64 a1)
{
  __int64 *v2; // rsi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  int v5; // ebx

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::AdvertiseWakeCapabilities", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 128LL))(*(_QWORD *)(a1 + 520));
  if ( BYTE1(v5) )
    sub_14013A818(a1);
  if ( (_BYTE)v5 )
    sub_14013A488((_QWORD *)a1);
  if ( BYTE2(v5) )
    sub_14013A8C4(a1);
  if ( HIBYTE(v5) )
    sub_14013A0D8((_QWORD *)a1);
  if ( v2 )
  {
    sub_140075108(v2);
    ExFreePool(v2);
  }
}
