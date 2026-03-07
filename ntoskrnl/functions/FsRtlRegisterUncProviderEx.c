NTSTATUS __stdcall FsRtlRegisterUncProviderEx(
        PHANDLE MupHandle,
        PCUNICODE_STRING RedirDevName,
        PDEVICE_OBJECT DeviceObject,
        FSRTL_UNC_PROVIDER_FLAGS Flags)
{
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = Flags;
  v5[0] = 16842760;
  return FsRtlpRegisterUncProvider((__int64)RedirDevName, (__int64)DeviceObject, (__int64)v5, MupHandle);
}
