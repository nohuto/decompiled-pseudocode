/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1408FFAA0
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408FDA90 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408FE64C (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x140900190 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x140905A20 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
