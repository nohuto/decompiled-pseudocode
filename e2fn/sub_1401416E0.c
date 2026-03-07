__int64 __fastcall sub_1401416E0(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rdi

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxPacketFilter::GetMaximumMulticastAddresses", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 40LL))(*(_QWORD *)(a1 + 360));
  if ( v1 )
  {
    sub_140091BA8(v1);
    ExFreePool(v1);
  }
  return v5;
}
