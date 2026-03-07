__int64 __fastcall sub_14013D300(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  bool v7; // zf
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ConfigureWakeByLinkStatusChange", a1);
      if ( v6 )
        v2 = v6;
    }
  }
  v9 = 8LL;
  ((void (__fastcall *)(__int64, __int64, __int64 *))qword_1400DF958)(qword_1400DF700, a2, &v9);
  v7 = BYTE5(v9) == 0;
  *(_BYTE *)(a1 + 361) = BYTE4(v9) != 0;
  *(_BYTE *)(a1 + 362) = !v7;
  if ( v2 )
  {
    sub_140075108(v2);
    ExFreePool(v2);
  }
  return 0LL;
}
