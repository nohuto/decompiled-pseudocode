/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1409A228C
 * Callers:
 *     TtmCleanupCurrentSession @ 0x1409A0EB0 (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1409A2950 (TtmpSessionWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x1409A82BC (TtmiSessionTerminalListWorker.c)
 *     TtmpDeleteQueue @ 0x1409A9490 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
