/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1402BBB30
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402201D0 (HalpInterruptSendIpi.c)
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     KxFlushEntireTb @ 0x14022F2F0 (KxFlushEntireTb.c)
 *     PpmParkUnblockIdle @ 0x140307C00 (PpmParkUnblockIdle.c)
 *     KxFlushNonGlobalTb @ 0x1403097E4 (KxFlushNonGlobalTb.c)
 *     KiCheckKeepAlive @ 0x140310D70 (KiCheckKeepAlive.c)
 *     KeSynchronizeSecurityDomain @ 0x1403154EC (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x14031B76C (KeSynchronizeAddressPolicy.c)
 *     KxFlushSingleTb @ 0x140334B68 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140343D14 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x140343EE0 (KiIpiSendRequest.c)
 *     PpmPerfApplyProcessorStates @ 0x140398250 (PpmPerfApplyProcessorStates.c)
 *     HalpNmiReboot @ 0x1404D2BC8 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051D630 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x14051E0C0 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x140567C38 (PpmUnlockProcessors.c)
 *     RtlUpdateSwapReference @ 0x1407CABDC (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14093A3F8 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x1409AE8B4 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  result = v3 >> 6;
  if ( *a1 > (unsigned int)result )
  {
    v5 = (unsigned int)result;
    result = *(_QWORD *)&a1[4 * result + 4] & ~(1LL << (v3 & 0x3F));
    *(_QWORD *)&a1[4 * v5 + 4] = result;
  }
  return result;
}
