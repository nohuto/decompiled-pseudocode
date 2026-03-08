/*
 * XREFs of RtlGetSuiteMask @ 0x1407A1440
 * Callers:
 *     RtlGetVersion @ 0x1407A1380 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlGetSuiteMask(__int64 a1, __int64 a2)
{
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[82].Blink[1].Flink);
  else
    return MEMORY[0xFFFFF780000002D0];
}
