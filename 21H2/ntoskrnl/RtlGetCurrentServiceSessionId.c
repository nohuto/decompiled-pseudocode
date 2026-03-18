/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x14025D8B0
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x140696944 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  __int64 ThreadServerSilo; // rax
  unsigned int **v1; // rax

  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( ThreadServerSilo )
    v1 = *(unsigned int ***)(ThreadServerSilo + 1464);
  else
    v1 = (unsigned int **)&PspHostSiloGlobals;
  return *v1[165];
}
