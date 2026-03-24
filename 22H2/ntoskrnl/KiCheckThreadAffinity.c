/*
 * XREFs of KiCheckThreadAffinity @ 0x140258BE4
 * Callers:
 *     KiSearchForNewThread @ 0x140256518 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1402568EC (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x140257550 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402C7A00 (KiSearchForNewThreadOnProcessor.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14035E53C (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
