/*
 * XREFs of RtlGetSuiteMask @ 0x14060ADD0
 * Callers:
 *     RtlGetVersion @ 0x14060AD10 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetSuiteMask(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( PsIsCurrentThreadInServerSilo(v1, v0) )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 141) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
