/*
 * XREFs of ??4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z @ 0x18041FD98
 * Callers:
 *     ?GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x180420ED0 (-GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThum.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall MultitaskingViewAnimationCoordinatorBase::ThumbnailData::operator=(__int64 *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(a1, a2);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(a1 + 1, a2 + 1);
  return a1;
}
