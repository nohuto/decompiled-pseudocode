/*
 * XREFs of ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800BBD48
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800BBF74 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001202C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012378 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180019DAC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18002B964 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DCDC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BC294 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::CreateProjectedShadowReceiverVisual(CProjectedShadowScene *this, __int64 a2)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  struct IDCompositionDesktopDevicePartner *v5; // rbx
  _QWORD *v6; // r14
  int inserted; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  struct CVisual *v10; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HANDLE hObject; // [rsp+60h] [rbp+8h] BYREF
  struct IDCompositionDesktopDevicePartner *v15; // [rsp+70h] [rbp+18h] BYREF

  hObject = 0LL;
  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(this);
  v15 = DCompositionInteropDevice;
  v5 = DCompositionInteropDevice;
  if ( DCompositionInteropDevice )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice + 8LL))(DCompositionInteropDevice);
  v6 = (_QWORD *)((char *)this + 48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, GUID *, char *))(*(_QWORD *)v5 + 216LL))(
               v5,
               &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
               (char *)this + 48);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v9 = 105LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)inserted);
    goto LABEL_23;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, _QWORD, HANDLE *))(*(_QWORD *)v5 + 224LL))(
               v5,
               *v6,
               &hObject);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v9 = 108LL;
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, char *))(*(_QWORD *)v5 + 48LL))(
               v5,
               (char *)this + 40);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v9 = 111LL;
    goto LABEL_21;
  }
  inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v5 + 24LL))(v5);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v9 = 112LL;
    goto LABEL_21;
  }
  inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, *((_QWORD *)this + 5));
  v8 = inserted;
  if ( inserted < 0 )
  {
    v9 = 115LL;
    goto LABEL_21;
  }
  inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v5 + 24LL))(v5);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v9 = 116LL;
    goto LABEL_21;
  }
  inserted = CVisual::CreateFromSharedHandle(hObject, (struct CVisual **)this + 7);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v9 = 119LL;
    goto LABEL_21;
  }
  inserted = CProjectedShadowScene::PositionProjectedShadowReceiverVisual(this);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v9 = 122LL;
    goto LABEL_21;
  }
  v10 = (struct CVisual *)*((_QWORD *)this + 7);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           a2);
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               v10,
               0LL,
               0,
               1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v9 = 125LL;
    goto LABEL_21;
  }
  *((_QWORD *)this + 2) = a2;
  v8 = 0;
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v8;
}
