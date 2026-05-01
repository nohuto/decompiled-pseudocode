/*
 * XREFs of ?WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptions@@@Z @ 0x1802F01C8
 * Callers:
 *     ?WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1802EFFC8 (-WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICM.c)
 *     ?WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1802F0108 (-WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WICGetTransformOptionFromMetadata(
        struct IWICMetadataQueryReader *a1,
        enum WICBitmapTransformOptions *a2)
{
  struct IWICMetadataQueryReaderVtbl *lpVtbl; // rax
  int v4; // eax
  unsigned int v5; // edi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  *a2 = WICBitmapTransformRotate0;
  v8 = 0LL;
  lpVtbl = a1->lpVtbl;
  *(_OWORD *)pvar = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IWICMetadataQueryReader *, const wchar_t *, PROPVARIANT *))lpVtbl->GetMetadataByName)(
         a1,
         L"System.Photo.Orientation",
         pvar);
  v5 = v4;
  if ( v4 == -2003292352 || LOWORD(pvar[0]) != 18 )
  {
    *a2 = WICBitmapTransformRotate0;
    v5 = 0;
  }
  else if ( v4 >= 0 )
  {
    switch ( LOWORD(pvar[1]) )
    {
      case 2u:
        *a2 = WICBitmapTransformFlipHorizontal;
        break;
      case 3u:
        *a2 = WICBitmapTransformRotate180;
        break;
      case 4u:
        *a2 = WICBitmapTransformFlipVertical;
        break;
      case 5u:
        *a2 = WICBitmapTransformFlipVertical|WICBitmapTransformRotate90;
        break;
      case 6u:
        *a2 = WICBitmapTransformRotate90;
        break;
      case 7u:
        *a2 = WICBitmapTransformFlipVertical|WICBitmapTransformRotate270;
        break;
      case 8u:
        *a2 = WICBitmapTransformRotate270;
        break;
      default:
        *a2 = WICBitmapTransformRotate0;
        break;
    }
  }
  PropVariantClear(pvar);
  return v5;
}
