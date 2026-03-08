/*
 * XREFs of SeDeleteClientSecurity @ 0x1406D4FF0
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x1406D4580 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpImpersonateMessage @ 0x1406D4C70 (AlpcpImpersonateMessage.c)
 *     EtwpFreeLoggerContext @ 0x1406F29FC (EtwpFreeLoggerContext.c)
 *     AlpcpDeletePort @ 0x140714C40 (AlpcpDeletePort.c)
 *     AlpcpQuerySidMessage @ 0x1407185C0 (AlpcpQuerySidMessage.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     NtImpersonateThread @ 0x140773790 (NtImpersonateThread.c)
 *     AlpcpExposeTokenAttribute @ 0x1407CE140 (AlpcpExposeTokenAttribute.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1409759C4 (AlpcpQueryTokenModifiedIdMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall SeDeleteClientSecurity(__int64 a1)
{
  _DWORD *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(_DWORD **)(a1 + 16);
  if ( v1[48] == 1 || v1 )
    return ObfDereferenceObjectWithTag(v1, 0x63436553u);
  return result;
}
