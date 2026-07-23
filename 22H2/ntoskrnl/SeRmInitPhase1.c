/*
 * XREFs of SeRmInitPhase1 @ 0x140A4BA3C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwCreatePort @ 0x1403FB120 (ZwCreatePort.c)
 *     PsCreateSystemThread @ 0x1406FDA10 (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078CF94 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14079E4F8 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A4BB0C (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  memset(&ObjectAttributes.Attributes, 0, 24);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L" \"";
  if ( ZwCreatePort(&PortHandle, &ObjectAttributes, 4u, 0x200u, 0x4000u) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions();
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v0);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02B70, 0LL, 0LL);
  return 1;
}
