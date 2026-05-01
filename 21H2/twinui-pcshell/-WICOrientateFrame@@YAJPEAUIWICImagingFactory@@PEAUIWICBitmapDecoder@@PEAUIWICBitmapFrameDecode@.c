/*
 * XREFs of ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x1802F05D8
 * Callers:
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x1802E17B8 (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1802F0238 (-WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICM.c)
 *     ?WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1802F0378 (-WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadat.c)
 *     ?WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z @ 0x1802F0514 (-WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z.c)
 */

__int64 __fastcall WICOrientateFrame(
        struct IWICImagingFactory *a1,
        struct IWICBitmapDecoder *a2,
        struct IWICBitmapSource *a3,
        char a4,
        struct IWICBitmapSource **a5)
{
  struct IWICBitmapSource **v5; // rsi
  unsigned int v7; // edi
  struct IWICBitmapFrameDecodeVtbl *v10; // rax
  unsigned int v11; // eax
  struct IWICBitmapSourceVtbl *lpVtbl; // rax

  v5 = a5;
  v7 = 0;
  *a5 = 0LL;
  if ( WICIsOrientationSupported(a2)
    && (v10 = (struct IWICBitmapFrameDecodeVtbl *)a3->lpVtbl,
        a5 = 0LL,
        ((int (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource ***))v10->GetMetadataQueryReader)(
          a3,
          &a5) >= 0) )
  {
    if ( a4 )
      v11 = WICCreateCachedOrientedBitmapSource(a1, a3, (struct IWICMetadataQueryReader *)a5, v5);
    else
      v11 = WICCreateOrientedBitmapSource(a1, a3, (struct IWICMetadataQueryReader *)a5, v5);
    v7 = v11;
    lpVtbl = (*a5)[2].lpVtbl;
  }
  else
  {
    *v5 = a3;
    lpVtbl = (struct IWICBitmapSourceVtbl *)a3->lpVtbl->AddRef;
  }
  ((void (*)(void))lpVtbl)();
  return v7;
}
