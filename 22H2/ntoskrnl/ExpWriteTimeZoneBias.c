/*
 * XREFs of ExpWriteTimeZoneBias @ 0x1405D1CC8
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D4A60 (ExInitializeUtcTimeZoneBias.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo((__int64)a1, a2) )
    v5 = (_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v4, v3) + 141) + 592LL);
  else
    v5 = (_DWORD *)0xFFFFF78000000020LL;
  v5[2] = a1[1];
  *v5 = *a1;
  result = (unsigned int)a1[1];
  v5[1] = result;
  return result;
}
