/*
 * XREFs of ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18014F8A0
 * Callers:
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18014F7E0 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CoCreateInstance_0 @ 0x18009136F (CoCreateInstance_0.c)
 *     ?ScaleWICBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@W4WICBitmapInterpolationMode@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18014F988 (-ScaleWICBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@W4WICBitmapInterpolation.c)
 *     ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x18028C6E4 (-ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitm.c)
 */

__int64 __fastcall ScaleImageWithWIC(
        struct IWICBitmapSource **a1,
        struct IWICBitmapSource *a2,
        struct tagSIZE a3,
        __int64 a4,
        struct IWICBitmapSource **a5)
{
  struct IWICBitmapSource **v5; // rsi
  HRESULT Instance_0; // edi
  enum WICBitmapDitherType v9; // r9d
  enum WICBitmapInterpolationMode v10; // r8d
  bool ppv; // [rsp+20h] [rbp-20h]
  struct _GUID v13; // [rsp+30h] [rbp-10h] BYREF
  struct IWICBitmapSource *v14; // [rsp+60h] [rbp+20h] BYREF

  v5 = a5;
  a5 = a1;
  *v5 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a5);
  if ( a5
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5),
        Instance_0 = CoCreateInstance_0(
                       &CLSID_WICImagingFactory2,
                       0LL,
                       1u,
                       &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                       (LPVOID *)&a5),
        Instance_0 >= 0) )
  {
    v14 = 0LL;
    v13 = GUID_WICPixelFormat32bppPBGRA;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    Instance_0 = ConvertWICBitmapPixelFormat((struct IWICImagingFactory *)a5, a2, &v13, v9, &v14);
    if ( Instance_0 >= 0 )
      Instance_0 = ScaleWICBitmapSource((struct IWICImagingFactory *)a5, v14, v10, a3, ppv, v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return (unsigned int)Instance_0;
}
