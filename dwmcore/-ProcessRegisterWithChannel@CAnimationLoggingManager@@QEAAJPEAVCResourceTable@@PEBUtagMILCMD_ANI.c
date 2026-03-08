/*
 * XREFs of ?ProcessRegisterWithChannel@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL@@@Z @ 0x1800FEFC0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessRegisterWithChannel(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL *a3)
{
  *(_QWORD *)(*((_QWORD *)this + 6) + 64LL) = this;
  (*(void (__fastcall **)(CAnimationLoggingManager *, struct CResourceTable *, const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL *))(*(_QWORD *)this + 8LL))(
    this,
    a2,
    a3);
  return 0LL;
}
