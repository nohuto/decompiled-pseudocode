/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x140B6DF34
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ExRegisterCallback @ 0x1402FBE90 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x140302720 (ExUnregisterCallback.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x140413270 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1404134B0 (ZwAlpcSetInformation.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x14085C548 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PCALLBACK_OBJECT v0; // rbx
  PVOID v1; // rsi
  int Port; // edi
  NTSTATUS v3; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-61h] BYREF
  __int128 v7; // [rsp+60h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v9[9]; // [rsp+88h] [rbp-9h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v0 = 0LL;
  v1 = 0LL;
  PopAlpcMonitorServerPort = 0LL;
  PopAlpcMonitorClientPort = 0LL;
  v7 = 0LL;
  CallbackObject = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset(v9, 0, sizeof(v9));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  LODWORD(v9[0]) = 0x100000;
  v9[2] = 256LL;
  ObjectAttributes.Attributes = 512;
  Port = ZwAlpcCreatePort((__int64)&PopAlpcMonitorServerPort, (__int64)&ObjectAttributes);
  if ( Port >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    v0 = CallbackObject;
    Port = v3;
    if ( v3 >= 0 )
    {
      v1 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( !v1 )
        return (unsigned int)Port;
      *(_QWORD *)&v7 = v0;
      *((_QWORD *)&v7 + 1) = PopAlpcMonitorServerPort;
      Port = ZwAlpcSetInformation((__int64)PopAlpcMonitorServerPort, 9LL);
      ObfDereferenceObjectWithTag(v0, 0x746C6644u);
      if ( Port >= 0 )
      {
        PopMonitorProcessLoop();
        return 0;
      }
    }
  }
  if ( PopAlpcMonitorServerPort )
    ZwClose(PopAlpcMonitorServerPort);
  if ( v1 )
    ExUnregisterCallback(v1);
  if ( v0 )
    ObfDereferenceObjectWithTag(v0, 0x746C6644u);
  return (unsigned int)Port;
}
