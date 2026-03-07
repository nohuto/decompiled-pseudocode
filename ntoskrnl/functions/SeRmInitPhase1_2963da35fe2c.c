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
