__int64 __fastcall sub_140123440(__int64 a1)
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
      v4 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::EvtD0Exit", a1 - 352);
      if ( v4 )
        v1 = v4;
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 352LL) + 16LL))(*(_QWORD *)(a1 + 80) + 352LL);
  if ( v1 )
  {
    sub_140075108(v1);
    ExFreePool(v1);
  }
  return 0LL;
}
