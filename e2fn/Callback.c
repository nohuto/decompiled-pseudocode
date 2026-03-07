__int64 __fastcall Callback(LPCGUID SettingGuid, _QWORD *Value, ULONG ValueLength, __int64 Context)
{
  __int64 *v4; // rbx
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  unsigned int v9; // edi

  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14005A6E0(
             Pool2,
             (__int64)L"os_services::OsActivePowerScheme::EvtActivePowerschemeChangeCallback",
             Context);
      if ( v8 )
        v4 = v8;
    }
  }
  v9 = sub_14010CB78(Context, Value);
  if ( v4 )
  {
    sub_14005A99C(v4);
    ExFreePool(v4);
  }
  return v9;
}
