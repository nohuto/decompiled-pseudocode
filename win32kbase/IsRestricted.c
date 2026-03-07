BOOLEAN __fastcall IsRestricted(PETHREAD Thread)
{
  PACCESS_TOKEN v2; // rdi
  struct _KPROCESS *ThreadProcess; // rax
  BOOLEAN v4; // bl
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int8 v7; // [rsp+40h] [rbp+18h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  v6 = 0;
  v2 = PsReferenceImpersonationToken(Thread, &v7, &v6, (PSECURITY_IMPERSONATION_LEVEL)&v8);
  if ( !v2 || v8 < 2 )
  {
    ThreadProcess = PsGetThreadProcess(Thread);
    v2 = PsReferencePrimaryToken(ThreadProcess);
  }
  v4 = SeTokenIsRestricted(v2);
  ObfDereferenceObject(v2);
  return v4;
}
