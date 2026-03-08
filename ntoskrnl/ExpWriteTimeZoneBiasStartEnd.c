/*
 * XREFs of ExpWriteTimeZoneBiasStartEnd @ 0x140811C34
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

struct _LIST_ENTRY *__fastcall ExpWriteTimeZoneBiasStartEnd(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *result; // rax
  __int64 *v5; // r9
  __int64 *p_Blink; // r8
  struct _LIST_ENTRY *Blink; // r8

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
  {
    result = PsGetCurrentServerSiloGlobals();
    Blink = result[82].Blink;
    v5 = (__int64 *)&Blink[38];
    p_Blink = (__int64 *)&Blink[38].Blink;
  }
  else
  {
    result = (struct _LIST_ENTRY *)MmWriteableSharedUserData;
    v5 = (__int64 *)(MmWriteableSharedUserData + 968);
    p_Blink = (__int64 *)(MmWriteableSharedUserData + 976);
  }
  *v5 = a1;
  *p_Blink = a2;
  return result;
}
