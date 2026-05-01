/*
 * XREFs of ?WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1802F0378
 * Callers:
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x1802F05D8 (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptions@@@Z @ 0x1802F0438 (-WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptio.c)
 */

__int64 __fastcall WICCreateOrientedBitmapSource(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        struct IWICMetadataQueryReader *a3,
        struct IWICBitmapSource **a4)
{
  int v7; // ebx
  struct IWICImagingFactoryVtbl *lpVtbl; // rax
  struct IWICBitmapSource *v9; // rcx
  struct IWICBitmapSource *v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v12 = 0;
  v7 = WICGetTransformOptionFromMetadata(a3, (enum WICBitmapTransformOptions *)&v12);
  if ( v7 >= 0 )
  {
    lpVtbl = a1->lpVtbl;
    v11 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))lpVtbl->CreateBitmapFlipRotator)(
           a1,
           &v11);
    if ( v7 >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, _QWORD))v11->lpVtbl[1].QueryInterface)(
             v11,
             a2,
             v12);
      if ( v7 >= 0 )
      {
        v9 = v11;
        *a4 = v11;
        ((void (__fastcall *)(struct IWICBitmapSource *))v9->lpVtbl->AddRef)(v9);
      }
      ((void (__fastcall *)(struct IWICBitmapSource *))v11->lpVtbl->Release)(v11);
    }
  }
  return (unsigned int)v7;
}
