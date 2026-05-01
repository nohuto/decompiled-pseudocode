/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180410660
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180410030 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShr_ea_180410030.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 292), a2);
}
