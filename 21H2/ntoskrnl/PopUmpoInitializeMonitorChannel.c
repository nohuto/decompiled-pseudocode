/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x140B2CD08
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x14041C6C0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x14041C900 (ZwAlpcSetInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x1408600E4 (PopMonitorProcessLoop.c)
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
