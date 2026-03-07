void __fastcall sub_140142220(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r14
  __int64 v9; // rbp

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxPacketFilter::SetFilters", a1);
      if ( v6 )
        v2 = v6;
    }
  }
  v7 = ((__int64 (__fastcall *)(__int64, __int64))qword_1400DF988)(qword_1400DF700, a2);
  v8 = ((__int64 (__fastcall *)(__int64, __int64))qword_1400DF990)(qword_1400DF700, a2);
  v9 = ((__int64 (__fastcall *)(__int64, __int64))qword_1400DF998)(qword_1400DF700, a2);
  sub_140141B24((_QWORD *)a1, v7);
  if ( (*(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 32LL))(*(_QWORD *)(a1 + 360)) & 2) != 0 )
    sub_140091D04(a1, v8, v9);
  if ( v2 )
  {
    sub_140091BA8(v2);
    ExFreePool(v2);
  }
}
