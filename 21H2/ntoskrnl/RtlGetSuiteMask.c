/*
 * XREFs of RtlGetSuiteMask @ 0x1406AC6E0
 * Callers:
 *     RtlGetVersion @ 0x1406AC620 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
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
