/*
 * XREFs of ExpWriteTimeZoneBias @ 0x140811BF4
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x14080F488 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1, __int64 a2)
{
  struct _LIST_ENTRY *v3; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo((__int64)a1, a2) )
    v3 = PsGetCurrentServerSiloGlobals()[82].Blink + 37;
  else
    v3 = (struct _LIST_ENTRY *)(MmWriteableSharedUserData + 32);
  LODWORD(v3->Blink) = a1[1];
  LODWORD(v3->Flink) = *a1;
  result = (unsigned int)a1[1];
  HIDWORD(v3->Flink) = result;
  return result;
}
