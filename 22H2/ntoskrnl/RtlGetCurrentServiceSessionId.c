/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1403A5970
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14070F440 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409145B8 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  __int64 ThreadServerSilo; // rax
  _DWORD **v1; // rax

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext()
    || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
  {
    v1 = (_DWORD **)&PspHostSiloGlobals;
  }
  else
  {
    v1 = *(_DWORD ***)(ThreadServerSilo + 1272);
  }
  return *v1[141];
}
