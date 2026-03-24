/*
 * XREFs of HalpInterruptGsiToLine @ 0x1403789CC
 * Callers:
 *     HalEnableInterrupt @ 0x1403775A0 (HalEnableInterrupt.c)
 *     HalpInterruptRemap @ 0x140378050 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestination @ 0x140378400 (HalpInterruptSetDestination.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14038628C (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1E84 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A306C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A32A0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403AF294 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptParseMadt @ 0x1403AFD94 (HalpInterruptParseMadt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EF6C4 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptConnect @ 0x1404BB388 (HalpInterruptConnect.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404BB584 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BB810 (HalpInterruptSetRemappedDestinationHv.c)
 *     ExtEnvSetVpptTarget @ 0x1404BF6E4 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1404C04C8 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptUnmap @ 0x140760E58 (HalpInterruptUnmap.c)
 *     HalpInterruptIsGsiValid @ 0x1408646E0 (HalpInterruptIsGsiValid.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140378A18 (HalpInterruptFindLinesForGsiRange.c)
 */

__int64 __fastcall HalpInterruptGsiToLine(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  _DWORD *LinesForGsiRange; // rax

  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  if ( !LinesForGsiRange )
    return 3221226021LL;
  *a2 = LinesForGsiRange[4];
  a2[1] = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  return 0LL;
}
