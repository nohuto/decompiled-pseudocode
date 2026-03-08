/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x140377F50
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x140379DFC (HalpInitializeInterruptsPn.c)
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A94574 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpInterruptInitializeLocalUnit @ 0x1403786F0 (HalpInterruptInitializeLocalUnit.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
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
