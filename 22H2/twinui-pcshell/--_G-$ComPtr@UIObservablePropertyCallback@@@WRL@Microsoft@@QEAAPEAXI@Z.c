/*
 * XREFs of ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18006B090
 * Callers:
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18006ADCC (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 *     ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x1800BBE1C (-Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C26D0 (-EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ??1?$CLocalSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@@@QEAA@XZ @ 0x1801D71DC (--1-$CLocalSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppVie.c)
 *     ??1CAppViewManager@@UEAA@XZ @ 0x1801D7298 (--1CAppViewManager@@UEAA@XZ.c)
 *     ?RemoveListener@?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAJPEAX@Z @ 0x18040396C (-RemoveListener@-$ObservableProperty@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Int.c)
 *     ??1SwitchItem@@UEAA@XZ @ 0x18040D900 (--1SwitchItem@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18040DA40 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@UISwitchItem@@UISwit.c)
 *     ??1VirtualDesktopItem@@UEAA@XZ @ 0x18040ED4C (--1VirtualDesktopItem@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@U?$ChainInterfaces@UIVirtualDesktopItemInternal@@UIVirtualDesktopItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18040EE80 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@U-$ChainInterfaces@U.c)
 *     ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x18042EE70 (--1CVirtualDesktopContainerElement@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
