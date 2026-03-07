_BOOL8 __fastcall IsMouseDeviceOnIgnoreList(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v7; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v8; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+28h] BYREF
  PVOID v11; // [rsp+90h] [rbp+30h] BYREF

  Object = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( (int)RIMGetDeviceObjectPointer(
              (struct _UNICODE_STRING *)(a1 + 208),
              a2,
              a3,
              &Handle,
              &v11,
              (PDEVICE_OBJECT *)&Object) < 0 )
    return 0LL;
  ObfReferenceObject(Object);
  v4 = RIMIsHIDMouse(Object);
  ZwClose(Handle);
  ObfDereferenceObject(v11);
  ObfDereferenceObject(Object);
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\IgnoredExternalMice");
  v7 = *(struct _UNICODE_STRING *)(a1 + 888);
  v8 = DestinationString;
  return IsDeviceOnRegistryList(&v8, &v7, v4);
}
