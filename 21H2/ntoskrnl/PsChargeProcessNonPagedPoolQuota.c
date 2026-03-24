/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x1403169C0
 * Callers:
 *     MiFreeVadRange @ 0x1403185C4 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559AC0 (MiCreateCloneChain.c)
 *     MiCreateVadEventBitmap @ 0x14069F4CC (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406BD8A0 (MiCreateRotateView.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     MiCreateAweInfoBitMap @ 0x1408D598C (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D82D8 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D8F04 (MiBuildNewCloneDescriptor.c)
 *     ExEnableHandleTracing @ 0x14094C6B4 (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D1750 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x14021ADE0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 0, a2);
}
