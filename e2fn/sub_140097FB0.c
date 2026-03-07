void __fastcall sub_140097FB0(__int64 a1)
{
  __int64 *v1; // rbp
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  _BYTE v13[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::Uninitialize", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = *(__int64 **)(a1 + 472);
  v6 = *v5;
  v7 = sub_1400A27D4(v13, a1 + 488);
  (*(void (__fastcall **)(__int64 *, __int64))(v6 + 24))(v5, v7);
  v8 = *(volatile signed __int32 **)(a1 + 496);
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = *(__int64 **)(a1 + 512);
  v10 = *v9;
  v11 = sub_1400A27D4(v14, a1 + 528);
  (*(void (__fastcall **)(__int64 *, __int64))(v10 + 24))(v9, v11);
  v12 = *(volatile signed __int32 **)(a1 + 536);
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 16LL))(*(_QWORD *)(a1 + 456));
  if ( v1 )
  {
    sub_1400953B8(v1);
    ExFreePool(v1);
  }
}
