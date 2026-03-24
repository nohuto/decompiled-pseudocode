/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1408FF990
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408FD980 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408FE53C (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x140900080 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x140905910 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
