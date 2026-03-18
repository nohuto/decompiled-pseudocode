/*
 * XREFs of SeDeleteClientSecurity @ 0x14071D1F0
 * Callers:
 *     AlpcpQuerySidMessage @ 0x140714BEC (AlpcpQuerySidMessage.c)
 *     AlpcpDeletePort @ 0x140718780 (AlpcpDeletePort.c)
 *     AlpcSecurityDestroyProcedure @ 0x14071C9C0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpImpersonateMessage @ 0x14071CE70 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x14073C740 (AlpcpExposeTokenAttribute.c)
 *     EtwpFreeLoggerContext @ 0x14078E1AC (EtwpFreeLoggerContext.c)
 *     NtImpersonateThread @ 0x1407F62F0 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x140978A64 (AlpcpQueryTokenModifiedIdMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
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
