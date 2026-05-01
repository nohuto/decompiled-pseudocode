/*
 * XREFs of ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18031CCA4
 * Callers:
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x180313D10 (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x180317EF8 (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x1803190F4 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x18031C664 (-_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18031CD30 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManager.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18031CE58 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_RaiseViewEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v8; // ebx
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = *a4;
  if ( v10[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10[0] + 8LL))(v10[0]);
  v8 = ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, a2, a3, 0LL, v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a4);
  return v8;
}
