/*
 * XREFs of ?ClearDeviceObject@DXGADAPTER@@QEAAXXZ @ 0x1C0042FA4
 * Callers:
 *     DxgkReleaseAdapterFdoReference @ 0x1C02C3248 (DxgkReleaseAdapterFdoReference.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ClearDeviceObject(DXGADAPTER *this)
{
  DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 104));
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
}
