/*
 * XREFs of ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180005C6C
 * Callers:
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x180004A14 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180004D18 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180005C2C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER@@@Z @ 0x18024BB84 (-ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowReceiver::RequestRedraw(CProjectedShadowReceiver *this)
{
  __int64 v1; // rcx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = *((_QWORD *)this + 8);
    if ( v1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 72LL))(v1, 1LL);
  }
}
