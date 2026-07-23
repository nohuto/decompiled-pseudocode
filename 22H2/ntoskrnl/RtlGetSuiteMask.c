/*
 * XREFs of RtlGetSuiteMask @ 0x14068F690
 * Callers:
 *     RtlGetVersion @ 0x14068F5D0 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
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
