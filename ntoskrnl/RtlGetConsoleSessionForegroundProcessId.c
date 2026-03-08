/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1409BC330
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

struct _LIST_ENTRY *__fastcall RtlGetConsoleSessionForegroundProcessId(__int64 a1, __int64 a2)
{
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return PsGetCurrentServerSiloGlobals()[82].Blink->Blink;
  else
    return (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000338];
}
