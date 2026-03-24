/*
 * XREFs of PoIsInitializedStopWatch @ 0x14034C198
 * Callers:
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     PopGetStopWatchByRequestType @ 0x1406F61C0 (PopGetStopWatchByRequestType.c)
 *     CmpGenerateFlushControlData @ 0x140723504 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x140723A48 (HvGetHiveLogFileStatus.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079F008 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140868330 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}
