/*
 * XREFs of ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x18028C6E4
 * Callers:
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1800F4F5C (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18014F8A0 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x18028C408 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConvertWICBitmapPixelFormat(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        struct _GUID *a3,
        enum WICBitmapDitherType a4,
        struct IWICBitmapSource **a5)
{
  HRESULT (__stdcall *CreateFormatConverter)(IWICImagingFactory *, IWICFormatConverter **); // rbx
  int v9; // ebx
  __int64 v11[7]; // [rsp+40h] [rbp-38h] BYREF

  *a5 = 0LL;
  v11[0] = 0LL;
  CreateFormatConverter = a1->lpVtbl->CreateFormatConverter;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  v9 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))CreateFormatConverter)(a1, v11);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, struct _GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v11[0] + 64LL))(
           v11[0],
           a2,
           a3,
           0LL,
           0LL,
           0LL,
           0);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v11[0])(
             v11[0],
             &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
             a5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  return (unsigned int)v9;
}
