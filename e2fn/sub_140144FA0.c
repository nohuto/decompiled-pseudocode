void __fastcall sub_140144FA0(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140095048(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::EvtStart", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 24LL))(*(_QWORD *)(a1 + 456));
  if ( v1 )
  {
    sub_14009548C(v1);
    ExFreePool(v1);
  }
}
