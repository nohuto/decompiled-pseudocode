/*
 * XREFs of ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C0097F04
 * Callers:
 *     InitializeInputComponents @ 0x1C009770C (InitializeInputComponents.c)
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x1C0097D70 (ForceUpdatePointerDeviceSystemMetrics.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C0232C38 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputSystemMetrics::WritePointerDevicePresenceKey(CInputSystemMetrics *this, int a2)
{
  NTSTATUS v2; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  int Data; // [rsp+C0h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+77h] BYREF

  Data = a2;
  if ( gProtocolType != -1 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    KeyHandle = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 1u, 0LL) < 0
      || (ValueName = 0LL,
          RtlInitUnicodeString(&ValueName, L"DeviceKind"),
          v2 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u),
          ZwClose(KeyHandle),
          v2 < 0) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 304LL);
    }
  }
}
