/*
 * XREFs of ExpWriteTimeZoneBiasStartEnd @ 0x1405D1D18
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 *__fastcall ExpWriteTimeZoneBiasStartEnd(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *result; // rax
  __int64 *v8; // r8

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
  {
    v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v5, v4) + 141);
    result = (__int64 *)(v6 + 608);
    v8 = (__int64 *)(v6 + 616);
  }
  else
  {
    result = (__int64 *)0xFFFFF780000003C8LL;
    v8 = (__int64 *)0xFFFFF780000003D0LL;
  }
  *result = a1;
  *v8 = a2;
  return result;
}
