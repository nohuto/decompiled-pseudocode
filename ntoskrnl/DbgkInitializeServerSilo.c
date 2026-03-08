/*
 * XREFs of DbgkInitializeServerSilo @ 0x140933D20
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     DbgkpInitializePhase1SiloState @ 0x14080FA00 (DbgkpInitializePhase1SiloState.c)
 */

__int64 __fastcall DbgkInitializeServerSilo(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rdi
  _QWORD *ServerSiloGlobals; // rax
  int v4; // ebx

  v2 = PsAttachSiloToCurrentThread(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  ServerSiloGlobals[121] = 0LL;
  v4 = DbgkpInitializePhase1SiloState((__int64)(ServerSiloGlobals + 121));
  if ( v4 >= 0 )
    v4 = 0;
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v4;
}
