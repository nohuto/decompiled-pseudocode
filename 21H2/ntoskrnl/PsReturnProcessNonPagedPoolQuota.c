/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1403107C0
 * Callers:
 *     MiFreeVadRange @ 0x1402ECEB0 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x1405BA624 (MiDeleteCloneDescriptor.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406D804C (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x1406EB238 (MiFreeRotateVadEvent.c)
 *     MiReturnVadQuota @ 0x1407BC8F0 (MiReturnVadQuota.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     MiReturnVadCharges @ 0x140977F8C (MiReturnVadCharges.c)
 *     MiDeleteAweBitMap @ 0x14097CF84 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x14097EE60 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x14097EFF0 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x14098056C (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x1409806C8 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x140980D40 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8D78 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1409F8DD8 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x140A8CEB8 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x140A8D338 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1403493B0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].Affinity.StaticBitmap[27], a1, 0LL, a2);
  return result;
}
