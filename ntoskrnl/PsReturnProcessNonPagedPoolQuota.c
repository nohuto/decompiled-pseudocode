/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1402955D0
 * Callers:
 *     MiFreeVadRange @ 0x1402D5634 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140661860 (MiDeleteCloneDescriptor.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     MiFreeVadEventBitmapCharges @ 0x140703AFC (MiFreeVadEventBitmapCharges.c)
 *     MiReturnVadQuota @ 0x140704558 (MiReturnVadQuota.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F5EC0 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1409F5F20 (ExEnableHandleTracing.c)
 *     MiFreeRotateVadEvent @ 0x140A2E600 (MiFreeRotateVadEvent.c)
 *     MiReturnVadCharges @ 0x140A39830 (MiReturnVadCharges.c)
 *     MiDeleteAweBitMap @ 0x140A3ED88 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140A44FD0 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x140A45180 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x140A45B98 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x140A46394 (MiFreeCloneDescriptor.c)
 *     VfIoFreeIrp @ 0x140ACA7E4 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACAC64 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1403148A0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].Affinity.StaticBitmap[27], a1, 0LL, a2);
  return result;
}
