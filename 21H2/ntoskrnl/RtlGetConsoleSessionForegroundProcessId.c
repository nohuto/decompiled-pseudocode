/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x140910030
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlGetConsoleSessionForegroundProcessId(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 141) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}
