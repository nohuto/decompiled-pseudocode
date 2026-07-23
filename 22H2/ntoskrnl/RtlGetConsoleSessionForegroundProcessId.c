/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x140910080
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
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
