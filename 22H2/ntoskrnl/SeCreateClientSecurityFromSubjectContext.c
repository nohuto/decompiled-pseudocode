/*
 * XREFs of SeCreateClientSecurityFromSubjectContext @ 0x1406A1230
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     RtlSidDominatesForTrust @ 0x140346DF0 (RtlSidDominatesForTrust.c)
 *     SepCreateClientSecurityEx @ 0x1406D6F20 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurityFromSubjectContext(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN ServerIsRemote,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _DMA_ADAPTER *ClientToken; // rbx
  __int64 v5; // r14
  char v6; // r15
  int v11; // r8d
  int v12; // ebp
  NTSTATUS ClientSecurity; // edi
  __int64 v15; // r11
  BOOLEAN DominatesTrust; // [rsp+90h] [rbp+8h] BYREF

  ClientToken = (struct _DMA_ADAPTER *)SubjectContext->ClientToken;
  v5 = 0LL;
  v6 = 0;
  DominatesTrust = 0;
  if ( !ClientToken )
    ClientToken = (struct _DMA_ADAPTER *)SubjectContext->PrimaryToken;
  ObfReferenceObject(ClientToken);
  if ( SubjectContext->ClientToken )
  {
    v12 = 2;
    RtlSidDominatesForTrust(
      *((PSID *)SubjectContext->PrimaryToken + 138),
      *((PSID *)SubjectContext->ClientToken + 138),
      &DominatesTrust);
    if ( !DominatesTrust )
    {
      v6 = 1;
      v5 = v15;
    }
  }
  else
  {
    v12 = 1;
  }
  LOBYTE(v11) = ServerIsRemote;
  ClientSecurity = SepCreateClientSecurityEx(
                     (_DWORD)ClientToken,
                     (_DWORD)ClientSecurityQos,
                     v11,
                     v12,
                     0,
                     SubjectContext->ImpersonationLevel,
                     0,
                     0LL,
                     v6,
                     v5,
                     (__int64)ClientContext);
  if ( ClientSecurity < 0 || !ClientSecurityQos->ContextTrackingMode )
    HalPutDmaAdapter(ClientToken);
  return ClientSecurity;
}
