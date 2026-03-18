/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x140289A20
 * Callers:
 *     MiFreeVadRange @ 0x140309A70 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140663A8C (MiCreateCloneChain.c)
 *     MiInsertVadCharges @ 0x1406FA960 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     MiCreateVadEventBitmap @ 0x1407CD394 (MiCreateVadEventBitmap.c)
 *     ExEnableHandleTracing @ 0x1409F8DB0 (ExEnableHandleTracing.c)
 *     MiCreateRotateView @ 0x140A31280 (MiCreateRotateView.c)
 *     MiCreateAweInfoBitMap @ 0x140A415B0 (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140A47CA0 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x140A48868 (MiBuildNewCloneDescriptor.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACEC64 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x14022EC10 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 0, a2);
}
