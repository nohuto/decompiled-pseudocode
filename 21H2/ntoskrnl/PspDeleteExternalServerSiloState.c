/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x140906398
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409060C0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1409065D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405D1AD0 (ExpTimeZoneCleanupSiloState.c)
 *     EtwShutdown @ 0x140774180 (EtwShutdown.c)
 *     CmCleanupServerSiloState @ 0x14087353C (CmCleanupServerSiloState.c)
 *     SeShutdownServerSilo @ 0x14091C324 (SeShutdownServerSilo.c)
 */

__int64 __fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  _QWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v4; // rbx
  __int64 v5; // rdx

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( ServerSiloGlobals[108] )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0LL, v5);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  CmCleanupServerSiloState(a1);
  return ExpTimeZoneCleanupSiloState(a1);
}
