/*
 * XREFs of ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C0097DB4
 * Callers:
 *     InitializeInputComponents @ 0x1C009770C (InitializeInputComponents.c)
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x1C0097D70 (ForceUpdatePointerDeviceSystemMetrics.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C0232C38 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

NTSTATUS __fastcall CInputSystemMetrics::WriteSystemMetricsKey(__int64 a1, int a2, int a3)
{
  NTSTATUS result; // eax
  int v4; // r8d
  const WCHAR *v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  int Data; // [rsp+C0h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+D0h] [rbp+7Fh] BYREF

  Data = a2;
  result = 0xFFFF;
  if ( gProtocolType != -1 )
  {
    if ( a3 )
    {
      v4 = a3 - 1;
      if ( v4 )
      {
        if ( v4 != 2 )
        {
          v7 = 206LL;
          return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v7);
        }
        v5 = L"\\Registry\\Machine\\Software\\WowAA32Node\\Microsoft\\Windows\\Tablet PC";
      }
      else
      {
        v5 = L"\\Registry\\Machine\\Software\\Wow6432Node\\Microsoft\\Windows\\Tablet PC";
      }
    }
    else
    {
      v5 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC";
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v5);
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    KeyHandle = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
    {
      ValueName = 0LL;
      RtlInitUnicodeString(&ValueName, L"IsTabletPC");
      v6 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
      result = ZwClose(KeyHandle);
      if ( v6 >= 0 )
        return result;
    }
    v7 = 249LL;
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v7);
  }
  return result;
}
