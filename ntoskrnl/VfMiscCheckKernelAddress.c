/*
 * XREFs of VfMiscCheckKernelAddress @ 0x1405D0078
 * Callers:
 *     VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x1405D00E0 (VfMiscKeAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140ABD850 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD2A00 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD2CEC (ViKeAcquireSpinLockCommon.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140ADCCB0 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140ADCD00 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADCD90 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140ADCE00 (VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry.c)
 *     VfMiscKeInsertQueueDpc_Entry @ 0x140ADCEE0 (VfMiscKeInsertQueueDpc_Entry.c)
 *     VfMiscKeReleaseMutant_Entry @ 0x140ADCFB0 (VfMiscKeReleaseMutant_Entry.c)
 *     VfMiscObfDereferenceObject_Entry @ 0x140ADCFF0 (VfMiscObfDereferenceObject_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140ADD010 (VfMiscKeReleaseSpinLock_Entry.c)
 *     VfMiscKeRemoveQueueDpc_Entry @ 0x140ADD080 (VfMiscKeRemoveQueueDpc_Entry.c)
 *     VfMiscKeSetEvent_Entry @ 0x140ADD0A0 (VfMiscKeSetEvent_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140ADD0E0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscObGetObjectSecurity_Entry @ 0x140ADD510 (VfMiscObGetObjectSecurity_Entry.c)
 *     VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140ADD5C0 (VfMiscObReferenceObjectByPointerWithTag_Entry.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140ADD5E0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObjectWithTag_Entry @ 0x140ADD630 (VfMiscObfReferenceObjectWithTag_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140ADE700 (ViMiscValidateSynchronizationObject.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int64 __fastcall VfMiscCheckKernelAddress(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 result; // rax

  result = BugCheckParameter2 + BugCheckParameter3 - 1;
  if ( !BugCheckParameter3 )
    result = BugCheckParameter2;
  if ( result >= BugCheckParameter2 )
  {
    result = BugCheckParameter3 + BugCheckParameter2 - 1;
    if ( !BugCheckParameter3 )
      result = BugCheckParameter2;
    if ( result <= 0x7FFFFFFEFFFFLL )
      return VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
  return result;
}
