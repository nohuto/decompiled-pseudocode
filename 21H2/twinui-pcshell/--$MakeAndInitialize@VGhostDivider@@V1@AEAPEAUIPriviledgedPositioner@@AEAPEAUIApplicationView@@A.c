/*
 * XREFs of ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@@Z @ 0x18048F528
 * Callers:
 *     ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@AEBU_GUID@@PEAPEAX@Z @ 0x18048F9C0 (-GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDivide.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A2210 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ??0GhostDivider@@QEAA@XZ @ 0x18048F634 (--0GhostDivider@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x18048FAAC (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@@Z @ 0x18048FDDC (-RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4G.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GhostDivider,GhostDivider,IPriviledgedPositioner * &,IApplicationView * &,enum GhostDividerPlacement &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4)
{
  GhostDivider *v8; // rax
  int v9; // ebx
  GhostDivider *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rdx
  volatile int *v15; // rdx
  GhostDivider *v17; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (GhostDivider *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = GhostDivider::GhostDivider(v8);
    v11 = *a4;
    v12 = *a3;
    v13 = (__int64)v10;
    v14 = *a2;
    v17 = v10;
    v9 = GhostDivider::RuntimeClassInitialize(v10, v14, v12, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          v13,
          v15);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
