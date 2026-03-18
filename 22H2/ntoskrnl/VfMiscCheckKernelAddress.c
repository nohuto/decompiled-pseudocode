/*
 * XREFs of VfMiscCheckKernelAddress @ 0x1405D2528
 * Callers:
 *     VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x1405D2590 (VfMiscKeAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140AC1850 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD6A00 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD6CEC (ViKeAcquireSpinLockCommon.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140AE0CB0 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140AE0D00 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140AE0D90 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140AE0E00 (VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry.c)
 *     VfMiscKeInsertQueueDpc_Entry @ 0x140AE0EE0 (VfMiscKeInsertQueueDpc_Entry.c)
 *     VfMiscKeReleaseMutant_Entry @ 0x140AE0FB0 (VfMiscKeReleaseMutant_Entry.c)
 *     VfMiscObfDereferenceObject_Entry @ 0x140AE0FF0 (VfMiscObfDereferenceObject_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140AE1010 (VfMiscKeReleaseSpinLock_Entry.c)
 *     VfMiscKeRemoveQueueDpc_Entry @ 0x140AE1080 (VfMiscKeRemoveQueueDpc_Entry.c)
 *     VfMiscKeSetEvent_Entry @ 0x140AE10A0 (VfMiscKeSetEvent_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AE10E0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscObGetObjectSecurity_Entry @ 0x140AE1510 (VfMiscObGetObjectSecurity_Entry.c)
 *     VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140AE15C0 (VfMiscObReferenceObjectByPointerWithTag_Entry.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140AE15E0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObjectWithTag_Entry @ 0x140AE1630 (VfMiscObfReferenceObjectWithTag_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE2700 (ViMiscValidateSynchronizationObject.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
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
