void __fastcall sub_14009037C(_QWORD *a1)
{
  __int64 *v1; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterWolPatterns::ClearFlexibleFilterParametersList",
             (__int64)a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = a1[48];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  while ( a1[62] )
    sub_1400B4EF8(a1 + 50, a1[51]);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  if ( v1 )
  {
    sub_140075108(v1);
    ExFreePool(v1);
  }
}
