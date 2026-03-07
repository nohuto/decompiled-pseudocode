void __fastcall sub_14009BB54(_QWORD *a1)
{
  __int64 *v2; // rbp
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxQueue::Uninitialize", (__int64)a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = (__int64 *)a1[83];
  v6 = *v5;
  v7 = sub_1400A27D4(v10, a1 + 85);
  (*(void (__fastcall **)(__int64 *, __int64))(v6 + 48))(v5, v7);
  v8 = (volatile signed __int32 *)a1[86];
  a1[86] = 0LL;
  a1[85] = 0LL;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = a1[57];
  a1[70] = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v2 )
  {
    sub_140091BA8(v2);
    ExFreePool(v2);
  }
}
