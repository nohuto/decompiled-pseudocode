/*
 * XREFs of ?Hide@SwitchItemThumbnailElement@@UEAAXXZ @ 0x180425780
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180412700 (-Hide@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall SwitchItemThumbnailElement::Hide(SwitchItemThumbnailElement *this)
{
  CMultitaskingViewElementBase::Hide(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 74);
}
