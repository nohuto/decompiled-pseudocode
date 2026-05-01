/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1804A3B50
 * Callers:
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A3C48 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180087A9C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A21F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801E9AF8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??0CVirtualDesktopFactory@@QEAA@XZ @ 0x1804A3BF0 (--0CVirtualDesktopFactory@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopFactory,CVirtualDesktopFactory,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  CVirtualDesktopFactory *v7; // rax
  CVirtualDesktopFactory *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  CVirtualDesktopFactory *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (CVirtualDesktopFactory *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = CVirtualDesktopFactory::CVirtualDesktopFactory(v7);
    v9 = *a2;
    v10 = (__int64)v8;
    v11 = *a3;
    v14 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)v8 + 2, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)(v10 + 24), v11);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
        v10,
        v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
