/*
 * XREFs of ?ClearDeviceObject@DXGADAPTER@@QEAAXXZ @ 0x1C0041F44
 * Callers:
 *     DxgkReleaseAdapterFdoReference @ 0x1C02BE328 (DxgkReleaseAdapterFdoReference.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
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
