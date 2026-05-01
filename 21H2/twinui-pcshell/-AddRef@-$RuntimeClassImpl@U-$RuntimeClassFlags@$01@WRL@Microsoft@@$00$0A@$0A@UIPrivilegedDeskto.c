/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A9870
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180161150 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBri.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@UIAppViewCloseOverrideBehavior@@UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1801613D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@U.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@UIAppViewCloseOverrideBehavior@@UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180161D60 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScr_ea_180161D60.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@UIAppViewCloseOverrideBehavior@@UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1801708E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScr_ea_1801708E0.c)
 *     CreationThreadDispatcher::RunAsync__lambda_22e0521af8107b5e6397e610f3471390___ @ 0x18038658C (CreationThreadDispatcher--RunAsync__lambda_22e0521af8107b5e6397e610f3471390___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_a024861b188cf4ada81763f84c86531a___ @ 0x1803867C0 (CreationThreadDispatcher--RunAsync__lambda_a024861b188cf4ada81763f84c86531a___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___ @ 0x1803868C4 (CreationThreadDispatcher--RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___ @ 0x1803869C8 (CreationThreadDispatcher--RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___ @ 0x180386AD0 (CreationThreadDispatcher--RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___.c)
 *     ??$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenManager@@@Z @ 0x180473B0C (--$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenManager@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(a1);
}
