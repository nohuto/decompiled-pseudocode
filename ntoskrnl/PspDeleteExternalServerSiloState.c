/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x1409A9DE8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409A9B20 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     PsGetPermanentSiloContext @ 0x1402B6120 (PsGetPermanentSiloContext.c)
 *     ExpNlsDeleteSiloState @ 0x1406074F4 (ExpNlsDeleteSiloState.c)
 *     ObCleanupSiloState @ 0x140977DD0 (ObCleanupSiloState.c)
 *     RtlNlsDeleteState @ 0x1409B69D8 (RtlNlsDeleteState.c)
 *     SeShutdownServerSilo @ 0x1409C5F40 (SeShutdownServerSilo.c)
 *     EtwShutdown @ 0x1409DFD2C (EtwShutdown.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F5234 (ExpTimeZoneCleanupSiloState.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A191F8 (CmpStopSiloKeyLockTracker.c)
 */

__int64 __fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  volatile __int64 *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v4; // rbx
  _QWORD *v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  ServerSiloGlobals = (volatile __int64 *)PsGetServerSiloGlobals(a1);
  if ( *((_QWORD *)ServerSiloGlobals + 108) )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0LL);
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
  v5 = (_QWORD *)*((_QWORD *)ServerSiloGlobals + 132);
  if ( v5 )
  {
    ExpNlsDeleteSiloState(v5);
    *((_QWORD *)ServerSiloGlobals + 132) = 0LL;
  }
  RtlNlsDeleteState(ServerSiloGlobals);
  return ExpTimeZoneCleanupSiloState(a1);
}
