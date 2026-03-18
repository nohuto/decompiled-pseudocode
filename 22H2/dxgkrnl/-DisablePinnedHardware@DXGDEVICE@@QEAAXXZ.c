/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C01EF6F0
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01EF674 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C01EF72C (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01EF824 (-UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1688LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1688LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGDEVICE::UnpinDeviceResources(this);
  DXGDEVICE::UnpinDeviceAllocations(this);
}
