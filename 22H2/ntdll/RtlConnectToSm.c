/*
 * XREFs of RtlConnectToSm @ 0x180089BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtAlpcConnectPort @ 0x18009E3F0 (NtAlpcConnectPort.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

NTSTATUS __fastcall RtlConnectToSm(const void **a1, __int64 a2, int a3, HANDLE *a4)
{
  size_t v9; // rbx
  ULONG_PTR BufferLength; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _PORT_MESSAGE ConnectionMessage; // [rsp+B0h] [rbp-50h] BYREF
  int v14; // [rsp+D8h] [rbp-28h]
  _WORD v15[122]; // [rsp+DCh] [rbp-24h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+1D0h] [rbp+D0h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\SmApiPort");
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  PortAttributes.Flags = 0x10000;
  PortAttributes.SecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&PortAttributes.SecurityQos.ContextTrackingMode = 257;
  PortAttributes.MaxMessageLength = 328LL;
  PortAttributes.MaxPoolUsage = 10496LL;
  if ( !a1 )
  {
    v15[0] = 0;
    v14 = 0;
LABEL_3:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ConnectionMessage.MessageId = 0;
    *(_QWORD *)&ConnectionMessage.u1.s1.DataLength = 18612468LL;
    BufferLength = 288LL;
    return NtAlpcConnectPort(
             a4,
             &DestinationString,
             &ObjectAttributes,
             &PortAttributes,
             0x20000u,
             0LL,
             &ConnectionMessage,
             &BufferLength,
             0LL,
             0LL,
             0LL);
  }
  if ( !a2 || !a3 )
    return -1073741776;
  if ( *(_WORD *)a1 < 0xF0u )
  {
    v9 = *(unsigned __int16 *)a1;
    memmove(v15, a1[1], v9);
    v15[v9 >> 1] = 0;
    v14 = a3;
    goto LABEL_3;
  }
  return -1073741811;
}
