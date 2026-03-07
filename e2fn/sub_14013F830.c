void __fastcall sub_14013F830(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::EvtDeviceDisarmWakeFromSx", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = *(_QWORD *)(a1 + 520);
  *(_BYTE *)(a1 + 360) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *(_QWORD *)(a1 + 520);
  *(_WORD *)(a1 + 361) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  v7 = *(_QWORD *)(a1 + 520);
  *(_BYTE *)(a1 + 363) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 64LL))(*(_QWORD *)(a1 + 520));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 80LL))(*(_QWORD *)(a1 + 520));
  *(_BYTE *)(a1 + 364) = 0;
  if ( v1 )
  {
    sub_140075108(v1);
    ExFreePool(v1);
  }
}
