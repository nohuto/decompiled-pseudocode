/*
 * XREFs of HalpInterruptSetProblemEx @ 0x1404D19C8
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14030BF90 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1403A33F8 (HalpInterruptSetLineState.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A360C (HalpInterruptInitializeLocalUnit.c)
 *     HalpConnectThermalInterrupt @ 0x1404D14F0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptUnmap @ 0x140760E58 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099822C (HalpInterruptMaskAcpi.c)
 *     HalpInterruptStartProcessor @ 0x140999F64 (HalpInterruptStartProcessor.c)
 *     HalpDpReplayInterrupts @ 0x1409A8B30 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x1409A8D30 (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A90BC (HalpInterruptUpdateLocalUnitIdentifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  HalpInterruptLastProblem = a2;
  if ( a1 )
  {
    result = a5;
    *(_DWORD *)(a1 + 312) = a5;
    *(_DWORD *)(a1 + 292) = a2;
    *(_DWORD *)(a1 + 296) = a3;
    *(_QWORD *)(a1 + 304) = a4;
  }
  return result;
}
