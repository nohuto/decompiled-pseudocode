__int64 __fastcall IopOpenSystemVariableDevice(
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject,
        __int64 (__fastcall ***a3)(int, int, int, int, __int64, __int64, __int64))
{
  PVOID v3; // rbx
  int DeviceInterfaces; // eax
  NTSTATUS v8; // eax
  NTSTATUS DeviceObjectPointer; // edi
  __int64 (__fastcall **v10)(int, int, int, int, __int64, __int64, __int64); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  if ( (IopSysEnvOverrideFlags & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\WindowsTrustedRT\\{699AA2F1-A42E-40DF-BABE-3AAAD2BB6A47}");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
      *a3 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableTrEE;
      return (unsigned int)DeviceObjectPointer;
    }
  }
  else
  {
    DeviceInterfaces = IopGetDeviceInterfaces((int *)&GUID_EFI_VARIABLE_SERVICE, 0LL, 0, 0, (wchar_t **)&P, 0LL);
    v3 = P;
    if ( DeviceInterfaces >= 0 && *(_WORD *)P )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)P);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
      if ( DeviceObjectPointer >= 0 )
      {
        v10 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableTrEE;
        goto LABEL_7;
      }
      goto LABEL_8;
    }
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device\\SysEnv");
  v8 = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
  DeviceObjectPointer = v8;
  if ( v8 >= 0 )
  {
    v10 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableSysEnv;
    goto LABEL_7;
  }
  if ( (unsigned int)(v8 + 1073741773) <= 1 || v8 == -1073741766 )
  {
    *FileObject = 0LL;
    v10 = &IopSysEnvFunctionTableHal;
    *DeviceObject = 0LL;
    DeviceObjectPointer = 0;
LABEL_7:
    *a3 = v10;
  }
LABEL_8:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)DeviceObjectPointer;
}
