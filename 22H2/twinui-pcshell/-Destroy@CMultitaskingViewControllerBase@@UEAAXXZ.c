/*
 * XREFs of ?Destroy@CMultitaskingViewControllerBase@@UEAAXXZ @ 0x1804146D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewControllerBase::Destroy(CMultitaskingViewControllerBase *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
}
