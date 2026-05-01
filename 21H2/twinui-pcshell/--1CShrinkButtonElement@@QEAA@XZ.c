/*
 * XREFs of ??1CShrinkButtonElement@@QEAA@XZ @ 0x18040C094
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804102F0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCShrinkButtonElement@@UIMultitasking.c)
 *     ??_ESwitchItemThumbnailElement@@UEAAPEAXI@Z @ 0x180410330 (--_ESwitchItemThumbnailElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CShrinkButtonElement::~CShrinkButtonElement(CShrinkButtonElement *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
