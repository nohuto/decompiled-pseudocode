/*
 * XREFs of HalpInterruptGsiToLine @ 0x14028EF10
 * Callers:
 *     HalpInterruptSetDestination @ 0x14028E950 (HalpInterruptSetDestination.c)
 *     HalpInterruptFindControllerAndLineState @ 0x14028EDE8 (HalpInterruptFindControllerAndLineState.c)
 *     HalEnableInterrupt @ 0x14028F730 (HalEnableInterrupt.c)
 *     HalpInterruptParseMadt @ 0x140376468 (HalpInterruptParseMadt.c)
 *     HalpInterruptEnableNmi @ 0x140378254 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B13E0 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptConnect @ 0x1405021F0 (HalpInterruptConnect.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405025EC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14050342C (HalpInterruptSetLineSpecificOverride.c)
 *     ExtEnvSetVpptTarget @ 0x1405066D8 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1405074D0 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140508738 (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptIsGsiValid @ 0x140930530 (HalpInterruptIsGsiValid.c)
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x14028EF5C (HalpInterruptFindLinesForGsiRange.c)
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
