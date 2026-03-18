/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x14037B900
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x14037D7AC (HalpInitializeInterruptsPn.c)
 *     HalpPostSleepMP @ 0x140A97068 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A976B4 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpInterruptInitializeLocalUnit @ 0x14037C0A0 (HalpInterruptInitializeLocalUnit.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 HalpInterruptReinitializeThisProcessor()
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = HalpInterruptController;
  result = *(unsigned int *)(HalpInterruptController + 244);
  if ( (result & 1) != 0 )
  {
    result = HalpInterruptInitializeLocalUnit(HalpInterruptController);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, KeGetPcr()->Prcb.Number, BugCheckParameter4);
  }
  return result;
}
