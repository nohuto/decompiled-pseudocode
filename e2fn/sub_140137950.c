void __fastcall sub_140137950(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterNsOffload::AdvertiseCapabilities", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 24LL))(*(_QWORD *)(a1 + 384));
  v6 = *(_QWORD *)(a1 + 368);
  v7[1] = v5;
  v7[0] = 0x100000010LL;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1400DF768)(qword_1400DF700, v6, v7);
  if ( v2 )
  {
    sub_140075108(v2);
    ExFreePool(v2);
  }
}
