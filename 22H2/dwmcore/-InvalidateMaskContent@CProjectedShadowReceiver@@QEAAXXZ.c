/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180004D18
 * Callers:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180004424 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001FA60 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18004A5D0 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A7CC (--1CVisual@@MEAA@XZ.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ @ 0x18024B85C (-EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x18024BBA8 (-ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180005C6C (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800FF334 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowReceiver::InvalidateMaskContent(CProjectedShadowReceiver *this)
{
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((char *)this + 112);
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, CProjectedShadowReceiver *))(*(_QWORD *)this + 72LL))(
      this,
      0LL,
      this);
    CProjectedShadowReceiver::RequestRedraw(this);
  }
}
