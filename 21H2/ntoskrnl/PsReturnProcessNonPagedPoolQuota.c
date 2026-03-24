/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1403183E0
 * Callers:
 *     MiFreeVadRange @ 0x1403185C4 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140559FF4 (MiDeleteCloneDescriptor.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406B1774 (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x1406C1A28 (MiFreeRotateVadEvent.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x1406EE790 (MiReturnVadQuota.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     MiDeleteAweBitMap @ 0x1408D5DEC (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D82D8 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D8468 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D8F04 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x1408D9060 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x1408D96E8 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094C654 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x14094C6B4 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x1409D124C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D1750 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x140341980 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 0LL, a2);
  return result;
}
