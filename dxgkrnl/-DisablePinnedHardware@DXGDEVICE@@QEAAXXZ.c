/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C01E0DD0
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01E0D54 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C01E0E0C (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01E0F04 (-UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1686LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1686LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGDEVICE::UnpinDeviceResources(this);
  DXGDEVICE::UnpinDeviceAllocations(this);
}
