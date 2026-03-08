/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1402AC388
 * Callers:
 *     KiUpdateRunTime @ 0x14022ECE0 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1402AC070 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 34896) )
    return 1;
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return *(_QWORD *)(a1 + 34880) != 0LL;
  return result;
}
