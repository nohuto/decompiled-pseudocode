/*
 * XREFs of ?Show@CSwitchItemElement@@UEAAXXZ @ 0x1804111E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FD1BC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1803FD240 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?Show@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180413D90 (-Show@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180414050 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 */

void __fastcall CSwitchItemElement::Show(CSwitchItemElement *this)
{
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 71);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v3);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v2, &v3, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  CMultitaskingViewElementBase::Show(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 76) + 136LL))(*((_QWORD *)this + 76));
  CMultitaskingViewElementBase::_LayoutChildren(this, 0LL, 0LL);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v2);
}
