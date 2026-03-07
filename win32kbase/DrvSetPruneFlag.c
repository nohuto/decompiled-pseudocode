__int64 __fastcall DrvSetPruneFlag(const UNICODE_STRING *a1, unsigned __int8 a2, int a3)
{
  int v3; // ebp
  __int64 DeviceFromName; // rax
  __int64 v6; // rdi
  HANDLE RegistryHandleFromDeviceMap; // rsi
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v13; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
    return 4294967291LL;
  DeviceFromName = DrvGetDeviceFromName(a1);
  v6 = DeviceFromName;
  if ( !DeviceFromName
    || a3 && !*(_QWORD *)(DeviceFromName + 136) && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
  {
    return 4294967291LL;
  }
  if ( DrvIsPermanentSettingChangesDisabled() )
    return 4294967293LL;
  Data = v3;
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v6, 0, 0LL, 0LL, 0, 0LL);
  if ( !RegistryHandleFromDeviceMap )
    return 0xFFFFFFFFLL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PruningMode");
  v9 = ZwSetValueKey(RegistryHandleFromDeviceMap, &DestinationString, 0, 4u, &Data, 4u);
  ZwClose(RegistryHandleFromDeviceMap);
  if ( v9 < 0 )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(v6 + 160) & 0x800000) != 0
    && (DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v11, v10),
        LOBYTE(v13) = (_BYTE)v3 == 0,
        (*(int (__fastcall **)(__int64))(DxgkWin32kInterface + 336))(v13) < 0) )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return 0LL;
  }
}
