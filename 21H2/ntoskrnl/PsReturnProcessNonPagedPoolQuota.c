/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x140323130
 * Callers:
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x14055A234 (MiDeleteCloneDescriptor.c)
 *     MiFreeVadEventBitmapCharges @ 0x140610724 (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x140620730 (MiFreeRotateVadEvent.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x140705B70 (MiReturnVadQuota.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     MiDeleteAweBitMap @ 0x1408D5F4C (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8438 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D85C8 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D9064 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x1408D91C0 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x1408D9848 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094C824 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x14094C884 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x1409D224C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D2750 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x14034C6D0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 0LL, a2);
  return result;
}
