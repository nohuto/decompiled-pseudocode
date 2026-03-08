/*
 * XREFs of ExpNlsInitSiloState @ 0x1409F877C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     ExInitializeNls @ 0x14080F164 (ExInitializeNls.c)
 */

__int64 __fastcall ExpNlsInitSiloState(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v1; // rdi
  NTSTATUS v2; // ebx

  v1 = PsAttachSiloToCurrentThread(a1);
  v2 = ExInitializeNls();
  if ( v2 >= 0 )
    PsGetCurrentServerSiloGlobals()[66].Flink->Blink = (struct _LIST_ENTRY *)1;
  PsDetachSiloFromCurrentThread(v1);
  return (unsigned int)v2;
}
