/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x1409C6B1C
 * Callers:
 *     VerifierKeInitializeEvent @ 0x1409DAB90 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x1409DACB0 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x1409DAD20 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x1409DC000 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x1409DC03C (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409DC61C (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E11B0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E1300 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E1420 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x1409E2210 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1402C9800 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140536AD0 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1409C659C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
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
