/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x140230830
 * Callers:
 *     KiSetQuantumTargetThread @ 0x1402270C0 (KiSetQuantumTargetThread.c)
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 *     KiUpdateRunTime @ 0x14022ECE0 (KiUpdateRunTime.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiRequestSoftwareInterrupt @ 0x1402B7A24 (KiRequestSoftwareInterrupt.c)
 *     KiDetachProcess @ 0x14030E460 (KiDetachProcess.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 *     KiSignalThreadForApc @ 0x140353F08 (KiSignalThreadForApc.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KiChainedDispatch @ 0x140417850 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140418220 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140418660 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140418AA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140418EE0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140419310 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x14041D590 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14041D9E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     SwapContext @ 0x14041F970 (SwapContext.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall HalRequestSoftwareInterrupt(char a1)
{
  __int64 v1; // rdx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = 5LL;
  v1 = 31LL;
  if ( a1 != 1 )
    v1 = 47LL;
  *(_OWORD *)((char *)v3 + 4) = 0LL;
  return HalpInterruptSendIpi(v3, v1);
}
