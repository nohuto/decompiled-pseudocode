void __fastcall sub_14006D4C4(__int64 a1)
{
  __int64 *v2; // rbp
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rdi

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterrupt::unbindCallbacks", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = *(_QWORD *)(a1 + 456);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *(volatile signed __int32 **)(a1 + 376);
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = *(volatile signed __int32 **)(a1 + 392);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( L"No Owner" != *(wchar_t **)(a1 + 416) )
    sub_1400011A8((_QWORD *)(a1 + 400), (__int64)L"No Owner", 8uLL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  if ( v2 )
  {
    sub_14005B5AC(v2);
    ExFreePool(v2);
  }
}
