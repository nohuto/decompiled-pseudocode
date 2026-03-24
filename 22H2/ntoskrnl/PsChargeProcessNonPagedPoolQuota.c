/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x140297040
 * Callers:
 *     MiFreeVadRange @ 0x140298C44 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559A00 (MiCreateCloneChain.c)
 *     MiInsertVadCharges @ 0x14063A390 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     MiCreateVadEventBitmap @ 0x140683D8C (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406A06B0 (MiCreateRotateView.c)
 *     MiCreateAweInfoBitMap @ 0x1408D59DC (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8328 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D8F54 (MiBuildNewCloneDescriptor.c)
 *     ExEnableHandleTracing @ 0x14094C704 (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D1760 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x14021ADA0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 0, a2);
}
