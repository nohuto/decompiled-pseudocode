/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1403024F0
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x1407448F8 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
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
