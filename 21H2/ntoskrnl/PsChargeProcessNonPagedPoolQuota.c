/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x140321710
 * Callers:
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559D00 (MiCreateCloneChain.c)
 *     MiCreateVadEventBitmap @ 0x1405FE810 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x14061CAB0 (MiCreateRotateView.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     MiCreateAweInfoBitMap @ 0x1408D5AEC (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8438 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D9064 (MiBuildNewCloneDescriptor.c)
 *     ExEnableHandleTracing @ 0x14094C884 (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D2750 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x1402BF6E0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 0, a2);
}
