/*
 * XREFs of SeRmInitPhase1 @ 0x140B21F30
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreatePort @ 0x14041CEC0 (ZwCreatePort.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14084C934 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAdtInitializeAuditingOptions @ 0x140B22004 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v6[3]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]
  __int128 v9; // [rsp+60h] [rbp-18h]

  v8 = 0;
  v6[1] = 0LL;
  v7 = 0;
  v6[0] = 48LL;
  v6[2] = L" \"";
  v9 = 0LL;
  if ( (int)ZwCreatePort((__int64)&qword_140D3CEE8, (__int64)v6) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions(v0);
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v2, v1, v3, v4);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C04350, 0LL, 0LL);
  return 1;
}
