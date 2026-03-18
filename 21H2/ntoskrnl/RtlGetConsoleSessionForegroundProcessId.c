/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1409B5CB0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}
