/*
 * XREFs of IsMouseDeviceOnIgnoreList @ 0x1C0115FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C01160C4 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     GetDeviceObjectPointer @ 0x1C01161F0 (GetDeviceObjectPointer.c)
 */

int __fastcall IsMouseDeviceOnIgnoreList(__int64 a1, __int64 a2, int a3)
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
  if ( (int)GetDeviceObjectPointer((int)a1 + 208, 0, a3, (unsigned int)&Handle, (__int64)&v11, (__int64)&Object) < 0 )
    return 0;
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
