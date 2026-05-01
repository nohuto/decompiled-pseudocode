/*
 * XREFs of ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x180432758
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCloseAnimationCoordinator@@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x180429220 (--$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AE.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAddAnimationCoordinator@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x180433130 (--$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFacto.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics@@HPEAUISwitchThumbnailFactory@@@Z @ 0x180433D00 (-RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?BeginBatch@CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAAXAEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180431C18 (-BeginBatch@CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAAXAEBV-$ComPtr@UIDCompBatcher@@@WRL@M.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::RuntimeClassInitialize(
        ItemAnimationCoordinatorBase *this,
        struct ISwitchThumbnailFactory *a2,
        const struct _GUID *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a2);
  v6 = *((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  DCompThumbnailHelpers::CDCompFactoryBatcher::BeginBatch((__int64 *)this + 27, &v6, (__int64)a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return 0LL;
}
