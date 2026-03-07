void __fastcall sub_140148144(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rdx
  _DWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxQueue::InitFragmentVirtualAddressExtension", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = *(_QWORD *)(a1 + 360);
  v6[1] = 0;
  v7 = L"ms_fragment_virtualaddress";
  v6[0] = 24;
  v8 = 1;
  v9 = 2;
  ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64))qword_1400DF910)(qword_1400DF700, v5, v6, a1 + 520);
  if ( v1 )
  {
    sub_140091BA8(v1);
    ExFreePool(v1);
  }
}
