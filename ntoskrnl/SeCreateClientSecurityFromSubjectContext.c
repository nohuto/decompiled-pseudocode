/*
 * XREFs of SeCreateClientSecurityFromSubjectContext @ 0x140796E30
 * Callers:
 *     <none>
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140247D00 (RtlSidDominatesForTrust.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     SepCreateClientSecurityEx @ 0x1406D5F10 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurityFromSubjectContext(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN ServerIsRemote,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  PACCESS_TOKEN ClientToken; // rbx
  __int64 v5; // r14
  char v6; // r15
  int v11; // ebp
  NTSTATUS ClientSecurity; // edi
  __int64 v14; // r11
  char v15; // [rsp+90h] [rbp+8h] BYREF

  ClientToken = SubjectContext->ClientToken;
  v5 = 0LL;
  v6 = 0;
  v15 = 0;
  if ( !ClientToken )
    ClientToken = SubjectContext->PrimaryToken;
  ObfReferenceObjectWithTag(ClientToken, 0x63436553u);
  if ( SubjectContext->ClientToken )
  {
    v11 = 2;
    RtlSidDominatesForTrust(
      *((_QWORD *)SubjectContext->PrimaryToken + 138),
      *((_QWORD *)SubjectContext->ClientToken + 138),
      &v15);
    if ( !v15 )
    {
      v6 = 1;
      v5 = v14;
    }
  }
  else
  {
    v11 = 1;
  }
  ClientSecurity = SepCreateClientSecurityEx(
                     (__int64)ClientToken,
                     (__int64)ClientSecurityQos,
                     ServerIsRemote,
                     v11,
                     0,
                     SubjectContext->ImpersonationLevel,
                     0,
                     0LL,
                     v6,
                     v5,
                     (__int64)ClientContext);
  if ( ClientSecurity < 0 || !ClientSecurityQos->ContextTrackingMode )
    ObfDereferenceObjectWithTag(ClientToken, 0x63436553u);
  return ClientSecurity;
}
