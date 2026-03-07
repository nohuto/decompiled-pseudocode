void __fastcall WdfDeleteKmdfVersionFromRegistry(_DRIVER_OBJECT *DriverObject)
{
  _UNICODE_STRING *DriverObjectExtension; // rax
  _UNICODE_STRING *v3; // rbx
  wchar_t *Buffer; // rcx
  _UNICODE_STRING valueName; // [rsp+20h] [rbp-50h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES objectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *parametersKey; // [rsp+88h] [rbp+18h] BYREF
  void *driverKey; // [rsp+90h] [rbp+20h] BYREF

  *(&objectAttributes.Length + 1) = 0;
  *(&objectAttributes.Attributes + 1) = 0;
  valueName = 0LL;
  parametersPath = 0LL;
  RtlInitUnicodeString(&parametersPath, L"Parameters");
  driverKey = 0LL;
  parametersKey = 0LL;
  DriverObjectExtension = (_UNICODE_STRING *)IoGetDriverObjectExtension(DriverObject, DriverEntry);
  v3 = DriverObjectExtension;
  if ( DriverObjectExtension && DriverObjectExtension->Buffer )
  {
    objectAttributes.RootDirectory = 0LL;
    objectAttributes.Length = 48;
    objectAttributes.Attributes = 576;
    objectAttributes.ObjectName = DriverObjectExtension;
    *(_OWORD *)&objectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&driverKey, 2u, &objectAttributes) >= 0 )
    {
      objectAttributes.RootDirectory = driverKey;
      objectAttributes.Length = 48;
      objectAttributes.ObjectName = &parametersPath;
      objectAttributes.Attributes = 576;
      *(_OWORD *)&objectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&parametersKey, 0x10000u, &objectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&valueName, L"MajorVersion");
        ZwDeleteValueKey(parametersKey, &valueName);
        RtlInitUnicodeString(&valueName, L"MinorVersion");
        ZwDeleteValueKey(parametersKey, &valueName);
        RtlInitUnicodeString(&valueName, L"BuildNumber");
        ZwDeleteValueKey(parametersKey, &valueName);
        ZwDeleteKey(parametersKey);
      }
    }
    Buffer = v3->Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    if ( driverKey )
      ZwClose(driverKey);
    if ( parametersKey )
      ZwClose(parametersKey);
  }
}
