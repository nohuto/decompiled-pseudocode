/*
 * XREFs of ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x1803F4898
 * Callers:
 *     ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x1803F5628 (-_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PEAPEAU1@@Z @ 0x1802DC93C (-ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PE.c)
 *     ?Convert32bppIWICBitmapSourceToHBITMAP@@YAJPEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1803F466C (-Convert32bppIWICBitmapSourceToHBITMAP@@YAJPEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall ConvertIWICBitmapSourceTo32bppHBITMAP(
        struct IWICBitmapSource *a1,
        struct IWICImagingFactory *a2,
        HBITMAP *a3)
{
  int v6; // ebx
  struct _GUID v8; // [rsp+20h] [rbp-18h] BYREF
  struct IWICBitmapSource *v9; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v8 = GUID_WICPixelFormat32bppBGRA;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  v6 = ConvertIWICBitmapSourcePixelFormat(a1, &v8, a2, &v9);
  if ( v6 >= 0 )
    v6 = Convert32bppIWICBitmapSourceToHBITMAP(v9, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v6;
}
