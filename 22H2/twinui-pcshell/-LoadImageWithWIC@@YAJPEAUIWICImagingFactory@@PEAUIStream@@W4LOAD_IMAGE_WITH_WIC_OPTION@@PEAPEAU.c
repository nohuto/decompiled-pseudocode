/*
 * XREFs of ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x1802E1548
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA550 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FE9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x18014F52C (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1802DD65C (-CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x1802F0368 (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LoadImageWithWIC(
        struct IWICImagingFactory *a1,
        __int64 a2,
        int a3,
        struct IWICBitmapSource **a4,
        struct IWICBitmapDecoder *a5)
{
  struct IWICImagingFactory *v8; // rbx
  HRESULT Instance; // ebx
  HRESULT (__stdcall *CreateDecoderFromStream)(IWICImagingFactory *, IStream *, const GUID *, WICDecodeOptions, IWICBitmapDecoder **); // rdi
  struct IWICBitmapDecoder *v11; // rbx
  HRESULT (__stdcall *GetFrame)(IWICBitmapDecoder *, UINT, IWICBitmapFrameDecode **); // rdi
  HRESULT v13; // eax
  struct IWICImagingFactory *ppv; // [rsp+60h] [rbp+30h] BYREF
  struct IWICBitmapFrameDecode *v16; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppv);
  v8 = ppv;
  if ( !ppv )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    Instance = CoCreateInstance(
                 &CLSID_WICImagingFactory2,
                 0LL,
                 1u,
                 &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                 (LPVOID *)&ppv);
    if ( Instance < 0 )
      goto LABEL_12;
    v8 = ppv;
  }
  a5 = 0LL;
  CreateDecoderFromStream = v8->lpVtbl->CreateDecoderFromStream;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64, GUID *, _QWORD, struct IWICBitmapDecoder **))CreateDecoderFromStream)(
               v8,
               a2,
               &GUID_VendorMicrosoftBuiltIn,
               0LL,
               &a5);
  if ( Instance >= 0 )
  {
    v16 = 0LL;
    v11 = a5;
    GetFrame = a5->lpVtbl->GetFrame;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    Instance = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, _QWORD, struct IWICBitmapFrameDecode **))GetFrame)(
                 v11,
                 0LL,
                 &v16);
    if ( Instance >= 0 )
    {
      if ( a3 )
        v13 = WICOrientateFrame(ppv, a5, v16, a3 == 2, a4);
      else
        v13 = ((__int64 (__fastcall *)(struct IWICBitmapFrameDecode *, GUID *, struct IWICBitmapSource **))v16->lpVtbl->QueryInterface)(
                v16,
                &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
                a4);
      Instance = v13;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance;
}
