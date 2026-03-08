/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x14034CCC0
 * Callers:
 *     MiFreeVadRange @ 0x1402D5634 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x14066143C (MiCreateCloneChain.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     MiCreateVadEventBitmap @ 0x140756324 (MiCreateVadEventBitmap.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 *     ExEnableHandleTracing @ 0x1409F5F20 (ExEnableHandleTracing.c)
 *     MiCreateRotateView @ 0x140A2E550 (MiCreateRotateView.c)
 *     MiCreateAweInfoBitMap @ 0x140A3E8D0 (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140A44FD0 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x140A45B98 (MiBuildNewCloneDescriptor.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACAC64 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x140312850 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 0, a2);
}
