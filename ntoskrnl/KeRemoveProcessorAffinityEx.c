/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x140237640
 * Callers:
 *     KxFlushSingleTb @ 0x1402120DC (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x140212260 (KxFlushNonGlobalTb.c)
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 *     KiIpiSetTargetAffinity @ 0x140233704 (KiIpiSetTargetAffinity.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140234630 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiCheckKeepAlive @ 0x1402372DC (KiCheckKeepAlive.c)
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     PpmParkUnblockIdle @ 0x1402EA9E0 (PpmParkUnblockIdle.c)
 *     KeSynchronizeSecurityDomain @ 0x1402EAE28 (KeSynchronizeSecurityDomain.c)
 *     PpmPerfApplyProcessorStates @ 0x1402ED3A0 (PpmPerfApplyProcessorStates.c)
 *     KeSynchronizeAddressPolicy @ 0x1402F550C (KeSynchronizeAddressPolicy.c)
 *     KeFreezeExecution @ 0x14036ADA0 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x14036B528 (KiSendFreeze.c)
 *     KxFlushMultipleTb @ 0x14038C454 (KxFlushMultipleTb.c)
 *     KxFlushEntireTb @ 0x1403AD5FC (KxFlushEntireTb.c)
 *     KiForwardTick @ 0x1403C61D0 (KiForwardTick.c)
 *     HalpNmiReboot @ 0x1405198E0 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057833C (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     PpmUnlockProcessors @ 0x140583CC8 (PpmUnlockProcessors.c)
 *     PpmParkComputeUnparkMask @ 0x14059A174 (PpmParkComputeUnparkMask.c)
 *     RtlUpdateSwapReference @ 0x140818560 (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E1344 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x140A9A884 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = KiProcessorIndexToNumberMappingTable[a2];
  result = *a1;
  v4 = v2 >> 6;
  if ( (unsigned int)result > v2 >> 6 )
  {
    result = *(_QWORD *)&a1[4 * v4 + 4] & ~(1LL << (v2 & 0x3F));
    *(_QWORD *)&a1[4 * v4 + 4] = result;
  }
  return result;
}
