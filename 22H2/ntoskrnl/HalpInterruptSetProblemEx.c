/*
 * XREFs of HalpInterruptSetProblemEx @ 0x14051AAC8
 * Callers:
 *     HalDisableInterrupt @ 0x14031F710 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x14031F770 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestination @ 0x14031F928 (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptFindControllerAndLineState @ 0x14031FC08 (HalpInterruptFindControllerAndLineState.c)
 *     HalGetMessageRoutingInfo @ 0x140320040 (HalGetMessageRoutingInfo.c)
 *     HalEnableInterrupt @ 0x140320550 (HalEnableInterrupt.c)
 *     HalpInterruptParseMadt @ 0x140379E18 (HalpInterruptParseMadt.c)
 *     HalpInterruptParseAcpiTables @ 0x14037A3CC (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptEnableNmi @ 0x14037BC04 (HalpInterruptEnableNmi.c)
 *     HalpInterruptInitializeLocalUnit @ 0x14037C0A0 (HalpInterruptInitializeLocalUnit.c)
 *     HalpConnectThermalInterrupt @ 0x14037C510 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptRemap @ 0x14037C728 (HalpInterruptRemap.c)
 *     HalpInterruptFindBestRouting @ 0x14037CB74 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14037CBF8 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetLineState @ 0x14037CD5C (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x14037CFB0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetLineStateInternal @ 0x14037D080 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptGenerateMessage @ 0x14037D374 (HalpInterruptGenerateMessage.c)
 *     HalpAllocateKInterrupt @ 0x14037D9A8 (HalpAllocateKInterrupt.c)
 *     HalpInterruptInitializeController @ 0x14037EC3C (HalpInterruptInitializeController.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FEF0 (HalQueryMaximumProcessorCount.c)
 *     HalGetInterruptTargetInformation @ 0x140380E30 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AECB4 (HalpInterruptRemapFixedLines.c)
 *     HalpMaskInterrupt @ 0x1403B1FF0 (HalpMaskInterrupt.c)
 *     HalpInterruptSelectController @ 0x1403B3CF8 (HalpInterruptSelectController.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1403CFA90 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405044CC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405046CC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetRemappedLineState @ 0x140504870 (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptResetThisProcessor @ 0x140504F50 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptRequestInterrupt @ 0x140505280 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x1405053F8 (HalpInterruptRestoreClock.c)
 *     HalpInterruptDpReplaceBegin @ 0x1405209FC (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x1409334A8 (HalpInterruptUnmap.c)
 *     HalpInterruptStartProcessor @ 0x140A895A0 (HalpInterruptStartProcessor.c)
 *     HalpInterruptMaskAcpi @ 0x140A95448 (HalpInterruptMaskAcpi.c)
 *     HalpDpReplayInterrupts @ 0x140A97BD0 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x140A97DBC (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A98140 (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInitializeInterrupts @ 0x140B4BA90 (HalpInitializeInterrupts.c)
 *     HalpPreAllocateKInterrupts @ 0x140B76804 (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = a5;
  HalpInterruptLastProblemLine = a5;
  HalpInterruptLastProblemController = a1;
  HalpInterruptLastProblem = a2;
  HalpInterruptLastProblemStatus = a3;
  HalpInterruptLastProblemFile = a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 316) = a2;
    *(_DWORD *)(a1 + 320) = a3;
    *(_QWORD *)(a1 + 328) = a4;
    *(_DWORD *)(a1 + 336) = a5;
  }
  return result;
}
