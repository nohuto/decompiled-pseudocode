/*
 * XREFs of ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x1803F5628
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1803F4A88 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOption@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803F47B0 (-ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOpt.c)
 *     ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x1803F4898 (-ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU.c)
 */

__int64 __fastcall _ScaleBitmap(HBITMAP a1, unsigned int a2, HBITMAP *a3)
{
  HRESULT Instance; // ebx
  enum WICBitmapAlphaChannelOption v7; // r8d
  struct IWICImagingFactory *v8; // rbx
  struct IWICBitmapSource *v10; // [rsp+30h] [rbp-10h] BYREF
  struct IWICBitmapSource *v11; // [rsp+38h] [rbp-8h] BYREF
  struct IWICImagingFactory *ppv; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)&ppv);
  if ( Instance >= 0 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    Instance = ConvertHBITMAPToWICBitmap(ppv, a1, v7, &v11);
    if ( Instance >= 0 )
    {
      v13 = 0LL;
      v8 = ppv;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))v8->lpVtbl->CreateBitmapScaler)(
                   v8,
                   &v13);
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, _QWORD, _QWORD, int))(*(_QWORD *)v13 + 64LL))(
                     v13,
                     v11,
                     a2,
                     a2,
                     3);
        if ( Instance >= 0 )
        {
          v10 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
          Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v13)(
                       v13,
                       &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
                       &v10);
          if ( Instance >= 0 )
            Instance = ConvertIWICBitmapSourceTo32bppHBITMAP(v10, ppv, a3);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance;
}
