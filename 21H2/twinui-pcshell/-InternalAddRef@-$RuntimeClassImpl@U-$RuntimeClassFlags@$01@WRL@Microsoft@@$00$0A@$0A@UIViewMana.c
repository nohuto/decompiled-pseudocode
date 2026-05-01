/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801DAA84
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D81B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmB_ea_1801D81B0.c)
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18030E634 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x180331808 (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 76), a2);
}
