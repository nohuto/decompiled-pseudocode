/*
 * XREFs of ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x180012234
 * Callers:
 *     ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x1800100C0 (-ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043128 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIDCompositionDevice@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800122FC (--$As@UIDCompositionDevice@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001286C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x1800141B0 (-ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD8C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F244 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180086E30 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BAFA0 (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 */

__int64 __fastcall UdwmDcompVisual::ValidateDevice(UdwmDcompVisual *this, bool *a2)
{
  char *v4; // r14
  struct IDCompositionDesktopDevicePartner *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct CVisual *v11; // rdx
  int inserted; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
    *a2 = 0;
  v4 = (char *)this + 80;
  v5 = (struct IDCompositionDesktopDevicePartner *)*((_QWORD *)this + 10);
  if ( !v5 || v5 != CDesktopManager::GetDCompositionInteropDevice() )
  {
    v14 = 0;
    goto LABEL_18;
  }
  v15 = 0LL;
  v14 = 1;
  v6 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<IDCompositionDevice>(v4, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 351LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
    return v7;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 208LL))(v15, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 353LL;
    goto LABEL_14;
  }
  if ( !v14 )
    CDesktopManager::HandleInteropDeviceLost();
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
  if ( v14 )
    return 0LL;
LABEL_18:
  if ( a2 )
    *a2 = 1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4);
  SharedDwmDcompVisual::ReleaseDCompResources((UdwmDcompVisual *)((char *)this + 16));
  SharedDwmDcompVisual::ReleaseDCompResources((UdwmDcompVisual *)((char *)this + 48));
  v10 = *((_QWORD *)this + 2);
  if ( v10
    && (v11 = (struct CVisual *)*((_QWORD *)this + 6)) != 0LL
    && (inserted = VisualCollection::InsertRelative((VisualCollection *)(v10 + 32), v11, 0LL, 0, 1),
        v7 = inserted,
        inserted < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"clientcore\\windows\\dwm\\udwm\\UdwmDcompVisual.h",
      (const char *)(unsigned int)inserted);
  }
  else
  {
    v7 = 0;
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)v7);
    return v7;
  }
  result = UdwmDcompVisual::ReinitializeDComp(this);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
