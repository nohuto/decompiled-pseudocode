/*
 * XREFs of RtlGetSuiteMask @ 0x1406C26F0
 * Callers:
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetSuiteMask()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(unsigned int *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
