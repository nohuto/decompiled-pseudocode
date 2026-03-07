void __fastcall sub_14010DE64(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14005B310(Pool2, (__int64)L"os_resources::MemoryMappedIoAccessorsProvider::EvtD0Entry", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  sub_140111624(*(_QWORD *)(a1 + 368));
  if ( v1 )
  {
    sub_14005B5AC(v1);
    ExFreePool(v1);
  }
}
