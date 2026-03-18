/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x14028B210
 * Callers:
 *     MiFreeVadRange @ 0x140309A70 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140663EB0 (MiDeleteCloneDescriptor.c)
 *     MiReturnVadQuota @ 0x1406FB444 (MiReturnVadQuota.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     MiFreeVadEventBitmapCharges @ 0x1407DFFFC (MiFreeVadEventBitmapCharges.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8D50 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1409F8DB0 (ExEnableHandleTracing.c)
 *     MiFreeRotateVadEvent @ 0x140A31330 (MiFreeRotateVadEvent.c)
 *     MiReturnVadCharges @ 0x140A3C514 (MiReturnVadCharges.c)
 *     MiDeleteAweBitMap @ 0x140A41A68 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140A47CA0 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x140A47E50 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x140A48868 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x140A489C4 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x140A49064 (MiFreeCloneDescriptor.c)
 *     VfIoFreeIrp @ 0x140ACE7E4 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACEC64 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1402AD070 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].Affinity.StaticBitmap[27], a1, 0LL, a2);
  return result;
}
