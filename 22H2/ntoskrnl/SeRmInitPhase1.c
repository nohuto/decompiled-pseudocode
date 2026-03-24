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
  __int64 v1; // rcx
  _DWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v4; // [rsp+48h] [rbp-30h]
  const wchar_t *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]
  __int128 v8; // [rsp+60h] [rbp-18h]

  v3[1] = 0;
  v7 = 0;
  v4 = 0LL;
  v6 = 0;
  v3[0] = 48;
  v5 = L" \"";
  v8 = 0LL;
  if ( (int)ZwCreatePort((__int64)&qword_140D2EB70, (__int64)v3) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions(v0);
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v1);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02B70, 0LL, 0LL);
  return 1;
}
