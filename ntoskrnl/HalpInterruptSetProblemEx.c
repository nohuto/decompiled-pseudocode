/*
 * XREFs of HalpInterruptSetProblemEx @ 0x140518598
 * Callers:
 *     HalDisableInterrupt @ 0x14028E8F0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x14028E950 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestination @ 0x14028EB08 (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptFindControllerAndLineState @ 0x14028EDE8 (HalpInterruptFindControllerAndLineState.c)
 *     HalGetMessageRoutingInfo @ 0x14028F220 (HalGetMessageRoutingInfo.c)
 *     HalEnableInterrupt @ 0x14028F730 (HalEnableInterrupt.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     HalpMaskInterrupt @ 0x140376370 (HalpMaskInterrupt.c)
 *     HalpInterruptParseMadt @ 0x140376468 (HalpInterruptParseMadt.c)
 *     HalpInterruptParseAcpiTables @ 0x140376A1C (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptEnableNmi @ 0x140378254 (HalpInterruptEnableNmi.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403786F0 (HalpInterruptInitializeLocalUnit.c)
 *     HalpConnectThermalInterrupt @ 0x140378B60 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpInterruptFindBestRouting @ 0x1403791C4 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x140379248 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x140379600 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptGenerateMessage @ 0x1403799C4 (HalpInterruptGenerateMessage.c)
 *     HalpAllocateKInterrupt @ 0x140379FF8 (HalpAllocateKInterrupt.c)
 *     HalpInterruptInitializeController @ 0x14037B24C (HalpInterruptInitializeController.c)
 *     HalGetInterruptTargetInformation @ 0x14037D3A0 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptRemapFixedLines @ 0x1403A9F64 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSelectController @ 0x1403AF008 (HalpInterruptSelectController.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1403CA4E0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405023EC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405025EC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetRemappedLineState @ 0x140502790 (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptResetThisProcessor @ 0x140502E70 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptRequestInterrupt @ 0x1405031A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x140503318 (HalpInterruptRestoreClock.c)
 *     HalpInterruptDpReplaceBegin @ 0x14051E4CC (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 *     HalpInterruptStartProcessor @ 0x140A86180 (HalpInterruptStartProcessor.c)
 *     HalpInterruptMaskAcpi @ 0x140A92308 (HalpInterruptMaskAcpi.c)
 *     HalpDpReplayInterrupts @ 0x140A94A90 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x140A94C7C (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A95000 (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInitializeInterrupts @ 0x140B3D448 (HalpInitializeInterrupts.c)
 *     HalpPreAllocateKInterrupts @ 0x140B7228C (HalpPreAllocateKInterrupts.c)
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
