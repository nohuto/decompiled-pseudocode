/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x140910190
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( PsIsCurrentThreadInServerSilo(v1, v0) )
    return *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 141) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}
