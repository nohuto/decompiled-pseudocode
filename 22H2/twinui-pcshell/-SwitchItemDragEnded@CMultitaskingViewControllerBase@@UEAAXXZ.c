/*
 * XREFs of ?SwitchItemDragEnded@CMultitaskingViewControllerBase@@UEAAXXZ @ 0x180414ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewControllerBase::SwitchItemDragEnded(CMultitaskingViewControllerBase *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
}
