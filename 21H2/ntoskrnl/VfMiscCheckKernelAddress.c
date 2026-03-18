/*
 * XREFs of VfMiscCheckKernelAddress @ 0x1406021F8
 * Callers:
 *     VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x140602240 (VfMiscKeAcquireSpinLockAtDpcLevel_Entry.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140A965D0 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140A96660 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140AA3E60 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140AA3EB0 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140AA3F40 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140AA3FB0 (VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockRaiseToSynch_Entry @ 0x140AA3FF0 (VfMiscKeAcquireInStackQueuedSpinLockRaiseToSynch_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLock_Entry @ 0x140AA4030 (VfMiscKeAcquireInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140AA4090 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VfMiscKeInsertQueueDpc_Entry @ 0x140AA4160 (VfMiscKeInsertQueueDpc_Entry.c)
 *     VfMiscKeReleaseMutant_Entry @ 0x140AA4250 (VfMiscKeReleaseMutant_Entry.c)
 *     VfMiscObfDereferenceObject_Entry @ 0x140AA4290 (VfMiscObfDereferenceObject_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140AA42B0 (VfMiscKeReleaseSpinLock_Entry.c)
 *     VfMiscKeRemoveQueueDpc_Entry @ 0x140AA4320 (VfMiscKeRemoveQueueDpc_Entry.c)
 *     VfMiscKeSetEvent_Entry @ 0x140AA4340 (VfMiscKeSetEvent_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AA4380 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscObGetObjectSecurity_Entry @ 0x140AA46E0 (VfMiscObGetObjectSecurity_Entry.c)
 *     VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140AA4790 (VfMiscObReferenceObjectByPointerWithTag_Entry.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140AA47B0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObjectWithTag_Entry @ 0x140AA4800 (VfMiscObfReferenceObjectWithTag_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AA59E0 (ViMiscValidateSynchronizationObject.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfMiscCheckKernelAddress(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  if ( BugCheckParameter2 < 0x7FFFFFFEFFFFLL )
    return VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  result = BugCheckParameter2 + BugCheckParameter3;
  if ( BugCheckParameter2 + BugCheckParameter3 < BugCheckParameter2 )
    return VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return result;
}
