/*
 * XREFs of KiCheckThreadAffinity @ 0x140243570
 * Callers:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242580 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x1402444A0 (KiExecuteAllDpcs.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DBFC (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
