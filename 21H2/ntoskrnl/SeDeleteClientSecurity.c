/*
 * XREFs of SeDeleteClientSecurity @ 0x1407A8070
 * Callers:
 *     AlpcpQuerySidMessage @ 0x14066B464 (AlpcpQuerySidMessage.c)
 *     NtImpersonateThread @ 0x1406BFD10 (NtImpersonateThread.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     AlpcpDeletePort @ 0x14074D800 (AlpcpDeletePort.c)
 *     AlpcSecurityDestroyProcedure @ 0x1407A7300 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpExposeTokenAttribute @ 0x1407A9720 (AlpcpExposeTokenAttribute.c)
 *     AlpcpImpersonateMessage @ 0x1407B0C70 (AlpcpImpersonateMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x14080C0F4 (AlpcpQueryTokenModifiedIdMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
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
