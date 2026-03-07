void __fastcall sub_140143F54(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  _QWORD *Pool2; // rax
  __int64 *v6; // rax

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterQueue::InitQueueConfig", a1);
      if ( v6 )
        v3 = v6;
    }
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 24) = sub_140093D30;
  *(_QWORD *)(a2 + 32) = sub_140093F30;
  *(_QWORD *)(a2 + 40) = sub_140093D60;
  *(_QWORD *)(a2 + 8) = sub_140143E20;
  *(_QWORD *)(a2 + 16) = sub_140143EC0;
  *(_DWORD *)a2 = 56;
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
}
