/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x1409C6B0C
 * Callers:
 *     VerifierKeInitializeEvent @ 0x1409DAB80 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x1409DACA0 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x1409DAD10 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x1409DBFF0 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x1409DC02C (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409DC60C (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E11A0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E12F0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E1410 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x1409E2200 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140349110 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140536B90 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1409C658C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D54 (VerifierBugCheckIfAppropriate.c)
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
