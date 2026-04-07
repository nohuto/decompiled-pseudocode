/*
 * XREFs of ?AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVisual@@@Z @ 0x1800BB8B8
 * Callers:
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800BB7C8 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001202C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DCDC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F194 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        void *a2,
        struct CVisual *a3)
{
  CDesktopManager *v6; // rcx
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  struct IDCompositionDesktopDevicePartner *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 Buffer[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = (__int64)a3;
  if ( !RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), Buffer) )
  {
    DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(v6);
    Buffer[0] = (__int64)DCompositionInteropDevice;
    v8 = DCompositionInteropDevice;
    if ( DCompositionInteropDevice )
      (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice + 8LL))(DCompositionInteropDevice);
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
    v9 = (**(__int64 (__fastcall ***)(struct IDCompositionDesktopDevicePartner *, GUID *, __int64 *))v8)(
           v8,
           &GUID_b0055573_f481_4a01_b924_59a96e1c6b14,
           &v25);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD4,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v9);
LABEL_16:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(Buffer);
      return v10;
    }
    v23 = 0LL;
    v11 = v25;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
    v12 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v11 + 64LL))(v11, a2, &v23);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v12);
LABEL_15:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
      goto LABEL_16;
    }
    v24 = 0LL;
    v13 = *((_QWORD *)this + 12);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, &v24);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = (unsigned int)v14;
      v16 = 219LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)v15);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
      goto LABEL_15;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 72LL))(v24, v23);
    v10 = v17;
    if ( v17 < 0 )
    {
      v15 = (unsigned int)v17;
      v16 = 220LL;
      goto LABEL_14;
    }
    v18 = v23;
    v23 = 0LL;
    v21[0] = a3;
    v21[1] = v18;
    if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), v21, 0x10u, 0LL) )
    {
      v10 = -2147024882;
      v16 = 225LL;
      v15 = 2147942414LL;
      goto LABEL_14;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(Buffer);
  }
  return 0LL;
}
