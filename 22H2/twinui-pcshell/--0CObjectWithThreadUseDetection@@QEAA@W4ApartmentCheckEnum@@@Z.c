/*
 * XREFs of ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x1801B6680
 * Callers:
 *     ??0PPIWin32VtcLayoutOperation@@QEAA@XZ @ 0x1800D78D0 (--0PPIWin32VtcLayoutOperation@@QEAA@XZ.c)
 *     ??0CApplicationManager@@QEAA@XZ @ 0x1801B618C (--0CApplicationManager@@QEAA@XZ.c)
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x1801CF564 (--0CImmersiveMode@@QEAA@XZ.c)
 *     ??0CClassicWindowManager@@QEAA@XZ @ 0x1801D2228 (--0CClassicWindowManager@@QEAA@XZ.c)
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1801E3004 (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x1801FBAEC (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 *     ??0?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ @ 0x18036A170 (--0-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ.c)
 *     ??0?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ @ 0x18037F044 (--0-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ.c)
 *     ??0?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x180383A6C (--0-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ.c)
 *     ??0CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x1803ECB64 (--0CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x1803F6CDC (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1803FE988 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAllU.c)
 *     ??0CAppTransitionManager@@QEAA@XZ @ 0x180433ED4 (--0CAppTransitionManager@@QEAA@XZ.c)
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x180459450 (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ??0DesktopOperation@@QEAA@XZ @ 0x18046012C (--0DesktopOperation@@QEAA@XZ.c)
 *     ??0AppSwitchOperation@@QEAA@XZ @ 0x1804762D8 (--0AppSwitchOperation@@QEAA@XZ.c)
 *     ??0WindowArrangementOperation@@QEAA@XZ @ 0x1804777E4 (--0WindowArrangementOperation@@QEAA@XZ.c)
 *     ??0AppResizeOperation@@QEAA@XZ @ 0x180478580 (--0AppResizeOperation@@QEAA@XZ.c)
 *     ??0BackOperation@@QEAA@XZ @ 0x1804791D4 (--0BackOperation@@QEAA@XZ.c)
 *     ??0TabletModePositionerOperation@@QEAA@XZ @ 0x18047970C (--0TabletModePositionerOperation@@QEAA@XZ.c)
 *     ??0PPILayoutOperation@@QEAA@XZ @ 0x18047AE04 (--0PPILayoutOperation@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CObjectWithThreadUseDetection::CObjectWithThreadUseDetection(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = -2;
  *(_DWORD *)(a1 + 44) = a2;
  InitializeCriticalSection((LPCRITICAL_SECTION)a1);
  return a1;
}
