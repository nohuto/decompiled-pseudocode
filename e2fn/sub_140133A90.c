__int64 *__fastcall sub_140133A90(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterHardwareConfigurationFactory::GetHardwareConfiguration",
             a1);
      if ( v6 )
        v2 = v6;
    }
  }
  v7 = ExAllocatePool2(64LL, 32LL, 808477751LL);
  if ( v7 && (v8 = sub_1400B1248(v7)) != 0 && (v9 = *(_DWORD **)(v8 + 16)) != 0LL )
  {
    a2[1] = 0LL;
  }
  else
  {
    v9 = 0LL;
    v8 = 0LL;
  }
  a2[1] = v8;
  *a2 = (__int64)v9;
  if ( v9 )
  {
    *v9 = sub_14008D974(a1);
    v10 = *a2;
    *(_DWORD *)(v10 + 4) = sub_14008CC50(a1);
    v11 = *a2;
    *(_DWORD *)(v11 + 8) = sub_14008D0A8(a1);
    v12 = *a2;
    *(_DWORD *)(v12 + 12) = sub_14008D51C(a1);
  }
  if ( v2 )
  {
    sub_140075108(v2);
    ExFreePool(v2);
  }
  return a2;
}
