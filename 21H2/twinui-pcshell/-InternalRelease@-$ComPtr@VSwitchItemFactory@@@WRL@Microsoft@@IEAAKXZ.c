/*
 * XREFs of ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803CD84C
 * Callers:
 *     ??1?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x1803CA178 (--1-$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x1803CA664 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1803D909C (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x1803DE908 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ??$MakeAndInitialize@VSwitchItemFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFactory@@@Z @ 0x180400078 (--$MakeAndInitialize@VSwitchItemFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFacto.c)
 *     ?SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804001DC (-SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x180401A80 (--$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Deta.c)
 *     ?VirtualDesktopItemFactory_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180401BD0 (-VirtualDesktopItemFactory_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEA.c)
 *     ??$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerHandoffContext@@AEAPEAUIAppLayout@@AEA_N@Z @ 0x180475148 (--$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WR.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1804753D8 (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHotkeyHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1804B0200 (--$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B0378 (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007A3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
