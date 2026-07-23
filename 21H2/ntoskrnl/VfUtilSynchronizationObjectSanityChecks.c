/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x1409C7B0C
 * Callers:
 *     VerifierKeInitializeEvent @ 0x1409DBB80 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x1409DBCA0 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x1409DBD10 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x1409DCFF0 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x1409DD02C (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409DD60C (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E21A0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E22F0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E2410 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x1409E3200 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140353E60 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140536DD0 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1409C758C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfUtilSynchronizationObjectSanityChecks(PVOID VirtualAddress, ULONG_PTR a2)
{
  int IsSessionAddress; // eax

  LOBYTE(IsSessionAddress) = VfUtilCheckKernelAddress((ULONG_PTR)VirtualAddress, a2);
  if ( (MmVerifierData & 0x800) != 0 )
  {
    IsSessionAddress = MmIsSessionAddress((unsigned __int64)VirtualAddress);
    if ( IsSessionAddress )
      LOBYTE(IsSessionAddress) = VerifierBugCheckIfAppropriate(0xC4u, 0xDFuLL, (ULONG_PTR)VirtualAddress, 0LL, 0LL);
    if ( (MmVerifierData & 0x800) != 0 )
    {
      LOBYTE(IsSessionAddress) = MmIsNonPagedSystemAddressValid(VirtualAddress);
      if ( !(_BYTE)IsSessionAddress )
        LOBYTE(IsSessionAddress) = VerifierBugCheckIfAppropriate(0xC4u, 0xE1uLL, (ULONG_PTR)VirtualAddress, 0LL, 0LL);
    }
  }
  return IsSessionAddress;
}
