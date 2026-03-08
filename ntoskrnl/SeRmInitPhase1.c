/*
 * XREFs of SeRmInitPhase1 @ 0x140B614EC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreatePort @ 0x140413A90 (ZwCreatePort.c)
 *     PsCreateSystemThread @ 0x1407DE2E0 (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140841554 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAdtInitializeAuditingOptions @ 0x140B615C0 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  __int128 v7; // [rsp+60h] [rbp-18h]

  v6 = 0;
  v4[1] = 0LL;
  v5 = 0;
  v4[0] = 48LL;
  v4[2] = L" \"";
  v7 = 0LL;
  if ( (int)ZwCreatePort((__int64)&Handle, (__int64)v4) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions(v0);
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v2, v1);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06528, 0LL, 0LL);
  return 1;
}
