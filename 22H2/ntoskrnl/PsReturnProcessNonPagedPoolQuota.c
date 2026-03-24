/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x140298A60
 * Callers:
 *     MiFreeVadRange @ 0x140298C44 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140559F34 (MiDeleteCloneDescriptor.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     MiInsertVadCharges @ 0x14063A390 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x14063BEB0 (MiReturnVadQuota.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     MiFreeVadEventBitmapCharges @ 0x140694934 (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x1406A4400 (MiFreeRotateVadEvent.c)
 *     MiDeleteAweBitMap @ 0x1408D5E3C (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8328 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D84B8 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D8F54 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x1408D90B0 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x1408D9738 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094C6A4 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x14094C704 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x1409D125C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D1760 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1402C2010 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 0LL, a2);
  return result;
}
