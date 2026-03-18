/*
 * XREFs of ViMiscValidateSynchronizationObject @ 0x140AA59E0
 * Callers:
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140AA3CA0 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140AA3D10 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscExInitializeResourceLite_Entry @ 0x140AA3D60 (VfMiscExInitializeResourceLite_Entry.c)
 *     VfMiscKeInitializeEvent_Entry @ 0x140AA40C0 (VfMiscKeInitializeEvent_Entry.c)
 *     VfMiscKeInitializeMutant_Entry @ 0x140AA40E0 (VfMiscKeInitializeMutant_Entry.c)
 *     VfMiscKeInitializeSemaphore_Entry @ 0x140AA4100 (VfMiscKeInitializeSemaphore_Entry.c)
 *     VfMiscKeInitializeTimerEx_Entry @ 0x140AA4120 (VfMiscKeInitializeTimerEx_Entry.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AA58C0 (ViMiscValidateKeWaitUsage.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x14045BA00 (MmIsNonPagedSystemAddressValid.c)
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall ViMiscValidateSynchronizationObject(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  BOOLEAN result; // al

  VfMiscCheckKernelAddress(BugCheckParameter2, a2);
  if ( MmIsSessionAddress(BugCheckParameter2) )
    VerifierBugCheckIfAppropriate(0xC4u, 0xDFuLL, BugCheckParameter2, 0LL, 0LL);
  result = MmIsNonPagedSystemAddressValid((PVOID)BugCheckParameter2);
  if ( !result )
    return VerifierBugCheckIfAppropriate(0xC4u, 0xE1uLL, BugCheckParameter2, 0LL, 0LL);
  return result;
}
