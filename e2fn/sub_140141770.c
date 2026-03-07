__int64 __fastcall sub_140141770(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  unsigned int v5; // edi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxPacketFilter::GetSupportedFilters", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 360) + 8LL))(*(_QWORD *)(a1 + 360), &v7);
  v5 = v7 & 0xF | (2 * (v7 & 0x10));
  if ( v1 )
  {
    sub_140091BA8(v1);
    ExFreePool(v1);
  }
  return v5;
}
