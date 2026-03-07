void __fastcall sub_1401443D4(_QWORD *a1, _QWORD *a2)
{
  __int64 *v3; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterQueue::InitializeRings", (__int64)a1);
      if ( v6 )
        v3 = v6;
    }
  }
  a1[51] = a2;
  a1[47] = *a2;
  a1[48] = a2[1];
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
}
