void __fastcall sub_14010B460(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14005A6E0(Pool2, (__int64)L"os_services::WorkItem::Flush", a1 - 376);
      if ( v4 )
        v1 = v4;
    }
  }
  sub_14010B4E4(a1 - 376);
  if ( v1 )
  {
    sub_14005A99C(v1);
    ExFreePool(v1);
  }
}
