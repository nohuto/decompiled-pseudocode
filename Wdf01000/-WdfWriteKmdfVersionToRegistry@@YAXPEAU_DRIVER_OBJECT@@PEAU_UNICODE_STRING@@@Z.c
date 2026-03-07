void __fastcall WdfWriteKmdfVersionToRegistry(_DRIVER_OBJECT *DriverObject, _UNICODE_STRING *RegistryPath)
{
  wchar_t *Pool2; // rax
  _UNICODE_STRING valueName; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+50h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES objectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _DRV_EXTENSION *driverExtension; // [rsp+C8h] [rbp+6Fh] BYREF
  void *parametersKey; // [rsp+D0h] [rbp+77h] BYREF
  void *driverKey; // [rsp+D8h] [rbp+7Fh] BYREF

  *(&objectAttributes.Length + 1) = 0;
  *(&objectAttributes.Attributes + 1) = 0;
  driverKey = 0LL;
  parametersKey = 0LL;
  driverExtension = 0LL;
  valueName = 0LL;
  parametersPath = 0LL;
  RtlInitUnicodeString(&parametersPath, L"Parameters");
  objectAttributes.Length = 48;
  objectAttributes.RootDirectory = 0LL;
  objectAttributes.Attributes = 576;
  objectAttributes.ObjectName = RegistryPath;
  *(_OWORD *)&objectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&driverKey, 4u, &objectAttributes) >= 0 )
  {
    objectAttributes.RootDirectory = driverKey;
    objectAttributes.Length = 48;
    objectAttributes.Attributes = 576;
    objectAttributes.ObjectName = &parametersPath;
    *(_OWORD *)&objectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&parametersKey, 2u, &objectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
    {
      RtlInitUnicodeString(&valueName, L"MajorVersion");
      if ( ZwSetValueKey(parametersKey, &valueName, 0, 4u, &WdfLibraryInfo.Version, 4u) >= 0 )
      {
        RtlInitUnicodeString(&valueName, L"MinorVersion");
        if ( ZwSetValueKey(parametersKey, &valueName, 0, 4u, &WdfLibraryInfo.Version.Minor, 4u) >= 0 )
        {
          RtlInitUnicodeString(&valueName, L"BuildNumber");
          if ( ZwSetValueKey(parametersKey, &valueName, 0, 4u, &WdfLibraryInfo.Version.Build, 4u) >= 0 )
          {
            if ( IoAllocateDriverObjectExtension(DriverObject, DriverEntry, 0x10u, (PVOID *)&driverExtension) >= 0 )
            {
              if ( driverExtension )
              {
                Pool2 = (wchar_t *)ExAllocatePool2(256LL, RegistryPath->MaximumLength, 1917089862LL);
                driverExtension->ParametersRegistryPath.Buffer = Pool2;
                if ( driverExtension->ParametersRegistryPath.Buffer )
                {
                  driverExtension->ParametersRegistryPath.MaximumLength = RegistryPath->MaximumLength;
                  RtlCopyUnicodeString(&driverExtension->ParametersRegistryPath, RegistryPath);
                }
              }
            }
          }
          else if ( WdfLdrDbgPrintOn )
          {
            DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
            DbgPrintEx(0x65u, 0, "WdfWriteKmdfVersionToRegistry: Failed to set Build Number\n");
          }
        }
        else if ( WdfLdrDbgPrintOn )
        {
          DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
          DbgPrintEx(0x65u, 0, "WdfWriteKmdfVersionToRegistry: Failed to set Minor Version\n");
        }
      }
      else if ( WdfLdrDbgPrintOn )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "WdfWriteKmdfVersionToRegistry: Failed to set Major Version\n");
      }
    }
    else if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(
        0x65u,
        0,
        "WdfWriteKmdfVersionToRegistry: Failed to open HKLM\\%S\\%S\n",
        RegistryPath->Buffer,
        parametersPath.Buffer);
    }
  }
  else if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "WdfWriteKmdfVersionToRegistry: Failed to open HKLM\\%S\n", RegistryPath->Buffer);
  }
  if ( driverKey )
    ZwClose(driverKey);
  if ( parametersKey )
    ZwClose(parametersKey);
}
