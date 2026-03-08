/*
 * XREFs of ExpTimeZoneCleanupSiloState @ 0x1409F5234
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     KeFlushQueuedDpcs @ 0x1402AF200 (KeFlushQueuedDpcs.c)
 */

__int64 __fastcall ExpTimeZoneCleanupSiloState(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rbx

  v1 = 0;
  v2 = *((_QWORD *)PsGetServerSiloGlobals(a1) + 157);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 560) )
      v1 = KeCancelTimer((PKTIMER)(v2 + 512)) == 0;
    if ( *(_QWORD *)(v2 + 720) && !KeCancelTimer((PKTIMER)(v2 + 672)) )
      v1 = 1;
    if ( *(_QWORD *)(v2 + 880) && !KeCancelTimer((PKTIMER)(v2 + 832)) || v1 )
      KeFlushQueuedDpcs();
  }
  return 0LL;
}
