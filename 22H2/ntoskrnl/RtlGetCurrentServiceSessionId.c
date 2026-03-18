/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x14036DE20
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x1407F51D0 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCC7C (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  __int64 CurrentServerSilo; // rax
  unsigned int **v1; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v1 = *(unsigned int ***)(CurrentServerSilo + 1488);
  else
    v1 = (unsigned int **)&PspHostSiloGlobals;
  return *v1[165];
}
