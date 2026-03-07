void __fastcall sub_140095DB0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::EvtChecksumOffloadConfigurationChanged", a1);
      if ( v6 )
        v2 = v6;
    }
  }
  *(_WORD *)(a1 + 504) = *(_WORD *)a2;
  *(_BYTE *)(a1 + 506) = *(_BYTE *)(a2 + 2);
  if ( v2 )
  {
    sub_1400953B8(v2);
    ExFreePool(v2);
  }
}
