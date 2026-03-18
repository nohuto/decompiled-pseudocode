/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x14030B700
 * Callers:
 *     MiFreeVadRange @ 0x1402ECEB0 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1405BA158 (MiCreateCloneChain.c)
 *     MiCreateVadEventBitmap @ 0x1406BFC4C (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406E97B4 (MiCreateRotateView.c)
 *     MiInsertVadCharges @ 0x1407B88C0 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     MiCreateAweInfoBitMap @ 0x14097CAE8 (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x14097EE60 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x14098056C (MiBuildNewCloneDescriptor.c)
 *     ExEnableHandleTracing @ 0x1409F8DD8 (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x140A8D338 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x1402AC010 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 0, a2);
}
