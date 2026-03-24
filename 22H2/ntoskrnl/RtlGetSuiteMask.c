/*
 * XREFs of RtlGetSuiteMask @ 0x14068F690
 * Callers:
 *     RtlGetVersion @ 0x14068F5D0 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlGetSuiteMask(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return *(unsigned int *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 141) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
