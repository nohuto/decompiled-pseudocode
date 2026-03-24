/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1403A5970
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14070F440 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409145B8 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 __fastcall RtlGetCurrentServiceSessionId(__int64 a1, __int64 a2)
{
  __int64 ThreadServerSilo; // rax
  unsigned int **v3; // rax

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(a1, a2)
    || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
  {
    v3 = (unsigned int **)&PspHostSiloGlobals;
  }
  else
  {
    v3 = *(unsigned int ***)(ThreadServerSilo + 1272);
  }
  return *v3[141];
}
