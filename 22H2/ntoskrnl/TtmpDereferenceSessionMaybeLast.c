/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1409A531C
 * Callers:
 *     TtmCleanupCurrentSession @ 0x1409A3F40 (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1409A59E0 (TtmpSessionWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x1409AB340 (TtmiSessionTerminalListWorker.c)
 *     TtmpDeleteQueue @ 0x1409AC510 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
