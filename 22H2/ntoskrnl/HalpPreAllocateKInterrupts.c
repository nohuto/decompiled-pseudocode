/*
 * XREFs of HalpPreAllocateKInterrupts @ 0x140B76804
 * Callers:
 *     HalpInterruptInitSystem @ 0x140A8A2E0 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403776B0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpInterruptSetProblemEx @ 0x14051AAC8 (HalpInterruptSetProblemEx.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 HalpPreAllocateKInterrupts()
{
  int MaximumRegisteredProcessorCount; // eax
  int v1; // ebx
  __int64 Pool2; // rax

  if ( HalpKInterruptPostPhaseZero )
    return 0LL;
  MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
  v1 = 16 * MaximumRegisteredProcessorCount;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(4608 * MaximumRegisteredProcessorCount), 0x4B6C6148u);
  if ( Pool2 )
  {
    HalpKInterruptPostPhaseZero = Pool2;
    HalpKInterruptPostPhaseZeroTotal = v1;
    return 0LL;
  }
  HalpInterruptSetProblemEx(0LL, 30, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0xC8u);
  return 3221225495LL;
}
