/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1402591F4
 * Callers:
 *     KeClockInterruptNotify @ 0x140221600 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x140227590 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x140257550 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 33872) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 33856);
}
