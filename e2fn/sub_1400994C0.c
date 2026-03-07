void __fastcall sub_1400994C0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxQueue::EvtChecksumOffloadConfigurationChanged", a1);
      if ( v6 )
        v2 = v6;
    }
  }
  *(_WORD *)(a1 + 696) = *(_WORD *)a2;
  *(_BYTE *)(a1 + 698) = *(_BYTE *)(a2 + 2);
  if ( v2 )
  {
    sub_140091BA8(v2);
    ExFreePool(v2);
  }
}
