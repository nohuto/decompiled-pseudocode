/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x14037FEF0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140256900 (PpmParkSteerInterrupts.c)
 *     HvlStartBootLogicalProcessors @ 0x140376790 (HvlStartBootLogicalProcessors.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403776B0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerRegister @ 0x140379104 (HalpTimerRegister.c)
 *     HalpTimerInitSystem @ 0x14037B080 (HalpTimerInitSystem.c)
 *     HalpMmReservePageTablePages @ 0x14037EBBC (HalpMmReservePageTablePages.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14037FEA4 (HalpMmAllocatePerProcessorMemory.c)
 *     RtlpHpHeapCreate @ 0x140397668 (RtlpHpHeapCreate.c)
 *     HalpHvDiscover @ 0x1403A3CCC (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x1403CD390 (HalpHvTimerInitialize.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x14050D230 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x14050D390 (HalpEfiBugCheckAddPagesCallback.c)
 *     EtwpInitLoggerContext @ 0x1407B3A70 (EtwpInitLoggerContext.c)
 *     HalpInterruptGetIrtInfo @ 0x140820AF0 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x140820B60 (HalpQueryAcpiResourceRequirements.c)
 *     VfAvlInitializeTreeEx @ 0x140ABE450 (VfAvlInitializeTreeEx.c)
 *     KeStartAllProcessors @ 0x140B4AC90 (KeStartAllProcessors.c)
 *     HalpInitializeInterrupts @ 0x140B4BA90 (HalpInitializeInterrupts.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140B6A0E0 (HalpInitializePmcCounterSetInfo.c)
 *     ExInitializeHandleTablePackage @ 0x140B76B88 (ExInitializeHandleTablePackage.c)
 * Callees:
 *     HalpInterruptModel @ 0x14031F8FC (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x14051AAC8 (HalpInterruptSetProblemEx.c)
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
