void __fastcall sub_140134480(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterRegistryAccessor::Close", a1 - 352);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = *(_QWORD *)(a1 + 24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
    ((void (__fastcall *)(__int64, _QWORD))qword_1400DF838)(qword_1400DF700, *(_QWORD *)(a1 + 48));
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  --*(_DWORD *)(a1 + 40);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  if ( v2 )
  {
    sub_140075108(v2);
    ExFreePool(v2);
  }
}
