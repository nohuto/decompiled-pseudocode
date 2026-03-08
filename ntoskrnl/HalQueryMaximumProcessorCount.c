/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x140375910
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140372460 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerRegister @ 0x140373EB4 (HalpTimerRegister.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140374B44 (HalpMmAllocatePerProcessorMemory.c)
 *     RtlpHpHeapCreate @ 0x140375288 (RtlpHpHeapCreate.c)
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 *     HalpMmReservePageTablePages @ 0x14037B1CC (HalpMmReservePageTablePages.c)
 *     HalpHvDiscover @ 0x1403A09D8 (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x1403C8870 (HalpHvTimerInitialize.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x14050B150 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x14050B2B0 (HalpEfiBugCheckAddPagesCallback.c)
 *     EtwpInitLoggerContext @ 0x140761AA8 (EtwpInitLoggerContext.c)
 *     HalpInterruptGetIrtInfo @ 0x14080BB74 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x14080BBE4 (HalpQueryAcpiResourceRequirements.c)
 *     VfAvlInitializeTreeEx @ 0x140ABA4D4 (VfAvlInitializeTreeEx.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140B3D3DC (HalpInitializePmcCounterSetInfo.c)
 *     HalpInitializeInterrupts @ 0x140B3D448 (HalpInitializeInterrupts.c)
 *     ExInitializeHandleTablePackage @ 0x140B4839C (ExInitializeHandleTablePackage.c)
 * Callees:
 *     HalpInterruptModel @ 0x14028EADC (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 HalQueryMaximumProcessorCount()
{
  int v0; // eax
  unsigned int v1; // r8d
  unsigned int v2; // r10d
  ULONG_PTR BugCheckParameter4; // r10

  if ( !HalpInterruptMaxProcessors || !HalpNumaInitializationComplete )
  {
    HalpInterruptSetProblemEx(0, 11, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 726);
    KeBugCheckEx(0x5Cu, 0x8000uLL, HalpInterruptLastProblem, 0LL, BugCheckParameter4);
  }
  v0 = HalpInterruptModel();
  if ( (v0 == 1 || v0 == 2 || (unsigned int)(v0 - 3) <= 1) && HalpNumaConfig )
    v2 = *(_DWORD *)(HalpNumaConfig + 60);
  if ( v2 < v1 )
    return v1;
  return v2;
}
