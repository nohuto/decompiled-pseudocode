/*
 * XREFs of ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x180011B00
 * Callers:
 *     ?Initialize@AcrylicHostBackdrop@@QEAAJXZ @ 0x180012124 (-Initialize@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180047440 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180011B48 (-InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z.c)
 *     ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180011FD4 (--4-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDes.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001202C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 */

__int64 __fastcall UdwmDcompVisual::Initialize(struct IDCompositionDesktopDevicePartner **this)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice();
  Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=(this + 10, DCompositionInteropDevice);
  v3 = UdwmDcompVisual::InitializeDComp((UdwmDcompVisual *)this, this[10]);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (__int64)"clientcore\\windows\\dwm\\udwm\\UdwmDcompVisual.h",
    (const char *)(unsigned int)v3);
  return v4;
}
