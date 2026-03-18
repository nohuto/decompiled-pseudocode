/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x1409ABED8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ABC00 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ExpNlsDeleteSiloState @ 0x14063C25C (ExpNlsDeleteSiloState.c)
 *     CmpStopSiloKeyLockTracker @ 0x1407F85CC (CmpStopSiloKeyLockTracker.c)
 *     EtwShutdown @ 0x1407FDA6C (EtwShutdown.c)
 *     ObCleanupSiloState @ 0x140983EC0 (ObCleanupSiloState.c)
 *     RtlNlsDeleteState @ 0x1409B6808 (RtlNlsDeleteState.c)
 *     SeShutdownServerSilo @ 0x1409C5B80 (SeShutdownServerSilo.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F80D4 (ExpTimeZoneCleanupSiloState.c)
 */

__int64 __fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  volatile __int64 *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v4; // rbx
  ULONG_PTR v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  ServerSiloGlobals = (volatile __int64 *)PsGetServerSiloGlobals(a1);
  if ( *((_QWORD *)ServerSiloGlobals + 108) )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  v7 = 0LL;
  CmpInitializeThreadInfo((__int64)&v7);
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    CmpStopSiloKeyLockTracker(BugCheckParameter2);
  CmCleanupThreadInfo((__int64 *)&v7);
  ObCleanupSiloState(ServerSiloGlobals);
  v5 = *((_QWORD *)ServerSiloGlobals + 132);
  if ( v5 )
  {
    ExpNlsDeleteSiloState(v5);
    *((_QWORD *)ServerSiloGlobals + 132) = 0LL;
  }
  RtlNlsDeleteState(ServerSiloGlobals);
  return ExpTimeZoneCleanupSiloState(a1);
}
