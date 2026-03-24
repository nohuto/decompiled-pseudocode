/*
 * XREFs of RtlSetConsoleSessionForegroundProcessId @ 0x140695DF0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall RtlSetConsoleSessionForegroundProcessId(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *result; // rax

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
  {
    result = PsGetCurrentServerSiloGlobals(v4, v3);
    *(_QWORD *)(result[141] + 8LL) = a1;
  }
  else
  {
    result = (_QWORD *)a1;
    MEMORY[0xFFFFF78000000338] = a1;
  }
  return result;
}
