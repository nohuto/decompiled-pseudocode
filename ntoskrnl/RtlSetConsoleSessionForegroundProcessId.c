/*
 * XREFs of RtlSetConsoleSessionForegroundProcessId @ 0x14079B200
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

struct _LIST_ENTRY *__fastcall RtlSetConsoleSessionForegroundProcessId(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *result; // rax

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
  {
    result = PsGetCurrentServerSiloGlobals();
    result[82].Blink->Blink = (struct _LIST_ENTRY *)a1;
  }
  else
  {
    result = (struct _LIST_ENTRY *)MmWriteableSharedUserData;
    *(_QWORD *)(MmWriteableSharedUserData + 824) = a1;
  }
  return result;
}
