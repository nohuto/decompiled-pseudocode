/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1409A5540
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1409A3450 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1409A40F8 (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1409A5C10 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x1409AB5A0 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
